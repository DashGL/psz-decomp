// FUN_overlay_15__0212b934 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__0212b934 @ 0x0212b934 (code 0x56, pool extent 0x80, thumb)
// check: vers=2.0/sp2p3 target=0x80 candidate=0x80 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Load four display resources and configure background priorities for the selected screen.
 * Field identities remain provisional.
 */
typedef void (*Copy)(void *,unsigned int,unsigned int);extern void FUN_overlay_15__021252f8(void *,Copy);
unsigned int FUN_overlay_15__0212b934(void){volatile unsigned short *sub=(volatile unsigned short *)0x04001008,*main=(volatile unsigned short *)0x04000008;unsigned int value;FUN_overlay_15__021252f8((void *)0x0213b1bc,(Copy)0x0205ec10);FUN_overlay_15__021252f8((void *)0x0213b1d0,(Copy)0x0205f29c);FUN_overlay_15__021252f8((void *)0x0213b1e8,(Copy)0x0205eb64);FUN_overlay_15__021252f8((void *)0x0213b200,(Copy)0x0205ef9c);sub[0]=(sub[0]&~3)|3;sub[1]=(sub[1]&~3)|3;main[0]=(main[0]&~3)|2;main[1]=(main[1]&~3)|3;value=(main[2]&~3)|3;main[2]=value;return value;}
