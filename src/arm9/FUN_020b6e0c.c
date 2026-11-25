// FUN_020b6e0c @ 0x020b6e0c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_020b6e0c @ 0x020b6e0c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Collect five records and query only ability41 through43.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b6e0c.txt.
 */
extern int FUN_020b6200(void *,void *); extern int FUN_020b737c(void *,void *,unsigned int); int FUN_020b6e0c(void *self,unsigned int id) { unsigned int records[20]; if(id-41<=2) { FUN_020b6200(self,records); return FUN_020b737c(self,records,id); } return 0; }
