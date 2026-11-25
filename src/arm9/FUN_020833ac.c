// FUN_020833ac @ 0x020833ac (0x5e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020833ac @ 0x020833ac (inventory code 0x5e, thumb)
// check: 2.0/sp2p3 target=0x5e candidate=0x5e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Randomly choose a bounded quantity according to available counts.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020833ac.txt.
 */
extern void *FUN_020780f4(void);extern unsigned int FUN_0207816c(void *,unsigned int);unsigned int FUN_020833ac(unsigned int *s,int limit){unsigned int count=s[0],total=s[1]+count;int selected;if(!total)selected=0;else{unsigned int value=FUN_0207816c(FUN_020780f4(),total);count=s[0];selected=count>value;}if(selected){if((int)(count*2)>=limit){if(count>2)count=2;}else if(count>=2){if(FUN_0207816c(FUN_020780f4(),100)<30)count=2;else count=1;}else count=1;}else count=0;return count;}
