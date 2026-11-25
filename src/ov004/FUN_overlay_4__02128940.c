// FUN_overlay_4__02128940 @ 0x02128940 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_overlay_4__02128940 @ 0x02128940 (code 0x18, pool extent 0x18, thumb)
// check: vers=2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Deactivate two children using established banked resident two-argument ABI.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,unsigned int);
void FUN_overlay_4__02128940(unsigned int *p) {p[6]=0;FUN_020c38f0((void *)p[0],0);FUN_020c38f0((void *)p[1],0);}
