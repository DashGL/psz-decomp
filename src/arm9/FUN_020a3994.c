// FUN_020a3994 @ 0x020a3994 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch04.json; original draft retained for referenced provenance.
// FUN_020a3994 @ 0x020a3994 (inventory code 0x60, thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query component condition for five mode values.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a3994.txt.
 */
extern int FUN_02030700(void *);int FUN_020a3994(char *s,int mode){if(mode==0){if(FUN_02030700(s+72))return 1;}else if(mode==1){if(FUN_02030700(s+88))return 1;}else if(mode==2){if(!FUN_02030700(s+88))return 1;}else if(mode==3){if(FUN_02030700(s+96))return 1;}else if(mode==4){if(FUN_02030700(s+80))return 1;}return 0;}
