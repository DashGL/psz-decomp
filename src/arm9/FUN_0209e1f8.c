// FUN_0209e1f8 @ 0x0209e1f8 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_0209e1f8 @ 0x0209e1f8 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unregister receiver, release first field, clear second field and return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209e1f8.txt.
 */
extern void FUN_020ba494(void *),FUN_020ba8c4(void *); void *FUN_0209e1f8(void **self) { FUN_020ba494(self); if(self[0]) { FUN_020ba8c4(self[0]); self[0]=0; } self[1]=0; return self; }
