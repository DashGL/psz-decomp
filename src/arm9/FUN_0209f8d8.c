// FUN_0209f8d8 @ 0x0209f8d8 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// FUN_0209f8d8 @ 0x0209f8d8 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize timer and submit copied vector once.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f8d8.txt.
 */
typedef struct { unsigned int a,b,c; } Vector; extern void FUN_02033658(int,int,void *); void FUN_0209f8d8(char *self) { if(!*(unsigned int *)(self+104)) { Vector local; *(unsigned int *)(self+108)=24; local=*(Vector *)(self+28); FUN_02033658(1,22,&local); *(unsigned int *)(self+104)=1; } }
