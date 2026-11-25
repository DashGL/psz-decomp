// FUN_020792a4 @ 0x020792a4 (0x46, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_020792a4 @ 0x020792a4 (thumb)
// check: 2.0/sp2p3 target=0x46 candidate=0x46 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full switch/stack-argument semantics
 * decoded from named address. Evidence: scratch/coverage-high-game/inspect308.txt. */
unsigned short FUN_020792a4(void *unused,int value,unsigned int mode){switch(mode){case 0:return value+11;case 1:return value+21;case 2:return value+8;case 3:return value+28;case 4:return value+18;default:return 0;}}
