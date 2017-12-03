#ifndef KYK_TEST_DATA_H__
#define KYK_TEST_DATA_H__

#include "kyk_block.h"
#include "dbg.h"

/* This block buf is sourced from: https://webbtc.com/block/00000000d1145790a8694403d4063f323d499e655c83426834d4ce2f8dd4a2ee.hex */
/* The json format is: https://webbtc.com/block/00000000d1145790a8694403d4063f323d499e655c83426834d4ce2f8dd4a2ee.json */
/* This block has 2 Tx, each txid is following: */
/* b1fea52486ce0c62bb442b530a3f0132b826c74e473d1f2c220bfa78111c5082 */
/* f4184fc596403b9d638783cf57adfe4c75c605f6356fbc91338530e9831e9e16 */
uint8_t BLOCK_2TX_BUF[] = {
    0x01, 0x00, 0x00, 0x00, 0x55, 0xbd, 0x84, 0x0a,
    0x78, 0x79, 0x8a, 0xd0, 0xda, 0x85, 0x3f, 0x68,
    0x97, 0x4f, 0x3d, 0x18, 0x3e, 0x2b, 0xd1, 0xdb,
    0x6a, 0x84, 0x2c, 0x1f, 0xee, 0xcf, 0x22, 0x2a,
    0x00, 0x00, 0x00, 0x00, 0xff, 0x10, 0x4c, 0xcb,
    0x05, 0x42, 0x1a, 0xb9, 0x3e, 0x63, 0xf8, 0xc3,
    0xce, 0x5c, 0x2c, 0x2e, 0x9d, 0xbb, 0x37, 0xde,
    0x27, 0x64, 0xb3, 0xa3, 0x17, 0x5c, 0x81, 0x66,
    0x56, 0x2c, 0xac, 0x7d, 0x51, 0xb9, 0x6a, 0x49,
    0xff, 0xff, 0x00, 0x1d, 0x28, 0x3e, 0x9e, 0x70,
    0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x07, 0x04, 0xff, 0xff, 0x00, 0x1d,
    0x01, 0x02, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
    0xf2, 0x05, 0x2a, 0x01, 0x00, 0x00, 0x00, 0x43,
    0x41, 0x04, 0xd4, 0x6c, 0x49, 0x68, 0xbd, 0xe0,
    0x28, 0x99, 0xd2, 0xaa, 0x09, 0x63, 0x36, 0x7c,
    0x7a, 0x6c, 0xe3, 0x4e, 0xec, 0x33, 0x2b, 0x32,
    0xe4, 0x2e, 0x5f, 0x34, 0x07, 0xe0, 0x52, 0xd6,
    0x4a, 0xc6, 0x25, 0xda, 0x6f, 0x07, 0x18, 0xe7,
    0xb3, 0x02, 0x14, 0x04, 0x34, 0xbd, 0x72, 0x57,
    0x06, 0x95, 0x7c, 0x09, 0x2d, 0xb5, 0x38, 0x05,
    0xb8, 0x21, 0xa8, 0x5b, 0x23, 0xa7, 0xac, 0x61,
    0x72, 0x5b, 0xac, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0xc9, 0x97, 0xa5, 0xe5,
    0x6e, 0x10, 0x41, 0x02, 0xfa, 0x20, 0x9c, 0x6a,
    0x85, 0x2d, 0xd9, 0x06, 0x60, 0xa2, 0x0b, 0x2d,
    0x9c, 0x35, 0x24, 0x23, 0xed, 0xce, 0x25, 0x85,
    0x7f, 0xcd, 0x37, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x48, 0x47, 0x30, 0x44, 0x02, 0x20, 0x4e, 0x45,
    0xe1, 0x69, 0x32, 0xb8, 0xaf, 0x51, 0x49, 0x61,
    0xa1, 0xd3, 0xa1, 0xa2, 0x5f, 0xdf, 0x3f, 0x4f,
    0x77, 0x32, 0xe9, 0xd6, 0x24, 0xc6, 0xc6, 0x15,
    0x48, 0xab, 0x5f, 0xb8, 0xcd, 0x41, 0x02, 0x20,
    0x18, 0x15, 0x22, 0xec, 0x8e, 0xca, 0x07, 0xde,
    0x48, 0x60, 0xa4, 0xac, 0xdd, 0x12, 0x90, 0x9d,
    0x83, 0x1c, 0xc5, 0x6c, 0xbb, 0xac, 0x46, 0x22,
    0x08, 0x22, 0x21, 0xa8, 0x76, 0x8d, 0x1d, 0x09,
    0x01, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0xca,
    0x9a, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x43, 0x41,
    0x04, 0xae, 0x1a, 0x62, 0xfe, 0x09, 0xc5, 0xf5,
    0x1b, 0x13, 0x90, 0x5f, 0x07, 0xf0, 0x6b, 0x99,
    0xa2, 0xf7, 0x15, 0x9b, 0x22, 0x25, 0xf3, 0x74,
    0xcd, 0x37, 0x8d, 0x71, 0x30, 0x2f, 0xa2, 0x84,
    0x14, 0xe7, 0xaa, 0xb3, 0x73, 0x97, 0xf5, 0x54,
    0xa7, 0xdf, 0x5f, 0x14, 0x2c, 0x21, 0xc1, 0xb7,
    0x30, 0x3b, 0x8a, 0x06, 0x26, 0xf1, 0xba, 0xde,
    0xd5, 0xc7, 0x2a, 0x70, 0x4f, 0x7e, 0x6c, 0xd8,
    0x4c, 0xac, 0x00, 0x28, 0x6b, 0xee, 0x00, 0x00,
    0x00, 0x00, 0x43, 0x41, 0x04, 0x11, 0xdb, 0x93,
    0xe1, 0xdc, 0xdb, 0x8a, 0x01, 0x6b, 0x49, 0x84,
    0x0f, 0x8c, 0x53, 0xbc, 0x1e, 0xb6, 0x8a, 0x38,
    0x2e, 0x97, 0xb1, 0x48, 0x2e, 0xca, 0xd7, 0xb1,
    0x48, 0xa6, 0x90, 0x9a, 0x5c, 0xb2, 0xe0, 0xea,
    0xdd, 0xfb, 0x84, 0xcc, 0xf9, 0x74, 0x44, 0x64,
    0xf8, 0x2e, 0x16, 0x0b, 0xfa, 0x9b, 0x8b, 0x64,
    0xf9, 0xd4, 0xc0, 0x3f, 0x99, 0x9b, 0x86, 0x43,
    0xf6, 0x56, 0xb4, 0x12, 0xa3, 0xac, 0x00, 0x00,
    0x00, 0x00
};


