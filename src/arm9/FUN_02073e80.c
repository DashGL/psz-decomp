// FUN_02073e80 @ 0x02073e80 (0x44, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch05-manifest.json; original draft retained for referenced provenance.
// FUN_02073e80 @ 0x02073e80 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x44 candidate=0x44 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Stop owned operation, drain work, destroy owner and base.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02073e80.txt.
 */
typedef void (*Method)(void *); extern void FUN_020b9e28(void *); void *FUN_02073e80(char *self) { char *p; *(unsigned int *)self=0x020f9b04; p=*(char **)(self+44); if(p) { (*(Method **)p)[2](p); while(((signed char *)(p=*(char **)(self+44)))[28]) (*(Method **)p)[3](p); if(p) { if(p) (*(Method **)p)[1](p); *(void **)(self+44)=0; } } FUN_020b9e28(self); return self; }
