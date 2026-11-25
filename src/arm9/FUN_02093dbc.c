// FUN_02093dbc @ 0x02093dbc (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_02093dbc @ 0x02093dbc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct four-byte descriptor then pass option to receiver helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02093dbc.txt.
 */
extern void FUN_0207f40c(void *,int,int,int), FUN_02093d24(void *,void *,int); void FUN_02093dbc(void *self,int mode,int option) { unsigned int descriptor; FUN_0207f40c(&descriptor,0,0,mode); FUN_02093d24(self,&descriptor,option); }
