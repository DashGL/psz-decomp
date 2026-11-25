// FUN_0207281c @ 0x0207281c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_0207281c @ 0x0207281c (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return indexed signed state byte if valid record and flag bit zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207281c.txt.
 */
int FUN_0207281c(char *self,int index) { if(index>=0 && index<*(int *)(self+172)) { signed char *p=*(signed char **)(self+168)+52*index; if(p[18]&1) return p[19]; } return 0; }
