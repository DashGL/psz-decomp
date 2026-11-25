// FUN_02074bac @ 0x02074bac (0x48, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch05-manifest.json; original draft retained for referenced provenance.
// FUN_02074bac @ 0x02074bac (inventory code 0x44, thumb)
// check: 2.0/sp2p3 target=0x48 candidate=0x48 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Stop owned object and release buffer before base destruction.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074bac.txt.
 */
typedef void (*Method)(void *);extern void FUN_020ba8c4(void *),FUN_020b9e28(void *),FUN_020ba940(void *);void *FUN_02074bac(char *self){void *p;*(unsigned int *)self=0x020f9b3c;p=*(void **)(self+36);if(p){(*(Method **)p)[2](p);p=*(void **)(self+36);if(p){if(p)(*(Method **)p)[1](p);*(void **)(self+36)=0;}}if(*(void **)(self+112)){FUN_020ba8c4(*(void **)(self+112));*(void **)(self+112)=0;}FUN_020b9e28(self);FUN_020ba940(self);return self;}
