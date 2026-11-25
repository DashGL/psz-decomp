// FUN_overlay_17__02120de8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_17__02120de8 @ 0x02120de8 (code 0x1a, pool extent 0x1a, thumb)
// flags: -O4,s
/* USA overlay 17 reconstruction from extracted module bytes, 2026-11-04.
 * Invoke immediate or deferred child operation selected by flag bit one.
 * Field identities remain provisional.
 */
extern void FUN_overlay_17__0211fd40(void *,int);
extern void FUN_overlay_17__0211fdf0(void *,int);
void FUN_overlay_17__02120de8(unsigned int *p,int value,unsigned int flags) {void *child=(void *)p[2];if(child){if((flags&2)==0)FUN_overlay_17__0211fd40(child,value);else FUN_overlay_17__0211fdf0(child,value);}}
