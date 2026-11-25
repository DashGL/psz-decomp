// FUN_02046000 @ 0x02046000 (0x1e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_02046000 @ 0x02046000 (inventory code 0x1e, thumb)
// check: 2.0/sp2p3 target=0x1e candidate=0x1e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 12.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b12/02046000.txt.
 */
extern void FUN_02046020(void *,void *,void *,unsigned int);
void FUN_02046000(void *self,void *arg,unsigned int a,unsigned int b,unsigned int c,unsigned int value) { unsigned char temp[16]; temp[0]=0; temp[1]=a; temp[3]=b; temp[2]=c; FUN_02046020(self,arg,temp,value); }
