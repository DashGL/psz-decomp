// FUN_0204152c @ 0x0204152c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch12-manifest.json; original draft retained for referenced provenance.
// FUN_0204152c @ 0x0204152c (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/0204152c.txt.
 */
extern void *DAT_02108d64;
extern void FUN_02041510(void *);
void *FUN_0204152c(char *s) { *(unsigned int *)s=0; *(unsigned int *)(s+4)=0; *(unsigned int *)(s+8)=0; *(unsigned int *)(s+12)=0; *(unsigned short *)(s+16)=0xffff; *(unsigned short *)(s+18)=0xffff; *(unsigned short *)(s+20)=0xffff; *(unsigned int *)(s+24)=0; *(unsigned int *)(s+28)=0; *(unsigned int *)(s+32)=0; *(unsigned int *)(s+36)=0; FUN_02041510(s+0x28); FUN_02041510(s+0x36); DAT_02108d64=s; return s; }
