// FUN_020322c0 @ 0x020322c0 (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020322c0 @ 0x020322c0 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Read returned object halfword +34, or fallback 100 if absent.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020322c0.txt.
 */
extern char *FUN_02031c88(void *);
unsigned int FUN_020322c0(void *self) { char *object=FUN_02031c88(self); if(object) return *(unsigned short *)(object+52); return 100; }
