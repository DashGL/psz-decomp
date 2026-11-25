// FUN_0207e668 @ 0x0207e668 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_0207e668 @ 0x0207e668 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install base cleanup dispatch table, release owned handle, cleanup base, optionally free self; returns original receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207e668.txt.
 */
extern void FUN_0207a5b4(void *), FUN_02047434(void *), FUN_020ba8ac(void *);
void *FUN_0207e668(void **self) { self[0]=(void *)0x020fa420; FUN_0207a5b4(self); FUN_02047434(self);  return self; }
