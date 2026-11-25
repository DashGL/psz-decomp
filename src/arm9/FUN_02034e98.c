// FUN_02034e98 @ 0x02034e98 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034e98 @ 0x02034e98 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Multiply two signed fixed-point words by signed scale, round by 800 and shift 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02034e98.txt.
 */
extern long long FUN_0200a380(long long,long long);
void FUN_02034e98(int *self,int scale) {
    self[0]=(int)((FUN_0200a380(self[0],scale)+0x800)>>12);
    self[1]=(int)((FUN_0200a380(self[1],scale)+0x800)>>12);
}
