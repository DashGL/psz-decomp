// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x2a, exact bytes and relocation targets.
//cpp
struct Receiver_0203beb4 { virtual void slot0()=0; virtual void slot1()=0; virtual void slot2()=0; virtual int slot3(void *)=0; };
extern "C" {
// FUN_0203beb4 @ 0x0203beb4 (inventory code 0x2a, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 20.
 */
extern int FUN_020a8bb0(void *);
int FUN_0203beb4(char *s) { unsigned int temp[4]; char *sub=s+0x20; if(((Receiver_0203beb4 *)sub)->slot3(temp)==1) { int n=FUN_020a8bb0(temp); if(n>=1 && n<=5) return 1; } return 0; }

}

/* Native receiver, owning constructors, actual callee ABI and full-object proof: notes/reference/resume2-low-20261112/FUN_0203beb4-proof.json. */
