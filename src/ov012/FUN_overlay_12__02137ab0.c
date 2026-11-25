// FUN_overlay_12__02137ab0 @ 0x02137ab0 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__02137ab0 @ 0x02137ab0 (code 0x44, pool extent 0x50, thumb)
// check: vers=2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Enable two background layers and load associated resource.
 * Field identities remain provisional.
 */
extern void FUN_020a45a4(int);
extern void FUN_020c2b84(void *,void *,int,int,int);
void FUN_overlay_12__02137ab0(void *p) {volatile unsigned short *h;FUN_020a45a4(2);h=(volatile unsigned short *)0x0400000a;*h=(*h&0x43)|4;FUN_020a45a4(8);h=(volatile unsigned short *)0x0400000e;*h=(*h&0x43)|0x190;FUN_020c2b84(p,(void *)0x0213ec40,3,1,4);}
