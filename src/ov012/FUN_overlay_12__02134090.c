// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// FUN_overlay_12__02134090 @ 0x02134090 (code 0x32, pool extent 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Load alternate shared resource or allocate paired descriptor handle based on receiver flag.
 * Field identities remain provisional.
 */
extern char G_0213E994[]; extern char G_0213E9AC[]; extern char G_0213E9C0[];
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *,const void *,const void *,int);
extern void FUN_020c23bc(void *,const void *,int);
extern void FUN_02088c88(void);
void FUN_overlay_12__02134090(int *p) {if(p[88])p[18]=FUN_020c2438(FUN_020c1fc8(),(void *)G_0213E994,(void *)G_0213E9AC,2);else{FUN_020c23bc(FUN_020c1fc8(),(void *)G_0213E9C0,2);FUN_02088c88();}}
