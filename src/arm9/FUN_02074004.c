// FUN_02074004 @ 0x02074004 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074004 @ 0x02074004 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return zero for state 6, else signed child byte +f1a or -1 for absent child.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074004.txt.
 */
int FUN_02074004(char *self) {
    if(*(int *)(self+48)==6) return 0;
    { signed char *child=*(signed char **)(self+44); if(child) return child[0xf1a]; }
    return -1;
}
