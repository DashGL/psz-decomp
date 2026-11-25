// FUN_0203bbdc @ 0x0203bbdc (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bbdc @ 0x0203bbdc (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Store two halfwords at +1f4/+1f6, then call five-argument helper using player word +fc twice.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/0203bbdc.txt.
 */
extern void FUN_020437d8(unsigned int,int,unsigned int,int,void *);
void FUN_0203bbdc(char *self,unsigned int a,unsigned int b) { unsigned int id; *(unsigned short *)(self+0x1f4)=a; *(unsigned short *)(self+0x1f6)=b; id=*(unsigned int *)(self+0xfc); FUN_020437d8(id,38,id,0,0); }
