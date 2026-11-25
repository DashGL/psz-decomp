// FUN_020b245c @ 0x020b245c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020b245c @ 0x020b245c (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Sum helper result across three records.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b245c.txt.
 */
extern unsigned int FUN_020b23a0(void *,void *); unsigned int FUN_020b245c(char *self,void *arg) { unsigned int total=0; int i; for(i=0;i<3;i++) total+=FUN_020b23a0(self+32*i,arg); return total; }