/* This block buf is sourced from: https://webbtc.com/block/00000000d1145790a8694403d4063f323d499e655c83426834d4ce2f8dd4a2ee.hex */
/* The json format is: https://webbtc.com/block/00000000d1145790a8694403d4063f323d499e655c83426834d4ce2f8dd4a2ee.json */
/* This block has 2 Tx, each txid is following: */
/* b1fea52486ce0c62bb442b530a3f0132b826c74e473d1f2c220bfa78111c5082 */
/* f4184fc596403b9d638783cf57adfe4c75c605f6356fbc91338530e9831e9e16 */
uint8_t BLOCK_BUF[] = {
    0x01, 0x00, 0x00, 0x00, 0x55, 0xbd, 0x84, 0x0a,
    0x78, 0x79, 0x8a, 0xd0, 0xda, 0x85, 0x3f, 0x68,
    0x97, 0x4f, 0x3d, 0x18, 0x3e, 0x2b, 0xd1, 0xdb,
    0x6a, 0x84, 0x2c, 0x1f, 0xee, 0xcf, 0x22, 0x2a,
    0x00, 0x00, 0x00, 0x00, 0xff, 0x10, 0x4c, 0xcb,
    0x05, 0x42, 0x1a, 0xb9, 0x3e, 0x63, 0xf8, 0xc3,
    0xce, 0x5c, 0x2c, 0x2e, 0x9d, 0xbb, 0x37, 0xde,
    0x27, 0x64, 0xb3, 0xa3, 0x17, 0x5c, 0x81, 0x66,
    0x56, 0x2c, 0xac, 0x7d, 0x51, 0xb9, 0x6a, 0x49,
    0xff, 0xff, 0x00, 0x1d, 0x28, 0x3e, 0x9e, 0x70,
    0x02, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x07, 0x04, 0xff, 0xff, 0x00, 0x1d,
    0x01, 0x02, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
    0xf2, 0x05, 0x2a, 0x01, 0x00, 0x00, 0x00, 0x43,
    0x41, 0x04, 0xd4, 0x6c, 0x49, 0x68, 0xbd, 0xe0,
    0x28, 0x99, 0xd2, 0xaa, 0x09, 0x63, 0x36, 0x7c,
    0x7a, 0x6c, 0xe3, 0x4e, 0xec, 0x33, 0x2b, 0x32,
    0xe4, 0x2e, 0x5f, 0x34, 0x07, 0xe0, 0x52, 0xd6,
    0x4a, 0xc6, 0x25, 0xda, 0x6f, 0x07, 0x18, 0xe7,
    0xb3, 0x02, 0x14, 0x04, 0x34, 0xbd, 0x72, 0x57,
    0x06, 0x95, 0x7c, 0x09, 0x2d, 0xb5, 0x38, 0x05,
    0xb8, 0x21, 0xa8, 0x5b, 0x23, 0xa7, 0xac, 0x61,
    0x72, 0x5b, 0xac, 0x00, 0x00, 0x00, 0x00, 0x01,
    0x00, 0x00, 0x00, 0x01, 0xc9, 0x97, 0xa5, 0xe5,
    0x6e, 0x10, 0x41, 0x02, 0xfa, 0x20, 0x9c, 0x6a,
    0x85, 0x2d, 0xd9, 0x06, 0x60, 0xa2, 0x0b, 0x2d,
    0x9c, 0x35, 0x24, 0x23, 0xed, 0xce, 0x25, 0x85,
    0x7f, 0xcd, 0x37, 0x04, 0x00, 0x00, 0x00, 0x00,
    0x48, 0x47, 0x30, 0x44, 0x02, 0x20, 0x4e, 0x45,
    0xe1, 0x69, 0x32, 0xb8, 0xaf, 0x51, 0x49, 0x61,
    0xa1, 0xd3, 0xa1, 0xa2, 0x5f, 0xdf, 0x3f, 0x4f,
    0x77, 0x32, 0xe9, 0xd6, 0x24, 0xc6, 0xc6, 0x15,
    0x48, 0xab, 0x5f, 0xb8, 0xcd, 0x41, 0x02, 0x20,
    0x18, 0x15, 0x22, 0xec, 0x8e, 0xca, 0x07, 0xde,
    0x48, 0x60, 0xa4, 0xac, 0xdd, 0x12, 0x90, 0x9d,
    0x83, 0x1c, 0xc5, 0x6c, 0xbb, 0xac, 0x46, 0x22,
    0x08, 0x22, 0x21, 0xa8, 0x76, 0x8d, 0x1d, 0x09,
    0x01, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0xca,
    0x9a, 0x3b, 0x00, 0x00, 0x00, 0x00, 0x43, 0x41,
    0x04, 0xae, 0x1a, 0x62, 0xfe, 0x09, 0xc5, 0xf5,
    0x1b, 0x13, 0x90, 0x5f, 0x07, 0xf0, 0x6b, 0x99,
    0xa2, 0xf7, 0x15, 0x9b, 0x22, 0x25, 0xf3, 0x74,
    0xcd, 0x37, 0x8d, 0x71, 0x30, 0x2f, 0xa2, 0x84,
    0x14, 0xe7, 0xaa, 0xb3, 0x73, 0x97, 0xf5, 0x54,
    0xa7, 0xdf, 0x5f, 0x14, 0x2c, 0x21, 0xc1, 0xb7,
    0x30, 0x3b, 0x8a, 0x06, 0x26, 0xf1, 0xba, 0xde,
    0xd5, 0xc7, 0x2a, 0x70, 0x4f, 0x7e, 0x6c, 0xd8,
    0x4c, 0xac, 0x00, 0x28, 0x6b, 0xee, 0x00, 0x00,
    0x00, 0x00, 0x43, 0x41, 0x04, 0x11, 0xdb, 0x93,
    0xe1, 0xdc, 0xdb, 0x8a, 0x01, 0x6b, 0x49, 0x84,
    0x0f, 0x8c, 0x53, 0xbc, 0x1e, 0xb6, 0x8a, 0x38,
    0x2e, 0x97, 0xb1, 0x48, 0x2e, 0xca, 0xd7, 0xb1,
    0x48, 0xa6, 0x90, 0x9a, 0x5c, 0xb2, 0xe0, 0xea,
    0xdd, 0xfb, 0x84, 0xcc, 0xf9, 0x74, 0x44, 0x64,
    0xf8, 0x2e, 0x16, 0x0b, 0xfa, 0x9b, 0x8b, 0x64,
    0xf9, 0xd4, 0xc0, 0x3f, 0x99, 0x9b, 0x86, 0x43,
    0xf6, 0x56, 0xb4, 0x12, 0xa3, 0xac, 0x00, 0x00,
    0x00, 0x00
};

