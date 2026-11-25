// FUN_02033860 @ 0x02033860 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033860 @ 0x02033860 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/02033860.txt.
 */
extern int FUN_02033984(void *,void *,unsigned int);
int FUN_02033860(char *s,void *arg,unsigned short value,unsigned int mode) { if(arg) { unsigned int count=*(unsigned char *)(s+0x16); if(!count) { *(unsigned short *)(s+0x1a)=value; s[0x17]=mode; ++*(unsigned char *)(s+0x16); return FUN_02033984(s,arg,mode); } *(unsigned char *)(s+0x16)=count+1; return 1; } return 0; }
