// FUN_020b74f0 @ 0x020b74f0 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch07.json; original draft retained for referenced provenance.
// FUN_020b74f0 @ 0x020b74f0 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct and reset twenty embedded records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b74f0.txt.
 */
extern void FUN_020b74a8(void *),FUN_020b74cc(void *);void *FUN_020b74f0(char *self){char *p;int i;self[0]=0;*(int *)(self+4)=-1;*(int *)(self+8)=0;p=self+12;do{FUN_020b74a8(p);p+=20;}while(p<self+412);for(i=0;i<20;i++)FUN_020b74cc(self+12+20*i);return self;}
