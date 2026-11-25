// FUN_02030aec - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02030aec @ 0x02030aec (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 33.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b33/02030aec.txt.
 */
extern void FUN_020ba8b4(void *);
void *FUN_02030aec(char *s) { if(*(void **)s) { unsigned int i; for(i=0;i<*(unsigned int *)(s+4);i++) { void *p=(*(void ***)s)[i]; if(p) { if(p) ((void (*)(void *))(*(void ***)p)[3])(p); (*(void ***)s)[i]=0; } } if(*(void **)s) { FUN_020ba8b4(*(void **)s); *(void **)s=0; } } return s; }
