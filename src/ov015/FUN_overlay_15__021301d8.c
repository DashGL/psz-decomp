// FUN_overlay_15__021301d8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__021301d8 @ 0x021301d8 (code 0x4e, pool extent 0x70, thumb)
// check: vers=2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Load display resources through established concrete hardware-copy callbacks and assign background priorities.
 * Field identities remain provisional.
 */
typedef void (*Copy)(void *,unsigned int,unsigned int);extern void FUN_overlay_15__021252f8(void *,Copy);
unsigned int FUN_overlay_15__021301d8(void){volatile unsigned short *sub=(volatile unsigned short *)0x04001008,*main=(volatile unsigned short *)0x04000008;unsigned int value;FUN_overlay_15__021252f8((void *)0x0213b4f8,(Copy)0x0205f29c);FUN_overlay_15__021252f8((void *)0x0213b510,(Copy)0x0205eb64);FUN_overlay_15__021252f8((void *)0x0213b528,(Copy)0x0205ef9c);sub[0]=(sub[0]&~3)|3;sub[1]=(sub[1]&~3)|3;main[0]=(main[0]&~3)|3;main[1]=(main[1]&~3)|3;value=(main[2]&~3)|3;main[2]=value;return value;}
