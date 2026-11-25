// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// FUN_020b3e10 @ 0x020b3e10
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Preserve object positions and release global object slots.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b3e10.txt.
 */
extern char data_0211aaa4[];
typedef struct {int x,y,z;} V;extern void FUN_020b4440(void *),FUN_02046d88(void *);void FUN_020b3e10(char *s){int i;for(i=0;i<50;i++){char *slot=data_0211aaa4+40*i;char *p=*(char **)slot;if(p){char *effect=*(char **)(p+20);if(effect)*(V *)(slot+20)=*(V *)(effect+92);FUN_020b4440(*(void **)slot);*(void **)slot=0;}}if(*(void **)(s+4)){FUN_02046d88(*(void **)(s+4));*(void **)(s+4)=0;}}
