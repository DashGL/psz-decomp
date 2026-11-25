// FUN_020ae76c @ 0x020ae76c (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch06.json; original draft retained for referenced provenance.
// FUN_020ae76c @ 0x020ae76c (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct derived state and install default vector.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ae76c.txt.
 */
typedef struct {unsigned int a,b,c;} Vector;extern void FUN_020715a8(void *);void *FUN_020ae76c(char *self){FUN_020715a8(self);*(unsigned int *)self=0x020fc40c;*(int *)(self+168)=0;*(int *)(self+172)=0;*(int *)(self+176)=0;*(short *)(self+180)=0;*(Vector *)(self+184)=*(Vector *)0x020fc958;*(short *)(self+196)=0;return self;}
