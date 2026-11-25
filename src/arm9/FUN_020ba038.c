// FUN_020ba038 @ 0x020ba038 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_020ba038 @ 0x020ba038 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Base construct with forwarded parent, install table and global pointer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba038.txt.
 */
extern void FUN_020b9cb0(void *,void *); void *FUN_020ba038(unsigned int *self,void *parent) { FUN_020b9cb0(self,parent); self[0]=0x020fc8a8; *(void **)0x0211b280=self; return self; }
