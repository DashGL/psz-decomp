// FUN_02084420 @ 0x02084420 (0x5c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_02084420 @ 0x02084420 (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Check saved selection before starting or clearing operation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084420.txt.
 */
extern char *UNK_02108c64;extern int UNK_0211a500[];extern int FUN_0206d3dc(void *,int *);extern void FUN_02084b34(void);void FUN_02084420(int enabled){int data[5],selection;if(!enabled){char *p=UNK_02108c64;data[0]=*(int *)(p+36);data[1]=*(int *)(p+40);data[2]=*(int *)(p+44);data[3]=*(int *)(p+48);data[4]=*(int *)(p+52);selection=-1;if(FUN_0206d3dc(data,&selection) && (selection==0 || selection==4))enabled=1;}if(enabled)FUN_02084b34();else UNK_0211a500[1]=0;}
