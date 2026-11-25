// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xee, exact bytes and relocation targets.
// Field and mask evidence: notes/sessions/continue-low-20261112.md
// FUN_02049138 @ 0x02049138 (inventory code 0xee, thumb)
// check: 2.0/sp2p3 target=0xee candidate=0xee words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 78.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b78/02049138.txt.
 */
extern void FUN_020480b8(void *,int);extern char *FUN_0204daa8(unsigned int);extern int FUN_0204fbd0(void *);
void FUN_02049138(char *s,int enabled){char *p,*a,*b;FUN_020480b8(s,enabled);p=*(char **)(s+272);if(p){FUN_020480b8(p,enabled);if(enabled)*(unsigned int *)(s+228)|=1;}if(enabled){p=FUN_0204daa8(*(unsigned int *)(s+232));if(p){a=*(char **)(s+268);if(a){p=*(char **)(p+432);if(p){if(FUN_0204fbd0(p)){a=*(char **)(s+268);*(unsigned int *)(a+228)&=~1u;b=*(char **)(s+276);if(b){*(unsigned int *)(b+228)&=~1u;a=*(char **)(s+268);*(unsigned int *)(a+228)|=1;}}else{a=*(char **)(s+268);*(unsigned int *)(a+228)|=1;}}else *(unsigned int *)(a+228)|=1;}}}else{a=*(char **)(s+268);if(a)*(unsigned int *)(a+228)|=1;b=*(char **)(s+276);if(b)*(unsigned int *)(b+228)|=1;}}
