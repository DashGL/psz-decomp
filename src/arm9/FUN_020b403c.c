// FUN_020b403c @ 0x020b403c (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch03.json; original draft retained for referenced provenance.
// FUN_020b403c @ 0x020b403c (inventory code 0x60, thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Avoid duplicate descriptor insertion in global record table.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b403c.txt.
 */
extern char UNK_0211aaa4[],UNK_0211aa74[];extern int FUN_0207f45c(void *,void *);extern void *FUN_020b3d04(void);extern void FUN_020b3f50(void *,int,int,void *,int,int);void FUN_020b403c(void *unused,int a,int b,void *desc,int tag){int found=0,i;for(i=0;i<*(int *)(UNK_0211aa74+16);i++)if(FUN_0207f45c(desc,UNK_0211aaa4+40*i+32) && *(unsigned char *)(UNK_0211aaa4+40*i+37)==tag){found=1;break;}if(!found)FUN_020b3f50(FUN_020b3d04(),a,b,desc,tag,-1);}
