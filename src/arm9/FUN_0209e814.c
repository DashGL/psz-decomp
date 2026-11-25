// FUN_0209e814 @ 0x0209e814 (0x8a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_0209e814 @ 0x0209e814 (inventory code 0x8a, thumb)
// check: 2.0/sp2p3 target=0x8a candidate=0x8a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Evaluate object transition predicates by mode.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e814.txt.
 */
extern int FUN_02030700(void *);int FUN_0209e814(char *s,int mode){if(mode==0){if(FUN_02030700(s+292))return 1;}else if(mode==1){if(FUN_02030700(s+308))return 1;}else if(mode==2){if(!FUN_02030700(s+308))return 1;}else if(mode==5){if(FUN_02030700(s+300))return 1;}else if(mode==3){if(FUN_02030700(s+316))return 1;}else if(mode==4){if(!FUN_02030700(s+316))return 1;}return 0;}
