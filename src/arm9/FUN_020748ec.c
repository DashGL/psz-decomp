// FUN_020748ec @ 0x020748ec (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_020748ec @ 0x020748ec (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Require state 5 and global helper result exactly one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020748ec.txt.
 */
extern int FUN_02084be4(void *);
int FUN_020748ec(unsigned int *self) {
    if(self[12]==5 && FUN_02084be4((void *)0x0211a51c)==1) return 1; return 0;
}
