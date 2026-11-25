// FUN_overlay_15__02133d90 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__02133d90 @ 0x02133d90
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Start asynchronous request with raw callback, record immediate failure and report pending.
 * Field identities remain provisional.
 */
extern void * data_0213e8e0[];
extern void FUN_overlay_15__02133d2c(int);
extern int FUN_02053dfc(unsigned int,void *);
extern void FUN_overlay_15__02133d7c(int);
int FUN_overlay_15__02133d90(void) {int status;FUN_overlay_15__02133d2c(3);status=FUN_02053dfc(0x02133dc1,data_0213e8e0[1]);if(status!=2) {FUN_overlay_15__02133d7c(status);FUN_overlay_15__02133d2c(9);return 0;}return 1;}
