// FUN_020781e0 @ 0x020781e0 (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch26-manifest.json; original draft retained for referenced provenance.
// FUN_020781e0 @ 0x020781e0 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy vector to +4, store halfword +10, set bit zero in +14.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020781e0.txt.
 */
typedef struct Vec { int x,y,z; } Vec;
void FUN_020781e0(char *self,Vec *vector,unsigned int value) { *(Vec *)(self+4)=*vector; *(unsigned short *)(self+16)=value; *(unsigned short *)(self+20)|=1; }
