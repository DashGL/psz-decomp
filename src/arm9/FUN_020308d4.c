// FUN_020308d4 @ 0x020308d4 (0x2a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020308d4 @ 0x020308d4 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x2a candidate=0x2a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 19.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b19/020308d4.txt.
 */
extern void *FUN_0200c2dc(unsigned int,int,int,int,int); extern void FUN_02030918(void *);
void FUN_020308d4(unsigned int *s,int count) { if(count>0) { s[1]=count; *(void **)s=FUN_0200c2dc(41*s[1],1,0,0,0); FUN_02030918(s); } }
