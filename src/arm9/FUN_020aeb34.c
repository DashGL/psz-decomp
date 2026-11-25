// FUN_020aeb34 @ 0x020aeb34 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_020aeb34 @ 0x020aeb34 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Update owned resource from copied vector and halfword.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020aeb34.txt.
 */
typedef struct { unsigned int a,b,c; } Vector; extern void FUN_020348e4(void *,void *),FUN_02034904(void *,unsigned int); void FUN_020aeb34(char *self) { if(*(void **)(self+104)) { Vector local=*(Vector *)(self+12); FUN_020348e4(*(void **)(self+104),&local); FUN_02034904(*(void **)(self+104),*(unsigned short *)(self+48)); } }
