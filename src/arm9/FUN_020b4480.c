// FUN_020b4480 @ 0x020b4480 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_020b4480 @ 0x020b4480 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset table, release child unconditionally and clear field.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b4480.txt.
 */
extern void FUN_020472bc(void *),FUN_020ba8ac(void *); void *FUN_020b4480(unsigned int *self) { self[0]=0x020fc750; FUN_020472bc((void *)self[5]); self[5]=0; FUN_020ba8ac(self); return self; }
