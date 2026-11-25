// FUN_02035010 @ 0x02035010 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02035010 @ 0x02035010 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Clear bytes +30/+31 then words +24,+20,+2c,+28; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02035010.txt.
 */
void *FUN_02035010(char *self) { self[48]=0; self[49]=0; *(unsigned int *)(self+36)=0; *(unsigned int *)(self+32)=0; *(unsigned int *)(self+44)=0; *(unsigned int *)(self+40)=0; return self; }
