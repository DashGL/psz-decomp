// FUN_02030574 @ 0x02030574 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_02030574 @ 0x02030574 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Return indexed 8-byte entry when index below byte count +6, otherwise fallback.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/02030574.txt.
 */
void *FUN_02030574(unsigned char *self,unsigned int index) {
    if(index<self[6]) return *(char **)self+8*index;
    return (void *)0x020ec19c;
}
