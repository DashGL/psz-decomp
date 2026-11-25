// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// FUN_overlay_17__02124388 @ 0x02124388
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Read three queue words and configure display with normalized enable flag.
 * Field identities remain provisional.
 */
extern int FUN_overlay_17__02123eec(void *);
extern void *FUN_overlay_17__02120980(void);
extern void FUN_overlay_17__02120d48(void *,int,int,int);
void FUN_overlay_17__02124388(void *p) {int enabled=FUN_overlay_17__02123eec(p),b=FUN_overlay_17__02123eec(p),a=FUN_overlay_17__02123eec(p),flags=0;flags|=!enabled?0:16;FUN_overlay_17__02120d48(FUN_overlay_17__02120980(),a,b,flags|8);}
