// FUN_020b354c @ 0x020b354c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020b354c @ 0x020b354c (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install destructor table and release owned resource.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b354c.txt.
 */
extern void FUN_02034714(void *),FUN_020ba8ac(void *); void *FUN_020b354c(char *self) { void *p; *(unsigned int *)self=0x020fc740; p=*(void **)(self+4); if(p) { if(p) { FUN_02034714(p); FUN_020ba8ac(p); } *(void **)(self+4)=0; } return self; }
