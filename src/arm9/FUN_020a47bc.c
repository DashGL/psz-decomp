// FUN_020a47bc @ 0x020a47bc (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020a47bc @ 0x020a47bc (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Destroy bounded owned slot and deactivate companion.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a47bc.txt.
 */
typedef void (*Method)(void *);extern void FUN_020c38f0(void *,int);void FUN_020a47bc(char *self,int index){if(index>=0 && index<4){void *p=*(void **)(self+28+4*index);if(p){if(p)(*(Method **)p)[1](p);*(void **)(self+28+4*index)=0;}p=*(void **)(self+12+4*index);if(p)FUN_020c38f0(p,0);}}
