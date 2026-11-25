// FUN_02044d98 @ 0x02044d98 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02044d98 @ 0x02044d98 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/02044d98.txt.
 */
extern void FUN_02041ca0(void *,void *,void *,void *,unsigned short,void *);
void *FUN_02044d98(char *s,void *a,void *b,void *c,unsigned short d,void *e) { FUN_02041ca0(s,a,b,c,d,e); *(unsigned int *)s=0x020f8e40; *(unsigned int *)(s+0x130)=0; *(unsigned int *)(s+0x134)=0; *(unsigned int *)(s+0x138)=~0u; return s; }
