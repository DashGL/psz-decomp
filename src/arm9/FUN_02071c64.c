// FUN_02071c64 @ 0x02071c64 (0x56, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch06-manifest.json; original draft retained for referenced provenance.
// FUN_02071c64 @ 0x02071c64 (thumb)
// check: 2.0/sp2p3 target=0x56 candidate=0x56 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full switch/stack-argument semantics
 * decoded from named address. Evidence: scratch/coverage-high-game/inspect308.txt. */
unsigned short FUN_02071c64(void *unused,unsigned int *kind,int value){switch(*kind){case 1:case 3:return value+23;case 0:return value+33;case 8:return value+13;case 9:return value+43;case 10:return value+55;default:return value;}}
