// FUN_overlay_9__02120a04 @ 0x02120a04 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_9__02120a04 @ 0x02120a04 (code 0x34, pool extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 9 reconstruction from extracted module bytes, 2026-11-04.
 * Clear bounded display slot and render optional text, preserving signed lower-bound behavior.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,int);
extern void FUN_020c3788(void *,const char *,int,int,int);
void FUN_overlay_9__02120a04(char *p,int index,const char *text) {if(index<1){void *d=p+60+index*60;FUN_020c38f0(d,0);if(text)FUN_020c3788(d,text,128,0,2);}}
