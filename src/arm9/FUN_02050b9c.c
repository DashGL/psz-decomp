// FUN_02050b9c @ 0x02050b9c (0x28, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02050b9c @ 0x02050b9c (inventory code 0x28, thumb)
// check: 2.0/sp2p3 target=0x28 candidate=0x28 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/02050b9c.txt.
 */
extern void FUN_02050c70(void *,void *);
int FUN_02050b9c(char *s,void *arg,unsigned short value) { if(arg) { unsigned int count=*(unsigned char *)(s+0xc); if(!count) { *(unsigned short *)(s+0xe)=value; ++*(unsigned char *)(s+0xc); FUN_02050c70(s,arg); return 1; } *(unsigned char *)(s+0xc)=count+1; return 1; } return 0; }
