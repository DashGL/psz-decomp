// FUN_020ae9f0 @ 0x020ae9f0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020ae9f0 @ 0x020ae9f0 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Run base constructor with tag35, install table and copy child first word.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ae9f0.txt.
 */
extern void FUN_0203020c(void *,void *,int); void *FUN_020ae9f0(unsigned int *self,void *arg) { FUN_0203020c(self,arg,35); self[0]=0x020fc490; self[12]=*(unsigned int *)self[1]; return self; }
