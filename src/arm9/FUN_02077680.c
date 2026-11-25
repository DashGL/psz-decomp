// FUN_02077680 @ 0x02077680 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077680 @ 0x02077680 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Return vector height with classification offset.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02077680.txt.
 */
typedef struct { int x,y,z; } V; extern int FUN_02077664(void *); int FUN_02077680(char *self) { if(FUN_02077664(self)) { V a=*(V *)(self+28); return a.y+1024; } else { V b=*(V *)(self+28); return b.y+5120; } }
