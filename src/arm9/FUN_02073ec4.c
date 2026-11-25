// FUN_02073ec4 @ 0x02073ec4 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch05-manifest.json; original draft retained for referenced provenance.
// FUN_02073ec4 @ 0x02073ec4 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Stop and drain owned object before destroying bases.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073ec4.txt.
 */
typedef void (*Method)(void *);extern void FUN_020b9e28(void *),FUN_020ba940(void *);void *FUN_02073ec4(char *self){char *p;*(unsigned int *)self=0x020f9b04;p=*(char **)(self+44);if(p){(*(Method **)p)[2](p);while(((signed char *)(p=*(char **)(self+44)))[28])(*(Method **)p)[3](p);if(p){if(p)(*(Method **)p)[1](p);*(void **)(self+44)=0;}}FUN_020b9e28(self);FUN_020ba940(self);return self;}
