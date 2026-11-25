// FUN_020b6f00 @ 0x020b6f00 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020b6f00 @ 0x020b6f00 (thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG and literal-pool extent checked.
 * Evidence: scratch/coverage-high-game/inspect306.txt. */
int FUN_020b6f00(void *unused,int type){switch(type){case 21:return 0;case 19:case 22:case 23:case 27:case 28:return 1;case 20:case 24:case 25:return 2;case 26:return 3;default:return -1;}}
