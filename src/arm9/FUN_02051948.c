// FUN_02051948 @ 0x02051948 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_02051948 @ 0x02051948 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 23.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b23/02051948.txt.
 */
void FUN_02051948(char *s,int count,int extra) { int size=(int)((unsigned int)count*52+12+(unsigned int)extra); s[2]=4; s[3]=5; s[0]=size/4; s[4]=-1; s[5]=-1; s[6]=count; s[7]=0; *(unsigned int *)(s+8)=0; }
