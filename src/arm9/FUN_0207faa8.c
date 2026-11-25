// FUN_0207faa8 @ 0x0207faa8 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207faa8 @ 0x0207faa8 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For selector zero, copy child signed byte +8 into global context word +20.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207faa8.txt.
 */
void FUN_0207faa8(char *self,int selector) { if(selector==0) { signed char *child=*(signed char **)(self+68); char *global=*(char **)0x02108c64; *(int *)(global+32)=child[8]; } }
