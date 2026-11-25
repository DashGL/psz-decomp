// FUN_02072f3c @ 0x02072f3c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02072f3c @ 0x02072f3c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear four leading bytes, reset embedded +c record, clear three tail words.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02072f3c.txt.
 */
extern void FUN_02072f5c(void *);
void FUN_02072f3c(unsigned char *self) {
    self[0]=0; self[1]=0; self[2]=0; self[3]=0; FUN_02072f5c(self+12);
    *(unsigned int *)(self+28)=0; *(unsigned int *)(self+32)=0; *(unsigned int *)(self+36)=0;
}
