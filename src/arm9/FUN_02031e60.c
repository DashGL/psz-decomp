// FUN_02031e60 @ 0x02031e60 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_02031e60 @ 0x02031e60 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 16.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b16/02031e60.txt.
 */
extern void FUN_02079834(void *,void *,int,void *);
void FUN_02031e60(void **s,void *arg,int index,int flag,void *extra) { int active=flag==1; if(index>=0 && index<2) { void *p=s[index]; if(p) FUN_02079834(p,arg,active,extra); } }
