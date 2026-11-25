// FUN_overlay_4__021244e8 @ 0x021244e8 (0x42, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_4__021244e8 @ 0x021244e8 (code 0x42, pool extent 0x42, thumb)
// check: vers=2.0/sp2p3 target=0x42 candidate=0x42 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Update descriptor position for matching current and secondary state.
 * Field identities remain provisional.
 */
extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *,int);
void FUN_overlay_4__021244e8(int *p) {int t[4];if(p[52]==4||((unsigned int)(p[52]-5)<=1&&p[53]==4)){FUN_02071d0c(t);*(short *)t=4;t[2]=0x33000;t[3]=0xe8000;FUN_020c32b4(t,p[0]);}}
