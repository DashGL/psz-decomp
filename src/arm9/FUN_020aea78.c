// FUN_020aea78 @ 0x020aea78 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020aea78 @ 0x020aea78 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For selector zero report global mode-two query equals one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aea78.txt.
 */
extern int FUN_02078b6c(int); int FUN_020aea78(void *unused,int selector) { if(selector==0 && FUN_02078b6c(2)==1) return 1; return 0; }
