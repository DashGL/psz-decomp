// FUN_020767dc @ 0x020767dc (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_020767dc @ 0x020767dc (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three-word vector from source +1c into destination; no semantic return established.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020767dc.txt.
 */
typedef struct Vec { unsigned int x,y,z; } Vec;
void FUN_020767dc(Vec *dst,char *src) { *dst=*(Vec *)(src+28); }
