// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0xb4, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// FUN_0209f1dc @ 0x0209f1dc (inventory code 0xaa, thumb)
// check: 2.0/sp2p3 target=0xb4 candidate=0xb4 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release scene registrations, owned resources and name state.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0209f1dc.txt.
 */
typedef void (*Destroy)(void *);extern void *UNK_02108c84;extern void FUN_0209f2bc(void *),FUN_02033fcc(void *,unsigned short),FUN_020ba8c4(void *);extern int FUN_02037d20(void *,unsigned short),FUN_02037b88(void *,unsigned short),FUN_02037c5c(void *,unsigned short);void FUN_0209f1dc(char *s){void *manager,*p;int i;FUN_0209f2bc(s);manager=UNK_02108c84;if(manager){if(FUN_02037d20(manager,*(unsigned short *)(s+70)))*(unsigned short *)(s+70)=65535;FUN_02033fcc(manager,*(unsigned short *)(s+68));if(FUN_02037b88(manager,*(unsigned short *)(s+68)))*(unsigned short *)(s+68)=65535;if(FUN_02037c5c(manager,*(unsigned short *)(s+72)))*(unsigned short *)(s+72)=65535;}*(unsigned short *)(s+68)=65535;*(unsigned short *)(s+70)=65535;*(unsigned short *)(s+72)=65535;if(*(void **)(s+76)){FUN_020ba8c4(*(void **)(s+76));*(void **)(s+76)=0;}p=*(void **)(s+64);if(p){if(p)(*(Destroy **)p)[1](p);*(void **)(s+64)=0;}for(i=0;i<64;i++)s[i]=0;*(short *)(s+84)=0;}
