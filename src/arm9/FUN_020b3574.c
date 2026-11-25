// FUN_020b3574 @ 0x020b3574 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020b3574 @ 0x020b3574 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install destructor table and release owned resource.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3574.txt.
 */
extern void FUN_02034714(void *),FUN_020ba8ac(void *); void *FUN_020b3574(char *self) { void *p; *(unsigned int *)self=0x020fc740; p=*(void **)(self+4); if(p) { if(p) { FUN_02034714(p); FUN_020ba8ac(p); } *(void **)(self+4)=0; } FUN_020ba8ac(self); return self; }