/*
 * This block header is sourced from https://webbtc.com/block/00000000d1145790a8694403d4063f323d499e655c83426834d4ce2f8dd4a2ee.hex
*/
uint8_t BLK_HD[KYK_BLK_HD_LEN] = {
    0x01, 0x00, 0x00, 0x00, 0x55, 0xbd, 0x84, 0x0a,
    0x78, 0x79, 0x8a, 0xd0, 0xda, 0x85, 0x3f, 0x68,
    0x97, 0x4f, 0x3d, 0x18, 0x3e, 0x2b, 0xd1, 0xdb,
    0x6a, 0x84, 0x2c, 0x1f, 0xee, 0xcf, 0x22, 0x2a,
    0x00, 0x00, 0x00, 0x00, 0xff, 0x10, 0x4c, 0xcb,
    0x05, 0x42, 0x1a, 0xb9, 0x3e, 0x63, 0xf8, 0xc3,
    0xce, 0x5c, 0x2c, 0x2e, 0x9d, 0xbb, 0x37, 0xde,
    0x27, 0x64, 0xb3, 0xa3, 0x17, 0x5c, 0x81, 0x66,
    0x56, 0x2c, 0xac, 0x7d, 0x51, 0xb9, 0x6a, 0x49,
    0xff, 0xff, 0x00, 0x1d, 0x28, 0x3e, 0x9e, 0x70
};

