// FUN_0209df5c @ 0x0209df5c (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_0209df5c @ 0x0209df5c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release two owned states and destroy primary allocation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209df5c.txt.
 */
extern void FUN_0209e03c(void *),FUN_0209e01c(void *),FUN_0209e1f8(void *),FUN_020ba8ac(void *); void *FUN_0209df5c(void **self) { void *p; FUN_0209e03c(self); FUN_0209e01c(self); p=self[0]; if(p) { if(p) { FUN_0209e1f8(p); FUN_020ba8ac(p); } } return self; }
