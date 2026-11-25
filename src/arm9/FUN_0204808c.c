// FUN_0204808c @ 0x0204808c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch10-manifest.json; original draft retained for referenced provenance.
// FUN_0204808c @ 0x0204808c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 18.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b18/0204808c.txt.
 */
extern void *FUN_0204f3b8(void); extern void FUN_020b5aec(void *,unsigned int,void *); extern void FUN_0204b130(void *); extern void FUN_020ba8ac(void *);
void *FUN_0204808c(char *s) { void *p; *(unsigned int *)s=0x020f9174; p=FUN_0204f3b8(); FUN_020b5aec(p,*(unsigned int *)(s+0xe8),s); FUN_0204b130(s); FUN_020ba8ac(s); return s; }
