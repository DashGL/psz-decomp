// FUN_020ac93c @ 0x020ac93c (0xf8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020ac93c @ 0x020ac93c (inventory code 0xec, thumb)
// check: 2.0/sp2p3 target=0xf8 candidate=0xf8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch slot action with mode gating and failure feedback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ac93c.txt.
 */
extern void *FUN_02077930(void);extern int FUN_02077cb0(void *,int),FUN_0208f09c(void *,int);extern int UNK_020f5374[],UNK_020f5424[],UNK_020f5214[];extern void FUN_020c193c(int,int,int,int,int);int FUN_020ac93c(char *s,int slot,int mode){int kind,result;kind=FUN_02077cb0(FUN_02077930(),slot);if(kind<0||kind>=44)return 0;if((mode==0&&UNK_020f5374[kind])||(mode==1&&!UNK_020f5374[kind])){result=FUN_0208f09c(s,slot);switch(slot){case 0:*(short *)(s+656)=1;*(int *)(s+640)=2;if(UNK_020f5424[kind]&&!result)FUN_020c193c(0,5,0,0,-1);break;case 1:*(short *)(s+656)=2;*(int *)(s+644)=2;if(UNK_020f5424[kind]&&!result)FUN_020c193c(0,5,0,0,-1);break;case 2:*(short *)(s+656)=2048;*(int *)(s+648)=2;if(UNK_020f5424[kind]&&!result)FUN_020c193c(0,5,0,0,-1);break;}if(UNK_020f5214[kind])return result;*(short *)(s+596)=6;}return 0;}
