// FUN_0203c38c @ 0x0203c38c (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203c38c @ 0x0203c38c (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/0203c38c.txt.
 */
extern int FUN_02000ec4(int);
int FUN_0203c38c(char *s,int change) { int limit=*(unsigned short *)(s+0x5e); int value=(int)((unsigned int)*(unsigned short *)(s+0x150)+(unsigned int)change); int excess=0; if(value<0) { excess=FUN_02000ec4(value); value=0; } else if(value>limit) { excess=value-limit; value=limit; } *(unsigned short *)(s+0x150)=value; return excess; }
