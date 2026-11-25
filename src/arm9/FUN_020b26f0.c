// FUN_020b26f0 @ 0x020b26f0 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020b26f0 @ 0x020b26f0 (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release two owned pointers with nested guards and return receiver.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b26f0.txt.
 */
extern void FUN_020ba8ac(void *); void *FUN_020b26f0(void **self) { void *p=self[1]; if(p) { if(p) FUN_020ba8ac(p); self[1]=0; } p=self[0]; if(p) { if(p) FUN_020ba8ac(p); self[0]=0; } return self; }
