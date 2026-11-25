// FUN_02077e34 @ 0x02077e34 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077e34 @ 0x02077e34 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store three words at +12c/+128/+130; receiver retained.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077e34.txt.
 */
void *FUN_02077e34(char *self,unsigned int a,unsigned int b,unsigned int c) {
    *(unsigned int *)(self+0x12c)=a; *(unsigned int *)(self+0x128)=b; *(unsigned int *)(self+0x130)=c; return self;
}
