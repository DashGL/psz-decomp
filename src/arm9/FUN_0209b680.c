// FUN_0209b680 @ 0x0209b680 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_0209b680 @ 0x0209b680 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize tagged descriptor with forwarded source and flags.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209b680.txt.
 */
extern void FUN_02030d5c(void *,void *);void *FUN_0209b680(char *self,void *desc,int arg){self[0]=1;self[1]=0;self[2]=0;self[3]=0;FUN_02030d5c(self+4,desc);*(int *)(self+8)=0;*(int *)(self+12)=0;*(int *)(self+16)=0;*(int *)(self+20)=-1;self[24]=arg;self[25]=0;self[26]=255;self[27]=0;self[2]=5;self[3]=7;self[0]=7;return self;}
