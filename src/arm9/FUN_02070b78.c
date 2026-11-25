// FUN_02070b78 @ 0x02070b78 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_02070b78 @ 0x02070b78 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release heap allocation, destroy heap and delete object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02070b78.txt.
 */
typedef void (*Method)(void *); extern void FUN_020c13ec(void *,void *),FUN_020ba8ac(void *); void *FUN_02070b78(char *self) { void *p; *(unsigned int *)self=0x020f9998; p=*(void **)(self+36); if(p) { FUN_020c13ec(*(void **)(self+24),p); *(void **)(self+36)=0; } p=*(void **)(self+24); if(p) { if(p) (*(Method **)p)[1](p); *(void **)(self+24)=0; } FUN_020ba8ac(self); return self; }
