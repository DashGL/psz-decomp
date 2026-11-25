// FUN_0204a738 @ 0x0204a738 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a738 @ 0x0204a738 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b17/0204a738.txt.
 */
extern void FUN_0204adbc(void *);
void *FUN_0204a738(char *s) { char *p,*next; *(unsigned int *)s=0x020f91d8; while((p=*(char **)(s+4))!=0) { next=*(char **)(p+0x10); if(p) { FUN_0204adbc(p); *(void **)(s+4)=0; } *(char **)(s+4)=next; } *(void **)(s+4)=0; return s; }
