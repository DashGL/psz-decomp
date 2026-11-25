// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// Per-function native dispatch proof: notes/sessions/matching-low-2026-11-12.md
// Flags+4 distinguish registered classes: mask 0x20 -> table020fb3c8 slot9,
// mask 0x10 -> table020fa0b0 slot3. Both concrete callbacks return int 4096.
// Native member calls retain incoming-r0 table loads exactly.
//cpp
// FUN_020337d0 @ 0x020337d0 (inventory code 0x46, thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 113.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b113/020337d0.txt.
 */
struct First_020337d0 { virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual int v9(); };
struct Second_020337d0 { virtual void v0(); virtual void v1(); virtual void v2(); virtual int v3(); };
extern "C" {
extern void *FUN_020352a4(void *,unsigned int),*FUN_0209a4b4(void *),*FUN_02076618(void *);int FUN_020337d0(unsigned int id,unsigned int *out){void *obj=FUN_020352a4(*(void **)0x02108cf4,id),*first,*second;if(obj){first=FUN_0209a4b4(obj);second=FUN_02076618(obj);if(first){*out=((First_020337d0 *)first)->v9();return 1;}if(second){*out=((Second_020337d0 *)second)->v3();return 1;}}return 0;}

}
