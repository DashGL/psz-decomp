// FUN_02075bc4 @ 0x02075bc4 (0xa4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02075bc4 @ 0x02075bc4 (inventory code 0xa0, thumb)
// check: 2.0/sp2p3 target=0xa4 candidate=0xa4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release actor state and restore activity flags.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02075bc4.txt.
 */
extern void *UNK_02108d08;extern void *FUN_0204a580(void);extern void FUN_0206ffbc(void *),FUN_020472bc(void *),FUN_0203bfb4(void *),FUN_0204a670(void *,int),FUN_0203a834(void *),FUN_0203a9a4(void *,int),FUN_02038154(void *),FUN_0203eee4(void *,unsigned char);void FUN_02075bc4(char *s){if(*(int *)(s+576)==18)FUN_0206ffbc(s);*(int *)(s+568)=0;s[511]=-1;if(*(void **)(s+224)){FUN_020472bc(*(void **)(s+224));*(void **)(s+224)=0;}FUN_0203bfb4(s);FUN_0204a670(FUN_0204a580(),*(int *)(s+252));FUN_0203a834(s);FUN_0203a9a4(s,0);*(int *)(s+248)&=~8;*(int *)(s+248)|=2;*(int *)(s+248)|=1;FUN_02038154(s);if(UNK_02108d08)FUN_0203eee4(UNK_02108d08,(unsigned char)s[152]);}
