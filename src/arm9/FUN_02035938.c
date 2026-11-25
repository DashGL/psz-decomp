// FUN_02035938 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02035938 @ 0x02035938 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/02035938.txt.
 */
extern void *FUN_020352a4(void *,unsigned int); extern void *FUN_020352c0(void *);
void FUN_02035938(char *self) { void *object=FUN_020352c0(FUN_020352a4(*(void **)0x02108cf4,*(unsigned int *)(self+4))); if(object) ((void (*)(void *,void *))(*(void ***)(object))[15])(object,self); }
