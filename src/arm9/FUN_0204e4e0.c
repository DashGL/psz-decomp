// FUN_0204e4e0 @ 0x0204e4e0 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e4e0 @ 0x0204e4e0 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b20/0204e4e0.txt.
 */
extern void FUN_02036094(void *); extern void FUN_020360a4(void *,int,int,int);
void *FUN_0204e4e0(char *s) { FUN_02036094(s); s[4]=-1; s[5]=0; s[6]=0; s[7]=0; *(unsigned short *)(s+8)=0; *(unsigned short *)(s+10)=0; FUN_020360a4(s,3,7,12); return s; }
