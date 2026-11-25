// FUN_0207775c @ 0x0207775c (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_0207775c @ 0x0207775c (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize flags, counters and two-word tail.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207775c.txt.
 */
extern void FUN_0200c938(void *,unsigned int); void *FUN_0207775c(char *self) { int i; self[0]=1;self[1]=0; *(int *)(self+4)=0;*(int *)(self+8)=0;*(int *)(self+12)=0;*(int *)(self+16)=0;*(int *)(self+20)=0;*(int *)(self+24)=-1; FUN_0200c938(self+28,8); for(i=0;i<2;i++) ((int *)(self+28))[i]=0; return self; }
