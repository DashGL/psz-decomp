// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
// FUN_overlay_15__02134878 @ 0x02134878
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Assert active SDK state and request asynchronous shutdown with failure state transition.
 * Field identities remain provisional.
 */
extern int *data_0213e8e0[];
extern void FUN_02068728(void);
extern void FUN_overlay_15__02133d2c(int);
extern int FUN_02053dbc(void *);
int FUN_overlay_15__02134878(void) {if(data_0213e8e0[1][16]!=1)FUN_02068728();FUN_overlay_15__02133d2c(3);if(FUN_02053dbc((void *)0x021342a9)!=2){FUN_overlay_15__02133d2c(9);return 0;}return 1;}
