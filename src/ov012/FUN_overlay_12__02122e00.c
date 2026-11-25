// FUN_overlay_12__02122e00 @ 0x02122e00 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_overlay_12__02122e00 @ 0x02122e00 (code 0x10, pool extent 0x14, thumb)
// check: vers=2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Install dispatch pointer, parameters and two cleared counters; return self.
 * Field identities and high-level API contracts remain provisional.
 */
void *FUN_overlay_12__02122e00(unsigned int *self,unsigned int a,unsigned int b) { self[0]=0x0213d5d4; self[1]=a; self[2]=b; self[3]=0; self[4]=0; return self; }
