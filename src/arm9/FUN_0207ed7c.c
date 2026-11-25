// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x3e, exact bytes and relocation targets.
// FUN_0207ed7c @ 0x0207ed7c (inventory code 0x3e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Advance effect and add signed vertical step when active.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207ed7c.txt.
 */
typedef struct { int x,y,z; } V; extern int FUN_02047440(void *),FUN_0204770c(void *); extern void FUN_02035408(V *,int,int,int); int FUN_0207ed7c(char *self) { int result=FUN_02047440(self); if(!result && FUN_0204770c(self)) { V value; FUN_02035408(&value,*(int *)(self+92),*(short *)(self+260)+*(int *)(self+96),*(int *)(self+100)); *(V *)(self+92)=value; } return result; }
