// FUN_020596a4 @ 0x020596a4 (0x40, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_020596a4 @ 0x020596a4 (inventory code 0x3c, arm)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 219.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b219/020596a4.txt.
 */
extern unsigned int FUN_0205913c(const char *,int),FUN_020683d4(void),FUN_020683e8(unsigned int);void *FUN_020596a4(const char *name,int size){unsigned int key=FUN_0205913c(name,size),irq=FUN_020683d4();char *p=*(char **)0x02112510;while(p&&*(unsigned int *)p!=key)p=*(char **)(p+4);FUN_020683e8(irq);return p;}