uint8_t BLK_HASH[32] = {
    0x00, 0x00, 0x00, 0x00, 0xd1, 0x14, 0x57, 0x90,
    0xa8, 0x69, 0x44, 0x03, 0xd4, 0x06, 0x3f, 0x32,
    0x3d, 0x49, 0x9e, 0x65, 0x5c, 0x83, 0x42, 0x68,
    0x34, 0xd4, 0xce, 0x2f, 0x8d, 0xd4, 0xa2, 0xee
};

/*
 * this block is sourced from https://webbtc.com/block/00000000c9ec538cab7f38ef9c67a95742f56ab07b0a37c5be6b02808dbfb4e0.json
 * block hash is 00000000c9ec538cab7f38ef9c67a95742f56ab07b0a37c5be6b02808dbfb4e0
 * this block's parent is BLOCK_BUF : https://webbtc.com/block/00000000d1145790a8694403d4063f323d499e655c83426834d4ce2f8dd4a2ee.json
 */

uint8_t BLOCK2_BUF[] = {
    0x01, 0x00, 0x00, 0x00, 0xee, 0xa2, 0xd4, 0x8d,
    0x2f, 0xce, 0xd4, 0x34, 0x68, 0x42, 0x83, 0x5c,
    0x65, 0x9e, 0x49, 0x3d, 0x32, 0x3f, 0x06, 0xd4,
    0x03, 0x44, 0x69, 0xa8, 0x90, 0x57, 0x14, 0xd1,
    0x00, 0x00, 0x00, 0x00, 0xf2, 0x93, 0xc8, 0x69,
    0x73, 0xe7, 0x58, 0xcc, 0xd1, 0x19, 0x75, 0xfa,
    0x46, 0x4d, 0x4c, 0x3e, 0x85, 0x00, 0x97, 0x9c,
    0x95, 0x42, 0x5c, 0x7b, 0xe6, 0xf0, 0xa6, 0x53,
    0x14, 0xd2, 0xf2, 0xd5, 0xc9, 0xba, 0x6a, 0x49,
    0xff, 0xff, 0x00, 0x1d, 0x07, 0xa8, 0xf2, 0x26,
    0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff,
    0xff, 0xff, 0x07, 0x04, 0xff, 0xff, 0x00, 0x1d,
    0x01, 0x0e, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
    0xf2, 0x05, 0x2a, 0x01, 0x00, 0x00, 0x00, 0x43,
    0x41, 0x04, 0x56, 0x68, 0x24, 0xc3, 0x12, 0x07,
    0x33, 0x15, 0xdf, 0x60, 0xe5, 0xaa, 0x64, 0x90,
    0xb6, 0xcd, 0xd8, 0x0c, 0xd9, 0x0f, 0x6a, 0x8f,
    0x02, 0xe0, 0x22, 0xca, 0x3c, 0x2d, 0x52, 0x96,
    0x8c, 0x25, 0x30, 0x06, 0xc9, 0xc6, 0x02, 0xe0,
    0x3a, 0xed, 0x7b, 0xe5, 0x2d, 0x6a, 0xc5, 0x5f,
    0x5b, 0x55, 0x7c, 0x72, 0x52, 0x9b, 0xcc, 0x38,
    0x99, 0xac, 0xe7, 0xeb, 0x42, 0x27, 0x15, 0x3e,
    0xb4, 0x4b, 0xac, 0x00, 0x00, 0x00, 0x00
};

