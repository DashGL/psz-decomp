// FUN_0203b874 @ 0x0203b874 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203b874 @ 0x0203b874 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/0203b874.txt.
 */
int FUN_0203b874(char *s) { int sum=0,i; for(i=0;i<4;i++) if(((int *)(s+0x1d4))[i]!=-1) sum+=((unsigned char *)s)[0x1e4+i]; return sum; }
