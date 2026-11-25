// FUN_020799c4 @ 0x020799c4 (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020799c4 @ 0x020799c4 (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy three-word vector to +5c and set word +68 to one.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020799c4.txt.
 */
typedef struct Vec { unsigned int x,y,z; } Vec;
void FUN_020799c4(char *self,Vec *vector) { *(Vec *)(self+0x5c)=*vector; *(unsigned int *)(self+0x68)=1; }
