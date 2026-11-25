// FUN_02088134 @ 0x02088134 (0x24, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch14.json; original draft retained for referenced provenance.
// FUN_02088134 @ 0x02088134 (thumb)
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG and literal-pool extent checked.
 * Evidence: scratch/coverage-high-game/inspect306.txt. */
void FUN_02088134(unsigned int a,unsigned int b,unsigned int c,unsigned int d,unsigned int e,unsigned int f){*(volatile unsigned int *)0x040004a4=(e<<16)|(a|(b<<4)|(c<<6)|f|(d<<24));}
