// FUN_overlay_19__021981d4 @ 0x021981d4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch46.json; original draft retained for referenced provenance.
// FUN_overlay_19__021981d4 @ 0x021981d4 (code 0x20, pool extent 0x20, thumb)
// check: vers=2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 19 reconstruction from extracted module bytes, 2026-11-04.
 * For event three, set or clear record bit according to owner state.
 * Field identities remain provisional.
 */
void FUN_overlay_19__021981d4(char *p,unsigned int *record,unsigned int event) { if(event==3) { if(*(unsigned int *)(p+0x194)==1)record[10]|=8; else record[10]&=~8U; } }
