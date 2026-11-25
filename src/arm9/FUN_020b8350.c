// FUN_020b8350 @ 0x020b8350 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b8350 @ 0x020b8350 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run base constructor with tag39 then install table.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b8350.txt.
 */
extern void FUN_0203020c(void *,void *,int); void *FUN_020b8350(unsigned int *self,void *arg) { FUN_0203020c(self,arg,39); self[0]=0x020fc86c; return self; }
