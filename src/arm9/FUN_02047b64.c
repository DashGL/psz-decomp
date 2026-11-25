// FUN_02047b64 @ 0x02047b64 (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_02047b64 @ 0x02047b64 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/02047b64.txt.
 */
extern void *FUN_0204f3b8(void); extern void FUN_020b5aec(void *,unsigned int,void *); extern void FUN_0204b130(void *);
void *FUN_02047b64(char *s) { void *p; *(unsigned int *)s=0x020f9194; p=FUN_0204f3b8(); FUN_020b5aec(p,*(unsigned int *)(s+0xe8),s); FUN_0204b130(s); return s; }
