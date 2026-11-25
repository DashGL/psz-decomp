// FUN_020776b8 @ 0x020776b8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_020776b8 @ 0x020776b8 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance object and countdown, emit event at one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020776b8.txt.
 */
extern void FUN_0203041c(void *),FUN_02033658(int,int,void *); void FUN_020776b8(char *self) { int count; FUN_0203041c(self); count=--*(int *)(self+76); if(count<0) { *(int *)(self+76)=0; return; } if(count==1 && *(int *)(self+84)!=-1 && *(int *)(self+80)!=-1) FUN_02033658(*(int *)(self+80),*(int *)(self+84),self+88); }
