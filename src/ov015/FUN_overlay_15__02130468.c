// FUN_overlay_15__02130468 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_15__02130468 @ 0x02130468 (code 0x36, pool extent 0x48, thumb)
// check: vers=2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Load display resources through established concrete hardware-copy callbacks and assign background priorities.
 * Field identities remain provisional.
 */
typedef void (*Copy)(void *,unsigned int,unsigned int);extern void FUN_overlay_15__021252f8(void *,Copy);
unsigned int FUN_overlay_15__02130468(void){volatile unsigned short *sub=(volatile unsigned short *)0x04001008,*main=(volatile unsigned short *)0x0400000a;unsigned int value;FUN_overlay_15__021252f8((void *)0x0213b53c,(Copy)0x0205ef9c);sub[0]=(sub[0]&~3)|3;sub[1]=(sub[1]&~3)|3;main[0]=(main[0]&~3)|3;value=(main[1]&~3)|3;main[1]=value;return value;}
