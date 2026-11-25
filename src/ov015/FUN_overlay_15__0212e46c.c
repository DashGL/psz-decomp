// FUN_overlay_15__0212e46c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__0212e46c @ 0x0212e46c (code 0x46, pool extent 0x68, thumb)
// check: vers=2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Load three graphics resources and assign layer priorities.
 * Field identities remain provisional.
 */
typedef void (*Copy)(void *,int,int);
extern void FUN_overlay_15__021252f8(void *,Copy);
unsigned int FUN_overlay_15__0212e46c(void) {volatile unsigned short *h;unsigned int v;FUN_overlay_15__021252f8((void *)0x0213b33c,(Copy)0x0205f29c);FUN_overlay_15__021252f8((void *)0x0213b354,(Copy)0x0205eb64);FUN_overlay_15__021252f8((void *)0x0213b36c,(Copy)0x0205ef9c);h=(volatile unsigned short *)0x04001008;h[0]=(h[0]&~3)|3;h[1]=(h[1]&~3)|3;h=(volatile unsigned short *)0x0400000a;h[0]=(h[0]&~3)|3;v=(h[1]&~3)|3;h[1]=v;return v;}
