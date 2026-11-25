// FUN_overlay_4__02121f6c @ 0x02121f6c (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_overlay_4__02121f6c @ 0x02121f6c (code 0x16, pool extent 0x16, thumb)
// check: vers=2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Deactivate optional child and clear associated state using established banked resident ABI.
 * Field identities remain provisional.
 */
extern void FUN_020c38f0(void *,unsigned int);
void FUN_overlay_4__02121f6c(unsigned int *p) {if(p[27]){FUN_020c38f0((void *)p[27],0);p[28]=0;}}
