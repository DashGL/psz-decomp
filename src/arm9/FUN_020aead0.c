// FUN_020aead0 @ 0x020aead0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020aead0 @ 0x020aead0 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Install destructor table, release owned object and destroy base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aead0.txt.
 */
extern void FUN_02034714(void *),FUN_020ba8ac(void *),FUN_020af9d4(void *); void *FUN_020aead0(char *self) { void *p; *(unsigned int *)self=0x020fc4b0; p=*(void **)(self+104); if(p) { if(p) { FUN_02034714(p); FUN_020ba8ac(p); } *(void **)(self+104)=0; } FUN_020af9d4(self); return self; }
