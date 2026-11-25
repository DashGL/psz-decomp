// FUN_overlay_13__0211e838 @ 0x0211e838 (0xe, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211e838 @ 0x0211e838 (code 0xe, pool extent 0xe, thumb)
// check: vers=2.0/sp2p3 target=0xe candidate=0xe words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 13 reconstruction from extracted module bytes, 2026-11-04.
 * Write halfwords 4/0 plus active word one into second argument; return one.
 * Field identities and high-level API contracts remain provisional.
 */
int FUN_overlay_13__0211e838(void *unused,char *out) { *(unsigned short *)out=4; *(unsigned short *)(out+2)=0; *(unsigned int *)(out+4)=1; return 1; }
