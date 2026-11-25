// FUN_0206dae0 @ 0x0206dae0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch07-manifest.json; original draft retained for referenced provenance.
// FUN_0206dae0 @ 0x0206dae0
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Allocate four bytes into +60, zero them through fill helper and explicitly zero stored word; target assumes successful allocation.
 * Evidence: scratch/coverage-root/batch6/0206dae0.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void *FUN_020ba894(unsigned int);
extern void FUN_020656b8(void *,int,unsigned int);
void FUN_0206dae0(char *self) { void *word=FUN_020ba894(4);*(void **)(self+96)=word;FUN_020656b8(word,0,4);**(unsigned int **)(self+96)=0; }
