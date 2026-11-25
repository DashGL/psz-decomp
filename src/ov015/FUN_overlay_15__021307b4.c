// FUN_overlay_15__021307b4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__021307b4 @ 0x021307b4 (code 0x3e, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Load display resource through concrete hardware copy callback and set background priorities.
 * Field identities remain provisional.
 */
typedef void (*Copy)(void *,unsigned int,unsigned int);
extern void FUN_overlay_15__021252f8(void *,Copy);
unsigned int FUN_overlay_15__021307b4(void) {volatile unsigned short *sub=(volatile unsigned short *)0x04001008,*main=(volatile unsigned short *)0x04000008;unsigned int value;FUN_overlay_15__021252f8((void *)0x0213b564,(Copy)0x0205ef9c);sub[0]=(sub[0]&~3)|3;sub[1]=(sub[1]&~3)|3;main[0]=(main[0]&~3)|3;main[1]=(main[1]&~3)|3;value=(main[2]&~3)|3;main[2]=value;return value;}
