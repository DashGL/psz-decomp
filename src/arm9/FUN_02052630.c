// FUN_02052630 @ 0x02052630 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_02052630 @ 0x02052630 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 28.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b28/02052630.txt.
 */
void *FUN_02052630(char *s,unsigned int id) { int i,count=*(unsigned char *)(s+0x110); if(id<(unsigned int)count) { for(i=0;i<count;i++) if(id==((unsigned char *)s)[0x108+i]) { void *p=((void **)(s+0x98))[i]; if(p) return p; } } return 0; }
