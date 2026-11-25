// FUN_0203b570 @ 0x0203b570 (0xc8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203b570 @ 0x0203b570 (inventory code 0xbe, thumb)
// check: 2.0/sp2p3 target=0xc8 candidate=0xc8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 130.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b130/0203b570.txt.
 */
extern void FUN_0206ffbc(void *),FUN_020472bc(void *),FUN_0203bfb4(void *),FUN_0204a670(void *,unsigned int),FUN_0204f458(void *,void *),FUN_0203a9a4(void *,int),FUN_02038154(void *),FUN_0203eee4(void *,unsigned int);extern void *FUN_0204a580(void),*FUN_0204f3b8(void);void FUN_0203b570(char *s){void *m;if(*(int *)(s+576)==18)FUN_0206ffbc(s);*(unsigned int *)(s+568)=0;s[511]=-1;if(*(void **)(s+224)){FUN_020472bc(*(void **)(s+224));*(void **)(s+224)=0;}FUN_0203bfb4(s);FUN_0204a670(FUN_0204a580(),*(unsigned int *)(s+252));FUN_0204f458(FUN_0204f3b8(),*(void **)(s+432));*(void **)(s+432)=0;FUN_0203a9a4(s,0);*(volatile unsigned int *)(s+248)&=~8u;*(volatile unsigned int *)(s+248)|=2;*(volatile unsigned int *)(s+248)|=1;*(volatile unsigned int *)(s+248)&=~0x40000000u;FUN_02038154(s);m=*(void **)0x02108d08;if(m)FUN_0203eee4(m,(unsigned char)s[152]);}
