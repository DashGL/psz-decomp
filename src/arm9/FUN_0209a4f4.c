// FUN_0209a4f4 @ 0x0209a4f4 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_0209a4f4 @ 0x0209a4f4 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map valid category modes to their ordinal.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209a4f4.txt.
 */
int FUN_0209a4f4(void *self,int mode){if(mode==0)return 0;if(mode==1)return 1;if(mode==2)return 2;if(mode==3)return 3;if(mode==4)return 4;if(mode==5)return 5;return -1;}
