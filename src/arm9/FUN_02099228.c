// FUN_02099228 @ 0x02099228 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_02099228 @ 0x02099228 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Clear owner action when predicate fails or countdown expires, otherwise tick nested object.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02099228.txt.
 */
extern int FUN_02098f20(void *); extern void FUN_02098bc8(void *); void FUN_02099228(char *self) { char *owner; if(!FUN_02098f20(self)) { owner=*(char **)(self+12); *(unsigned int *)(owner+48)=0; return; } { int count=*(int *)(self+8)-1; *(int *)(self+8)=count; if(count>0) { owner=*(char **)(self+12); FUN_02098bc8(*(void **)(owner+8)); return; } } owner=*(char **)(self+12); *(unsigned int *)(owner+48)=0; }
