// FUN_02073aa8 @ 0x02073aa8 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02073aa8 @ 0x02073aa8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward index to mode-3 object helper when object exists, else return zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073aa8.txt.
 */
extern int FUN_0207490c(void *,int);
int FUN_02073aa8(int index) {
    char *state=(char *)0x0211a210;
    if(*(signed char *)(state+4)==3) { void *object=*(void **)(state+40); if(object) return FUN_0207490c(object,index); }
    return 0;
}
