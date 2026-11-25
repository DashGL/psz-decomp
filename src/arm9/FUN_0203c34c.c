// FUN_0203c34c @ 0x0203c34c (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203c34c @ 0x0203c34c (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 27.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b27/0203c34c.txt.
 */
extern int FUN_02000ec4(int); extern void FUN_0203e43c(void *);
int FUN_0203c34c(char *s,int change) { int limit=*(unsigned short *)(s+0x5c); int old=*(unsigned short *)(s+0x14e); int value=(int)((unsigned int)old+(unsigned int)change),excess=0; if(value<0) { excess=FUN_02000ec4(value); value=0; } else if(value>limit) { excess=value-limit; value=limit; } *(unsigned short *)(s+0x14e)=value; if(value!=old) FUN_0203e43c(s); return excess; }
