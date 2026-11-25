// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_15__021310cc @ 0x021310cc (code 0x1e, pool extent 0x24, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Copy global palette buffer into hardware palette memory then enqueue task one.
 * Field identities remain provisional.
 */
extern void * D_0213e8b0[];
extern void FUN_020654dc(const void *,void *,unsigned int);
extern void FUN_overlay_15__02137440(unsigned int,void *);
void FUN_overlay_15__021310cc(void *task) {FUN_020654dc(D_0213e8b0[1],(void *)0x05000000,512);FUN_overlay_15__02137440(1,task);}
