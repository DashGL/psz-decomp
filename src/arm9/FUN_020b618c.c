// FUN_020b618c @ 0x020b618c (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b618c @ 0x020b618c (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Map decoded item type and selected signed byte through helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b618c.txt.
 */
extern unsigned int FUN_020b6170(void *,int); extern int FUN_020848e0(int,int); int FUN_020b618c(signed char *self,int mode) { int value; if(mode==1) value=self[12]; else value=self[11]; return FUN_020848e0(FUN_020b6170(self,mode),value); }
