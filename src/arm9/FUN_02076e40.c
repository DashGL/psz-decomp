// FUN_02076e40 @ 0x02076e40 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02076e40 @ 0x02076e40 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * For selector zero, resolve child signed byte through manager with kind zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02076e40.txt.
 */
extern void *FUN_02033418(void *,int,int);
void *FUN_02076e40(char *self,int selector) {
    if(selector==0) { signed char *child=*(signed char **)(self+48); return FUN_02033418(*(void **)0x02108c68,0,child[0]); }
    return 0;
}
