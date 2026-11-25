// FUN_020506bc @ 0x020506bc (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_020506bc @ 0x020506bc (inventory code 0x16, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 7.
 * Invalidate five halfwords at +48 then tail cleanup receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b7/020506bc.txt.
 */
extern void FUN_02050210(void *);
void FUN_020506bc(char *self) { int i; for(i=0;i<5;i++) ((unsigned short *)(self+72))[i]=0xffff; FUN_02050210(self); }
