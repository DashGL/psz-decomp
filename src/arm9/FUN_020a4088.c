// FUN_020a4088 @ 0x020a4088 (0xde, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020a4088 @ 0x020a4088 (inventory code 0xde, thumb)
// check: 2.0/sp2p3 target=0xde candidate=0xde words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Evaluate numbered object conditions from predicates and descriptor flags.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a4088.txt.
 */
extern int FUN_02030700(void *);int FUN_020a4088(char *s,int condition){if(condition==0){if(FUN_02030700(s+292))return 1;}else if(condition==2){if(FUN_02030700(s+308)&&*(signed char *)(*(char **)(s+72)+48)==0)return 1;}else if(condition==3){if(FUN_02030700(s+308)&&*(signed char *)(*(char **)(s+72)+48)==1)return 1;}else if(condition==4){if(!FUN_02030700(s+308))return 1;}else if(condition==1){if(FUN_02030700(s+300))return 1;}else if(condition==6){if(*(int *)(s+372)&1)return 1;}else if(condition==7){if(FUN_02030700(s+324))return 1;}else if(condition==8){if(!FUN_02030700(s+324))return 1;}else if(condition==5){if(FUN_02030700(s+316))return 1;}return 0;}
