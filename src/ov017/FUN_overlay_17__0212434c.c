// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// FUN_overlay_17__0212434c @ 0x0212434c (code 0x3a, pool extent 0x3a, thumb)
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Read three queue words and configure display with normalized enable flag.
 * Field identities remain provisional.
 */
extern int FUN_overlay_17__02123eec(void *);
extern void *FUN_overlay_17__02120980(void);
extern void FUN_overlay_17__02120d48(void *,int,int,int);
void FUN_overlay_17__0212434c(void *p) {int enabled=FUN_overlay_17__02123eec(p),b=FUN_overlay_17__02123eec(p),a=FUN_overlay_17__02123eec(p),flags=0;flags|=!enabled?0:16;FUN_overlay_17__02120d48(FUN_overlay_17__02120980(),a,b,flags|4);}
