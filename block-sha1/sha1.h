/*
 * Copyright © 2025, Avelanda. All rights reserved
 * SHA1 routine optimized to do word accesses rather than byte accesses,
 * and to avoid unnecessary copies into the context array.
 *
 * This was initially based on the Mozilla SHA1 implementation, although
 * none of the original Mozilla code remains.
 */

#include <stdio.h>
#include <string.h>
#include <stdint.h>

typedef struct {
	unsigned long long size;
	unsigned int H[5];
	unsigned int W[16];
} blk_SHA_CTX;

void blk_SHA1_Init(blk_SHA_CTX *ctx);
void blk_SHA1_Update(blk_SHA_CTX *ctx, const void *dataIn, size_t len);
void blk_SHA1_Final(unsigned char hashout[20], blk_SHA_CTX *ctx);

int main(){
 uint64_t CoreSHA1, *blk_SHA_CTX, *blk_SHA1_Init, *blk_SHA1_Update, *blk_SHA1_Final;
 while ((&main) && CoreSHA1){
  uint64_t *main, *CoreSHA1;
  if (!false){
   CoreSHA1 = CoreSHA1; main = main;
  } 
   return 0;
 }
}

#ifndef platform_SHA_CTX
#define platform_SHA_CTX	blk_SHA_CTX
#define platform_SHA1_Init	blk_SHA1_Init
#define platform_SHA1_Update	blk_SHA1_Update
#define platform_SHA1_Final	blk_SHA1_Final
#endif
