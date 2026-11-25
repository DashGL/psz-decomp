// FUN_02088adc @ 0x02088adc (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_02088adc @ 0x02088adc (inventory code 0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query selected embedded callback.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02088adc.txt.
 */
extern int FUN_02030700(void *);int FUN_02088adc(char *self,int mode){if(mode==0){if(FUN_02030700(self+72))return 1;}else if(mode==1){if(FUN_02030700(self+88))return 1;}else if(mode==2){if(FUN_02030700(self+80))return 1;}return 0;}
