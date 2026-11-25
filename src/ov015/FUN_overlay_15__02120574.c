// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// FUN_overlay_15__02120574 @ 0x02120574 (code 0x34, pool extent 0x34, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * XOR byte indices with cyclic signed-byte key stream for half the requested length.
 * Field identities remain provisional.
 */
void FUN_overlay_15__02120574(int seed,signed char *out,int length,const signed char *key,int keylen) {int half=length/2,index=seed%keylen,i;for(i=0;i<half;i++){out[i]=i;out[i]^=key[index++];if(index>=keylen)index=0;}}
