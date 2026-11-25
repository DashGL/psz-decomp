// FUN_0207ffc4 @ 0x0207ffc4 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207ffc4 @ 0x0207ffc4 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Forward receiver with mode three when input word +8 is zero, otherwise mode zero; third argument zero.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207ffc4.txt.
 */
extern void FUN_02093dbc(void *,int,int);
void FUN_0207ffc4(void *self,unsigned int *arg) { if(arg[2]==0) FUN_02093dbc(self,3,0); else FUN_02093dbc(self,0,0); }
