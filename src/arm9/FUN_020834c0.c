// FUN_020834c0 @ 0x020834c0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_020834c0 @ 0x020834c0 (inventory code 0x2a, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy four-word constant table locally and return valid signed index.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020834c0.txt.
 */
typedef struct { int values[4]; } Table; int FUN_020834c0(int index) { Table local=*(Table *)0x020f2ee8; if(index>=0 && index<4) return local.values[index]; return -1; }
