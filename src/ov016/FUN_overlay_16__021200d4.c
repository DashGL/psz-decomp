// FUN_overlay_16__021200d4 @ 0x021200d4 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_overlay_16__021200d4 @ 0x021200d4 (code 0x22, pool extent 0x22, thumb)
// check: vers=2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 16 reconstruction from extracted module bytes, 2026-11-04.
 * Clear eight receiver words and initialize trailing descriptor.
 * Field identities remain provisional.
 */
extern void *FUN_overlay_16__02120b38(void *);
void *FUN_overlay_16__021200d4(unsigned int *p) {p[0]=0;p[1]=0;p[2]=0;p[3]=0;p[4]=0;p[5]=0;p[6]=0;p[7]=0;FUN_overlay_16__02120b38(p+8);return p;}
