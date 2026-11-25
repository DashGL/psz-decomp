// FUN_020362b0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020362b0 @ 0x020362b0
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 26.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b26/020362b0.txt.
 */
extern unsigned int data_020ed034[];
extern void * data_02108cf4[];
extern void *FUN_020352a4(void *,unsigned int); extern void *FUN_020352c0(void *); extern void FUN_020369c8(void *,int,unsigned int,int);
void FUN_020362b0(char *s) { void *p=FUN_020352c0(FUN_020352a4(*data_02108cf4,*(unsigned int *)(s+4))); if(p) { int index=*(signed char *)(s+8); if(index>=0 && index<2) FUN_020369c8(p,0,data_020ed034[index],*(signed char *)(s+9)); } }
