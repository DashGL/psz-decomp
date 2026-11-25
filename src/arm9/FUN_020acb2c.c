// FUN_020acb2c @ 0x020acb2c (inventory code 0xf8, thumb)
// check: 2.0/sp2p3 target=0x108 candidate=0x108 words=4 exact_bytes=12 bad_relocs=0
// near: ndiff=4/66 size=0x108 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Dispatch a gated slot action with optional status and failure feedback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020acb2c.txt.
 */
extern void *FUN_02077930(void);extern int FUN_02077cb0(void *,int),FUN_0208f2b4(void *,int);extern const int UNK_020f5374[],UNK_020f52c4[],UNK_020f5424[],UNK_020f5214[];extern void FUN_020c193c(int,int,int,int,int);int FUN_020acb2c(char *s,int slot,int mode){int kind,result;kind=FUN_02077cb0(FUN_02077930(),slot);if((mode==0&&UNK_020f5374[kind])||(mode==1&&!UNK_020f5374[kind])){result=FUN_0208f2b4(s,slot);switch(slot){case 0:*(short *)(s+656)=1;if(UNK_020f52c4[kind]){*(int *)(s+640)=2;if(UNK_020f5424[kind]&&!result)FUN_020c193c(0,5,0,0,-1);}break;case 1:*(short *)(s+656)=2;if(UNK_020f52c4[kind]){*(int *)(s+644)=2;if(UNK_020f5424[kind]&&!result)FUN_020c193c(0,5,0,0,-1);}break;case 2:*(short *)(s+656)=2048;if(UNK_020f52c4[kind]){*(int *)(s+648)=2;if(UNK_020f5424[kind]&&!result)FUN_020c193c(0,5,0,0,-1);}break;}if(UNK_020f5214[kind])return result;*(short *)(s+596)=6;}return 0;}
