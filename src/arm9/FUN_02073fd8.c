// FUN_02073fd8 @ 0x02073fd8 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch05-manifest.json; original draft retained for referenced provenance.
// FUN_02073fd8 @ 0x02073fd8 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return zero in state 6; otherwise dispatch child slot +18 or return -1 for missing child.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073fd8.txt.
 */
int FUN_02073fd8(char *self) {
    if(*(int *)(self+48)==6) return 0;
    { void *child=*(void **)(self+44); if(child) { int (**table)(void *)=*(int (***)(void *))child; return table[6](child); } }
    return -1;
}
