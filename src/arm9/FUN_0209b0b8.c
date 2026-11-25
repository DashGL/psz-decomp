// FUN_0209b0b8 @ 0x0209b0b8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_0209b0b8 @ 0x0209b0b8 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy owned virtual resource and clear three related pointers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209b0b8.txt.
 */
void FUN_0209b0b8(char *self) { void *p=*(void **)(self+160); if(p) { if(p) (*(void (***)(void *))p)[1](p); *(void **)(self+160)=0; } *(unsigned int *)(self+164)=0; *(unsigned int *)(self+168)=0; *(unsigned int *)(self+172)=0; }
