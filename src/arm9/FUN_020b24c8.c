// FUN_020b24c8 @ 0x020b24c8 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020b24c8 @ 0x020b24c8 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Remove matching entry from first nonempty matching bucket among three.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b24c8.txt.
 */
extern int FUN_020b2404(void *,unsigned int); void FUN_020b24c8(char *self,unsigned int value) { int i; for(i=0;i<3;i++) { char *p=self+32*i; if(*(int *)(p+28)>0 && FUN_020b2404(p,value)) break; } }
