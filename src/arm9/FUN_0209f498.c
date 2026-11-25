// FUN_0209f498 @ 0x0209f498 (0x50, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_0209f498 @ 0x0209f498 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct object and initialize owner-dependent position.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f498.txt.
 */
typedef struct {int x,y,z;} V;extern void FUN_0203020c(void *,void *,int);extern int FUN_020834c0(int);void *FUN_0209f498(char *s,void *desc){FUN_0203020c(s,desc,25);*(unsigned int *)s=0x020fb7f4;*(int *)(s+48)=**(int **)(s+4);*(short *)(s+52)=0;*(V *)(s+56)=*(V *)(s+28);*(int *)(s+68)=0;*(int *)(s+68)=*(int *)(*(char **)0x02108c64+28);*(int *)(s+68)=FUN_020834c0(*(int *)(s+68));*(int *)(s+60)+=8192;return s;}
