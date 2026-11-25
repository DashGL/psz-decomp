// FUN_020405e8 @ 0x020405e8 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_020405e8 @ 0x020405e8 (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Zero leading triple via helper then halfword +c and word +10.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020405e8.txt.
 */
extern void FUN_0204059c(void *);
void FUN_020405e8(char *self) { FUN_0204059c(self); *(unsigned short *)(self+12)=0; *(unsigned int *)(self+16)=0; }
