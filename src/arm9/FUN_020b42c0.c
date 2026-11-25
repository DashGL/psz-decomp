// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// Verified 2026-11-12: full extent 0x4c, exact bytes and all five relocation targets.
// Evidence: notes/sessions/matching-upper-continue-2026-11-12.md
// FUN_020b42c0 @ 0x020b42c0 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset fifty global records and release owned objects.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b42c0.txt.
 */
typedef struct {unsigned int a,b,c;} Vector;extern char DAT_0211aaa4[];extern char DAT_0211aa74[];extern Vector DAT_020fc958;extern void FUN_0203955c(void *),FUN_020b4440(void *);void FUN_020b42c0(void){int i;for(i=0;i<50;i++){char *p=DAT_0211aaa4+40*i;FUN_0203955c(p+4);*(Vector *)(p+20)=DAT_020fc958;if(*(void **)p){FUN_020b4440(*(void **)p);*(void **)p=0;}}*(int *)(DAT_0211aa74+16)=0;DAT_0211aa74[0]=0;}
