// FUN_020793f4 @ 0x020793f4 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch24-manifest.json; original draft retained for referenced provenance.
// FUN_020793f4 @ 0x020793f4 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct base, initialize derived fields and reset transform.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020793f4.txt.
 */
extern void FUN_020407cc(void *),FUN_0207944c(void *); void *FUN_020793f4(char *self) { FUN_020407cc(self); *(unsigned int *)self=0x020fa2dc; *(int *)(self+136)=0;*(int *)(self+140)=0;*(int *)(self+192)=1;*(int *)(self+196)=4096; FUN_0207944c(self); return self; }
