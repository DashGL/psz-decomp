// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x42, exact bytes and relocation targets.
// FUN_overlay_15__0212118c @ 0x0212118c (code 0x42, pool extent 0x42, thumb)
// flags: -O4,p
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Copy at most capacity scan records while temporarily setting the shared scan lock; return total count.
 * Field identities remain provisional.
 */
extern int FUN_0202f9a0(int);extern int FUN_0202f948(void);extern void *FUN_0202fa1c(unsigned short);extern void FUN_0206552c(const void *,void *,unsigned int); int FUN_overlay_15__0212118c(unsigned char *out,int capacity) {int n,i;FUN_0202f9a0(1);n=FUN_0202f948();if(n>0){for(i=0;i<n;i++){if(i>=capacity)break;FUN_0206552c(FUN_0202fa1c((unsigned short)i),out,192);out+=192;}}FUN_0202f9a0(0);return n;}
