// FUN_0205256c @ 0x0205256c (0x3a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// FUN_0205256c @ 0x0205256c (inventory code 0x3a, thumb)
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 31.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b31/0205256c.txt.
 */
extern void FUN_020525a8(void *,void *);
int FUN_0205256c(char *s,unsigned int id,void *out) { if(id<*(unsigned char *)(s+0x110)) { int i; for(i=0;i<7;i++) if(id==((unsigned char *)s)[0x108+i]) { FUN_020525a8(out,s+0xb4+12*i); return 1; } } return 0; }
