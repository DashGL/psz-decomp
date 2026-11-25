// FUN_020731d8 @ 0x020731d8 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_020731d8 @ 0x020731d8 (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch global mode 1/2/3 to optional objects; missing or unknown returns -1.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020731d8.txt.
 */
extern int FUN_02074004(void *);
int FUN_020731d8(void) {
    char *state=(char *)0x0211a210; char *object;
    switch(*(signed char *)(state+4)) {
    case 1: object=*(char **)(state+32); if(object) return 0; break;
    case 2: object=*(char **)(state+36); if(object) { return 0; } break;
    case 3: object=*(char **)(state+40); if(object) return FUN_02074004(object); break;
    }
    return -1;
}
