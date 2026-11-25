// FUN_020510f4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020510f4 @ 0x020510f4 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/020510f4.txt.
 */
extern void *FUN_0208555c(int);
void FUN_020510f4(char *s) { if(!(*(unsigned int *)(s+0x68)&1)) { int i; for(i=0;i<=3;i++) { void *p=FUN_0208555c(i); if(p) ((void (*)(void *))(*(void ***)p)[45])(p); } *(unsigned int *)(s+0x68)|=1; } }
