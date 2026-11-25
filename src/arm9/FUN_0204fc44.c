// FUN_0204fc44 @ 0x0204fc44 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204fc44 @ 0x0204fc44 (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 38.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b38/0204fc44.txt.
 */
extern void FUN_0204add0(void *);extern void FUN_02047ae8(void *);
void *FUN_0204fc44(char *s){FUN_0204add0(s);*(unsigned int *)s=0x020f92bc;*(int *)(s+0x100)=0;*(int *)(s+0x104)=0;*(int *)(s+0x108)=0;FUN_02047ae8(s+0x10c);*(int *)(s+0x174)=-1;*(int *)(s+0x178)=-1;*(int *)(s+0x17c)=-1;*(int *)(s+0x180)=-1;*(int *)(s+0x184)=100;*(int *)(s+0x188)=0;return s;}
