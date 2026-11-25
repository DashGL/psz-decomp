// FUN_02070870 @ 0x02070870 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_02070870 @ 0x02070870 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Compute angle from receiver and supplied vector, store halfword result at +c2 and +c0, return full result.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070870.txt.
 */
extern unsigned int FUN_02070810(void *,void *);
unsigned int FUN_02070870(char *self,void *vector) {
    unsigned int result=FUN_02070810(self,vector);
    *(unsigned short *)(self+0xc2)=result;
    *(unsigned short *)(self+0xc0)=*(unsigned short *)(self+0xc2);
    return result;
}
