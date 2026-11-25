// FUN_0203354c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_0203354c @ 0x0203354c (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/0203354c.txt.
 */
extern void *FUN_020352a4(void *,unsigned int); extern void *FUN_02076fb0(void *); extern void *FUN_0209a4b4(void *);
void FUN_0203354c(unsigned int id) { void *object=FUN_020352a4(*(void **)0x02108cf4,id); void *p=FUN_02076fb0(object); if(p) { ((void (*)(void *))(*(void ***)p)[2])(p); return; } p=FUN_0209a4b4(object); if(p) ((void (*)(void *))(*(void ***)p)[6])(p); }
