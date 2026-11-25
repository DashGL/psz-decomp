// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// Native receiver-first dispatch: notes/sessions/resume-low-2026-11-12.md
// Full per-function ROM, prior C, and concrete table evidence in accompanying proof.
//cpp
struct Receiver_020378c8 {virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();};
struct Child_020378c8 {virtual void v0();virtual void v1();virtual void v2();};
// FUN_020378c8 @ 0x020378c8 (inventory code 0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 113.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b113/020378c8.txt.
 */
extern "C" void FUN_020378c8(char *s){char *obj;((Receiver_020378c8 *)s)->v6();if(*(void **)(s+12)){obj=*(char **)(s+8);((Child_020378c8 *)obj)->v2();*(unsigned int *)(*(char **)(s+8)+4)=0;*(void **)(s+8)=*(void **)(s+12);*(void **)(s+12)=0;*(unsigned int *)(*(char **)(s+8)+4)=*(unsigned int *)(s+4);*(void **)(*(char **)(s+8)+8)=s;obj=*(char **)(s+8);((Child_020378c8 *)obj)->v0();}obj=*(char **)(s+8);((Child_020378c8 *)obj)->v1();}
