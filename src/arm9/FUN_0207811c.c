// FUN_0207811c @ 0x0207811c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch25-manifest.json; original draft retained for referenced provenance.
// FUN_0207811c @ 0x0207811c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy/free first field with nested guard and clear global pointer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207811c.txt.
 */
extern void FUN_020c14dc(void *),FUN_020ba8ac(void *); void *FUN_0207811c(void **self) { void *p=*self; if(p) { if(p) { FUN_020c14dc(p); FUN_020ba8ac(p); } *self=0; } *(void **)0x0211a3b4=0; return self; }
