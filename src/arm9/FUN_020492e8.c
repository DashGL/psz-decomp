// FUN_020492e8 @ 0x020492e8 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_020492e8 @ 0x020492e8 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Store word +4c unless word +e4 bit 23 set; preserve receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/020492e8.txt.
 */
void *FUN_020492e8(char *self,unsigned int value) { if(!(*(unsigned int *)(self+0xe4)&0x800000)) *(unsigned int *)(self+0x4c)=value; return self; }
