// Helper classes scoped to this function; machine code and relocations rechecked 2026-11-12.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3a, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x3a candidate=0x3a words=0 exact_bytes=0 bad_relocs=0
//cpp
// FUN_020badc8 @ 0x020badc8 (inventory code 0x3a, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Drain source queue through callback and forwarding buffer.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020badc8.txt.
 */
extern "C" { extern void *FUN_020bab0c(void *);extern void FUN_020bce24(void *,void *);extern int FUN_020ba9cc(void *,void *); }
struct O_FUN_020badc8 {  virtual void v0(); virtual void v1(); virtual void v2(); };
extern "C" void FUN_020badc8(O_FUN_020badc8 *o,char *queue){char *self=(char *)o;for(;;){void *p=FUN_020bab0c(queue);if(*(int *)(queue+32)){o->v2();return;}if(!p)return;FUN_020bce24(self,p);FUN_020ba9cc(self+28,p);}}
