// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// FUN_02031498 @ 0x02031498 (inventory code 0x2a, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/02031498.txt.
 */
extern void FUN_0203194c(unsigned int *,unsigned int); extern void FUN_020c2d94(int,int,int);
void FUN_02031498(unsigned int *s) { unsigned int v=s[2]; if(v) { FUN_0203194c(s,v); if(*s!=11) { FUN_020c2d94(1,2,0); *s=2; } } else *s=3; }
