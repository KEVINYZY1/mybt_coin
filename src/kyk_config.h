#ifndef __KYK_CONFIG_H__
#define __KYK_CONFIG_H__

#include "kyk_defs.h"

struct KeyValuePair;

struct config {
    char *fileName;
    struct KeyValuePair *list;
};

int kyk_config_load(const char* fileName, struct config **conf);
int kyk_config_write(struct config *conf, const char *filename);
int kyk_config_save(struct config *conf);

void kyk_config_free(struct config *conf);

struct config* kyk_config_create(void);

void kyk_config_setstring(struct config *config,
			  const char *s,
			  const char *fmt, ...);

void kyk_print_config(struct config* cfg);

char* kyk_config_getstring(struct config *config,
			   const char    *defaultStr,
			   const char    *format,
			   ...);


#endif