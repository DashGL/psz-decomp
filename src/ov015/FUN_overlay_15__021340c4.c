// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_15__021340c4 @ 0x021340c4 (code 0x28, pool extent 0x2c, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Start connection operation and record immediate error unless pending.
 * Field identities remain provisional.
 */
extern void * D_0213e8e0[];
extern void FUN_overlay_15__02133d2c(int);
extern int FUN_02055578(void *,int);
extern void FUN_overlay_15__02133d7c(int);
int FUN_overlay_15__021340c4(void) {int status;FUN_overlay_15__02133d2c(6);status=FUN_02055578((char *)D_0213e8e0[1]+0x1e00,13);if(status!=2) {FUN_overlay_15__02133d7c(status);return 0;}return 1;}
