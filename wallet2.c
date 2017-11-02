#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "kyk_utils.h"
#include "gens_block.h"
#include "block_store.h"
#include "kyk_wallet.h"
#include "dbg.h"

#define WALLET_NAME "my_wallet2"

int match_cmd(char *src, char *cmd);

int main(int argc, char *argv[])
{
    struct kyk_wallet* wallet = NULL;
    char cwd[1024];
    char *res = NULL;
    char *wdir = NULL;

    res = getcwd(cwd, sizeof(cwd));
    check(res != NULL, "failed to find the current dir");
    wdir = kyk_pth_concat(cwd, WALLET_NAME);
    check(wdir != NULL, "failed to find the wallet dir");

    if(argc == 1){
	printf("usage: %s command [args]\n", argv[0]);
	printf("init a wallet: %s init\n", argv[0]);
	printf("query block: %s getblock [block hash]\n", argv[0]);
    }
    
    if(argc == 2){
	if(match_cmd(argv[1], "init")){
	    if(kyk_detect_dir(wdir) != 1){
		mkdir(wdir, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
	    }
	    wallet = kyk_init_wallet(wdir);
	    check(wallet != NULL, "failed to init wallet");
	    printf("wallet is in %s\n", wdir);
	}
    }

    if(wdir) free(wdir);
    if(wallet) kyk_destroy_wallet(wallet);
    
    return 0;

error:
    if(wdir) free(wdir);
    if(wallet) kyk_destroy_wallet(wallet);
    return -1;
}

int match_cmd(char *src, char *cmd)
{
    size_t count = strlen(cmd);
    int res = 0;
    
    res = strncmp(src, cmd, count) == 0 ? 1 : 0;

    return res;
}