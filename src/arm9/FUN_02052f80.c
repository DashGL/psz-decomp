// FUN_02052f80 @ 0x02052f80 (0x1c, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch33-manifest.json; original draft retained for referenced provenance.
// FUN_02052f80 @ 0x02052f80 (inventory code 0x18, arm)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s -noThumb
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 2.
 * Return three when global halfword is zero, otherwise zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b2/02052f80.txt.
 */
int FUN_02052f80(void) { return *(unsigned short *)0x02110b00 ? 0 : 3; }
