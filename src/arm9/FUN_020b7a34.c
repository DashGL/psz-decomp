// FUN_020b7a34 @ 0x020b7a34 (0x58, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch05.json; original draft retained for referenced provenance.
// FUN_020b7a34 @ 0x020b7a34 (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x58 candidate=0x58 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release display resource and restore saved active selection.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b7a34.txt.
 */
extern char *UNK_02108c84;extern void FUN_02033db0(void *,void *),FUN_02037b88(void *,unsigned short),FUN_020ba8c4(void *);void FUN_020b7a34(char *s){char *manager=UNK_02108c84;if(manager){void *p=*(void **)(s+144);if(p){FUN_02033db0(manager,p);FUN_02037b88(manager,*(unsigned short *)(s+140));}if(*(int *)(s+148)!=9){*(int *)(manager+100)=*(int *)(s+148);*(int *)(s+148)=9;}}if(*(void **)(s+136)){FUN_020ba8c4(*(void **)(s+136));*(void **)(s+136)=0;}}
