// FUN_02080af4 @ 0x02080af4 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_02080af4 @ 0x02080af4 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Optionally notify manager with signed byte +13, then clear byte +14.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02080af4.txt.
 */
extern void *FUN_0204f3b8(void); extern void FUN_020b5ad8(void *,int);
void FUN_02080af4(signed char *self,int notify) { if(notify) FUN_020b5ad8(FUN_0204f3b8(),self[19]); self[20]=0; }
