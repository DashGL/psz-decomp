// FUN_02070fb4 @ 0x02070fb4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_02070fb4 @ 0x02070fb4 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Store three words at +6c, mirror first/third to +24/+2c, and add angle to halfword +92 into +82.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070fb4.txt.
 */
void FUN_02070fb4(char *self,unsigned int angle,unsigned int x,unsigned int y,unsigned int z) {
    *(unsigned int *)(self+0x6c)=x; *(unsigned int *)(self+0x24)=x;
    *(unsigned int *)(self+0x70)=y; *(unsigned int *)(self+0x74)=z; *(unsigned int *)(self+0x2c)=z;
    *(unsigned short *)(self+0x82)=angle+*(unsigned short *)(self+0x92);
}
