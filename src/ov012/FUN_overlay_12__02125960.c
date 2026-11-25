// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// FUN_overlay_12__02125960 @ 0x02125960
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern char D_02137e74[];
extern char D_0213ed04[];
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Convert bounded nonempty selected record to shared output descriptor.
 * Field identities remain provisional.
 */
extern int FUN_0203a1fc(const void *);
extern int FUN_0209ca8c(void *,const void *,int);
void *FUN_overlay_12__02125960(int *p) {int i=p[16];if(i>=0 && i<20){void *r=D_02137e74+i*16;if(FUN_0203a1fc(r))return 0;if(FUN_0209ca8c(D_0213ed04,r,0))return D_0213ed04;}return 0;}
