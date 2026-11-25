// FUN_0207dd84 @ 0x0207dd84 (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_0207dd84 @ 0x0207dd84 (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct derived effect state with zero vector and defaults.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207dd84.txt.
 */
typedef struct {int x,y,z;} Vector;extern void FUN_0204734c(void *);void *FUN_0207dd84(char *self){Vector zero;FUN_0204734c(self);zero.x=0;zero.y=0;zero.z=0;*(unsigned int *)self=0x020fa500;*(Vector *)(self+260)=zero;*(int *)(self+272)=31;*(int *)(self+276)=0;*(int *)(self+280)=0;*(short *)(self+284)=0;return self;}
