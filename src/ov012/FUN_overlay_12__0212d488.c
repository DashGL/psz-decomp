// FUN_overlay_12__0212d488 @ 0x0212d488 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch22.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212d488 @ 0x0212d488 (code 0x24, pool extent 0x24, thumb)
// check: vers=2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Choose fixed-point display endpoints by mode and pass receiver descriptor as fourth argument.
 * Field identities remain provisional.
 */
extern void FUN_overlay_12__0212d4ac(int,int,int,void *);
void FUN_overlay_12__0212d488(void *p,int mode) {int start=0x41000,end=0x84000;if(mode){start+=0xc0000;end+=0xc0000;}FUN_overlay_12__0212d4ac(start,end,0xe2000,p);}
