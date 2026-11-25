// FUN_020bc5a0 @ 0x020bc5a0 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch12.json; original draft retained for referenced provenance.
// FUN_020bc5a0 @ 0x020bc5a0 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release owned buffer through heap or default allocator.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc5a0.txt.
 */
extern void FUN_020c13ec(void *,void *),FUN_020ba8c4(void *); void FUN_020bc5a0(char *self) { if(*(int *)(self+128)) { void *p=*(void **)(self+112); if(p) { void *heap=*(void **)(self+124); if(heap) FUN_020c13ec(heap,p); else FUN_020ba8c4(p); *(void **)(self+112)=0; } } }
