// FUN_0207458c @ 0x0207458c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_0207458c @ 0x0207458c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * When pending word +38 and global readiness predicate is one, run two global helpers and clear pending word.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207458c.txt.
 */
extern int FUN_020e2628(void);
extern void FUN_020c07a4(void), FUN_020bd648(void);
void FUN_0207458c(unsigned int *self) {
    if(self[14] && FUN_020e2628()==1) { FUN_020c07a4(); FUN_020bd648(); self[14]=0; }
}
