// FUN_0203ad60 @ 0x0203ad60 (0xa2, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203ad60 @ 0x0203ad60 (inventory code 0xa2, thumb)
// check: 2.0/sp2p3 target=0xa2 candidate=0xa2 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 125.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b125/0203ad60.txt.
 */
extern void FUN_0201d37c(void *,unsigned int),FUN_0201d120(void *,int,unsigned int);void FUN_0203ad60(char *s,unsigned int value){char *p=*(char **)(s+140);if(p&&*(void **)(p+28))FUN_0201d37c(*(void **)(p+28),value);if(*(void **)(s+432)){p=*(char **)(*(char **)(s+432)+20);if(p){p=*(char **)(p+48);if(p){p=*(char **)(p+28);if(p)FUN_0201d120(p,0,value);}}p=*(char **)(*(char **)(s+432)+24);if(p){p=*(char **)(p+48);if(p){p=*(char **)(p+28);if(p)FUN_0201d120(p,0,value);}}}if(*(void **)(s+436)){p=*(char **)(*(char **)(s+436)+20);if(p){p=*(char **)(p+48);if(p){p=*(char **)(p+28);if(p)FUN_0201d120(p,0,value);}}p=*(char **)(*(char **)(s+436)+24);if(p){p=*(char **)(p+48);if(p){p=*(char **)(p+28);if(p)FUN_0201d120(p,0,value);}}}}
