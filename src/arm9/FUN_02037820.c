// FUN_02037820 @ 0x02037820 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037820 @ 0x02037820 (inventory code 0x24, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 15.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b15/02037820.txt.
 */
extern void FUN_020ba8ac(void *);
void *FUN_02037820(char *s) { void *p; *(unsigned int *)s=0x020f6fe8; p=*(void **)(s+0x10); if(p) { if(p) ((void (*)(void *))(*(void ***)p)[4])(p); *(void **)(s+0x10)=0; } FUN_020ba8ac(s); return s; }
