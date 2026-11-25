// FUN_0204e6c8 @ 0x0204e6c8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch08-manifest.json; original draft retained for referenced provenance.
// FUN_0204e6c8 @ 0x0204e6c8 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 29.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b29/0204e6c8.txt.
 */
extern void FUN_02036094(void *); extern void FUN_020360a4(void *,int,int,int); extern void FUN_020bce3c(void *);
void FUN_0204e6c8(unsigned int a,unsigned int duration) { unsigned int packet[3]; FUN_02036094(packet); packet[1]=~0u; packet[2]=0; FUN_020360a4(packet,2,15,12); if(!duration) duration=60; packet[2]=duration; packet[1]=a; FUN_020bce3c(packet); }
