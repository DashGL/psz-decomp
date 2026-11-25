// FUN_020306e4 @ 0x020306e4 (0x16, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch21-manifest.json; original draft retained for referenced provenance.
// FUN_020306e4 @ 0x020306e4 (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x16 candidate=0x16 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Store object and byte options, initialize selector zero then validate supplied selector through helper.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/020306e4.txt.
 */
extern void FUN_020308b0(void *,int);
void *FUN_020306e4(char *self,void *object,int selector,unsigned int option) { *(void **)self=object; self[4]=0; self[5]=option; FUN_020308b0(self,selector); return self; }
