// FUN_020b49a8 @ 0x020b49a8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020b49a8 @ 0x020b49a8 (inventory code 0x2e, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize vector record, sentinel and embedded descriptor.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b49a8.txt.
 */
typedef struct { unsigned int a,b,c; } Vector; extern void FUN_0207f3fc(void *),FUN_0207f418(void *); void *FUN_020b49a8(char *self) { *(unsigned int *)self=0; *(Vector *)(self+4)=*(Vector *)0x020fc958; *(int *)(self+16)=-1; *(unsigned short *)(self+20)=0; FUN_0207f3fc(self+22); FUN_0207f418(self+22); return self; }
