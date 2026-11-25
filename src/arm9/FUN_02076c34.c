// FUN_02076c34 @ 0x02076c34 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
/* USA ROM reconstruction, 2026-11-04. Allocate and construct a factory object.
 * Evidence: scratch/coverage-high-game/inspect283.txt. */
extern void *FUN_020ba894(int),*FUN_02076c60(void *,void *);
void *FUN_02076c34(void *input){void *p=FUN_020ba894(76);if(p)p=FUN_02076c60(p,input);return p;}
