// FUN_0204a670 @ 0x0204a670 (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204a670 @ 0x0204a670 (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 31.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b31/0204a670.txt.
 */
extern void FUN_0204adbc(void *);
void FUN_0204a670(char *s,unsigned int key) { char *p=*(char **)(s+4); while(p) { char *next=*(char **)(p+0x10); if(*(unsigned int *)(p+0xe8)==key && *(int *)(p+0xac)==1 && !(*(unsigned int *)(p+0xe4)&2)) { if(p) FUN_0204adbc(p); } p=next; } }
