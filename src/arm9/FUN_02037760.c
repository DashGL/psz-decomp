// FUN_02037760 @ 0x02037760 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_02037760 @ 0x02037760 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/02037760.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_020377d8(void *); extern void FUN_0208e668(void *);
void *FUN_02037760(char *s) { void *p; *(unsigned int *)s=0x020f6fe8; *(unsigned int *)(s+4)=0; *(unsigned int *)(s+8)=0; *(unsigned int *)(s+12)=0; *(unsigned int *)(s+16)=0; *(unsigned int *)(s+44)=0; p=FUN_020ba894(12); if(p) p=FUN_020377d8(p); *(void **)(s+16)=p; FUN_0208e668(s+20); FUN_0208e668(s+32); return s; }
