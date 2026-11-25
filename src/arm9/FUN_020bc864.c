// FUN_020bc864 @ 0x020bc864 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_020bc864 @ 0x020bc864 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy optional virtual owner and two embedded objects.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020bc864.txt.
 */
typedef void (*Method)(void *); extern void FUN_020bc7c4(void *),FUN_020bc788(void *); void *FUN_020bc864(char *self) { void *p=*(void **)(self+56); if(p) if(p) (*(Method **)p)[1](p); FUN_020bc7c4(self+40); FUN_020bc788(self+8); return self; }
