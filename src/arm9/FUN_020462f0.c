// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x1a, exact bytes and relocation targets; argument/return contract corrected.
// Return contract: notes/reference/near-return-low-20261113/FUN_020462f0-proof.json
// FUN_020462f0 @ 0x020462f0 (0x1a, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch11-manifest.json; original draft retained for referenced provenance.
// FUN_020462f0 @ 0x020462f0 (inventory code 0x1a, thumb)
// check: 2.0/sp2p3 target=0x1a candidate=0x1a words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 9.
 * Build four-byte command in stack buffer in target store order and forward receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b9/020462f0.txt.
 */
extern unsigned int FUN_0204630c(void *,void *);
unsigned int FUN_020462f0(void *self,unsigned int a,unsigned int b,unsigned int c) { unsigned char temp[16]; temp[0]=0; temp[1]=a; temp[3]=b; temp[2]=c; return FUN_0204630c(self,temp); }
