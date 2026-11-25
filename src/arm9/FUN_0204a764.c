// FUN_0204a764 @ 0x0204a764 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a764 @ 0x0204a764 (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 22.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b22/0204a764.txt.
 */
extern void FUN_0204adbc(void *); extern void FUN_020ba8ac(void *);
void *FUN_0204a764(char *s) { char *p,*next; *(unsigned int *)s=0x020f91d8; while((p=*(char **)(s+4))!=0) { next=*(char **)(p+0x10); if(p) { FUN_0204adbc(p); *(void **)(s+4)=0; } *(char **)(s+4)=next; } *(void **)(s+4)=0; FUN_020ba8ac(s); return s; }
