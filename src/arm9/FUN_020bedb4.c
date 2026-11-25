// FUN_020bedb4 @ 0x020bedb4 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020bedb4 @ 0x020bedb4 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset three special and one hundred ordinary records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bedb4.txt.
 */
extern void FUN_020bf060(void *);void FUN_020bedb4(char *self){int i;FUN_020bf060(self+2408);FUN_020bf060(self+2432);FUN_020bf060(self+2456);for(i=0;i<100;i++)FUN_020bf060(self+24*i);}
