// FUN_020a355c @ 0x020a355c (0xae, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_020a355c @ 0x020a355c (inventory code 0xae, thumb)
// check: 2.0/sp2p3 target=0xae candidate=0xae words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query direct and inverted component conditions by selector.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a355c.txt.
 */
extern int FUN_02030700(void *);int FUN_020a355c(char *s,int mode){if(mode==0){if(FUN_02030700(s+292))return 1;}else if(mode==1){if(FUN_02030700(s+308))return 1;}else if(mode==2){if(!FUN_02030700(s+308))return 1;}else if(mode==5){if(*(int *)(s+324)&1)return 1;}else if(mode==4){if(!(*(int *)(s+324)&1))return 1;}else if(mode==3){if(FUN_02030700(s+300))return 1;}else if(mode==6){if(FUN_02030700(s+316))return 1;}else if(mode==7){if(!FUN_02030700(s+316))return 1;}return 0;}
