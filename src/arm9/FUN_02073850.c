// FUN_02073850 @ 0x02073850 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073850 @ 0x02073850 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return optional global mode-specific object field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073850.txt.
 */
void *FUN_02073850(void) {
    char *state=(char *)0x0211a210;
    if(*(signed char *)(state+4)==3) { char *object=*(char **)(state+40); if(object) return *(void **)(object+44); }
    return 0;
}
