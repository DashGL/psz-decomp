// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
// FUN_overlay_15__0212e3fc @ 0x0212e3fc, verified extent 0x30.
// check: 2.0/sp2p3 exact_bytes=0 bad_relocs=0
// ROM literal-pool bases retained as symbols; field offsets preserve runtime addresses.
extern unsigned char DAT_0212e42d[];
extern unsigned char DAT_0213e86c[];
// FUN_overlay_15__0212e3fc @ 0x0212e3fc (code 0x26, pool extent 0x30, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Start transition and register raw continuation when current state permits.
 * Field identities remain provisional.
 */
extern int FUN_overlay_15__02133030(void);
extern void FUN_overlay_15__02132190(int);
extern void FUN_overlay_15__02133004(void);
extern void FUN_overlay_15__021310b0(unsigned int);
extern void FUN_overlay_15__02127de4(unsigned int);
void FUN_overlay_15__0212e3fc(void) {if(!FUN_overlay_15__02133030()) {FUN_overlay_15__02132190(6);FUN_overlay_15__02133004();FUN_overlay_15__021310b0(((unsigned int **)(((unsigned int)DAT_0213e86c + 0u)))[2][3]);FUN_overlay_15__02127de4(((unsigned int)DAT_0212e42d + 0u));}}
