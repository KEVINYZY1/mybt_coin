#ifndef __KYK_ECDSA_H
#define __KYK_ECDSA_H

#include <openssl/bn.h>
#include <openssl/ec.h>
#include <openssl/obj_mac.h>
#include <openssl/ecdsa.h>

#include "kyk_defs.h"

struct kyk_buff;

EC_KEY *kyk_ec_new_keypair(const uint8_t *priv_bytes);
EC_KEY *kyk_ec_new_pubkey(const uint8_t *pub_bytes, size_t pub_len);
int kyk_ec_sig_verify(const uint8_t *buf, size_t buf_len,
		      uint8_t *der, size_t der_len,
		      uint8_t *pubkey, size_t pub_len);

int kyk_ec_sign(uint8_t* priv,
		const uint8_t* src,
		size_t src_len,
		struct kyk_buff** der
    );


int kyk_ec_get_pubkey_from_priv(const uint8_t* priv,
				int cv_flag,
				struct kyk_buff** pub
    );


int kyk_ec_sig_hash256_verify(const uint8_t *buf, size_t buf_len,
			      uint8_t *der_sig, size_t der_sig_len,
			      uint8_t *pubkey, size_t pub_len);


int kyk_ec_sign_hash256(uint8_t* priv,
			const uint8_t* src,
			size_t src_len,
			uint8_t** signed_buf,
			size_t* signed_len);



#endif
