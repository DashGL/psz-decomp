// FUN_overlay_15__021328b0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// FUN_overlay_15__021328b0 @ 0x021328b0 (code 0x26, pool extent 0x34, thumb)
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Load indexed resource into shared slot and start raw task callback.
 * Field identities remain provisional.
 */
extern void * D_0213b68c[];
extern void *FUN_overlay_15__021252bc(const void *);
extern void *FUN_overlay_15__0213553c(const void *,unsigned int *,int);
extern void *FUN_overlay_15__021373d8(int,unsigned int,unsigned int,int);
void FUN_overlay_15__021328b0(int index) {void *p=FUN_overlay_15__021252bc(D_0213b68c[index]);*(void **)0x0213e8cc=FUN_overlay_15__0213553c(p,0,4);FUN_overlay_15__021373d8(1,0x021328e5,0,120);}