uint8_t BLK2_HD[KYK_BLK_HD_LEN] = {
    0x01, 0x00, 0x00, 0x00, 0xee, 0xa2, 0xd4, 0x8d,
    0x2f, 0xce, 0xd4, 0x34, 0x68, 0x42, 0x83, 0x5c,
    0x65, 0x9e, 0x49, 0x3d, 0x32, 0x3f, 0x06, 0xd4,
    0x03, 0x44, 0x69, 0xa8, 0x90, 0x57, 0x14, 0xd1,
    0x00, 0x00, 0x00, 0x00, 0xf2, 0x93, 0xc8, 0x69,
    0x73, 0xe7, 0x58, 0xcc, 0xd1, 0x19, 0x75, 0xfa,
    0x46, 0x4d, 0x4c, 0x3e, 0x85, 0x00, 0x97, 0x9c,
    0x95, 0x42, 0x5c, 0x7b, 0xe6, 0xf0, 0xa6, 0x53,
    0x14, 0xd2, 0xf2, 0xd5, 0xc9, 0xba, 0x6a, 0x49,
    0xff, 0xff, 0x00, 0x1d, 0x07, 0xa8, 0xf2, 0x26,
};

uint8_t BLK2_HASH[32] = {
    0x00, 0x00, 0x00, 0x00, 0xc9, 0xec, 0x53, 0x8c,
    0xab, 0x7f, 0x38, 0xef, 0x9c, 0x67, 0xa9, 0x57,
    0x42, 0xf5, 0x6a, 0xb0, 0x7b, 0x0a, 0x37, 0xc5,
    0xbe, 0x6b, 0x02, 0x80, 0x8d, 0xbf, 0xb4, 0xe0
};


int make_testing_blk_hd_chain(struct kyk_blk_hd_chain** hd_chain)
{
    struct kyk_blk_hd_chain* hdc = NULL;
    struct kyk_blk_header* hd = NULL;
    size_t hd_count = 2;
    size_t len = 0;
    int res = -1;

    res = kyk_init_blk_hd_chain(&hdc);
    check(res == 0, "Failed to make_testing_blk_hd_chain: kyk_init_blk_hd_chain failed");
    
    hd = calloc(hd_count, sizeof(*hd));    
    check(hd, "Failed to make_testing_blk_hd_chain: hd calloc failed");
    hdc -> hd_list = hd;
    
    res = kyk_deseri_blk_header(hd, BLK_HD, &len);
    check(res == 0, "Failed to make_testing_blk_hd_chain: kyk_deseri_blk_header failed");
    hd++;
    hdc -> len++;

    res = kyk_deseri_blk_header(hd, BLK2_HD, &len);
    check(res == 0, "Failed to make_testing_blk_hd_chain: kyk_deseri_blk_header failed");
    hdc -> len++;

    *hd_chain = hdc;

    return 0;
    
error:
    if(hdc) kyk_free_blk_hd_chain(hdc);
    return -1;
}


#endif