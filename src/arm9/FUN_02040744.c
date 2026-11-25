// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// Native receiver-first dispatch: notes/sessions/resume-low-2026-11-12.md
// Full per-function ROM, prior C, and concrete table evidence in accompanying proof.
//cpp
// FUN_02040744 @ 0x02040744 (inventory code 0x6c, thumb)
// check: 2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 117.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b117/02040744.txt.
 */
struct Receiver_02040744 { virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5(unsigned int); };
extern "C" {
typedef struct{int x,y,z;} Vector_02040744;extern void FUN_020345f0(Vector_02040744 *,void *),FUN_02036348(Vector_02040744 *,Vector_02040744 *,Vector_02040744 *),FUN_02036368(Vector_02040744 *);extern unsigned int FUN_0205cc08(int),FUN_0205cb90(int);void FUN_02040744(char *s){Vector_02040744 a,b,flat,full;unsigned int angle;FUN_020345f0(&a,s+24);FUN_020345f0(&b,s+36);FUN_02036348(&flat,&a,&b);flat.y=0;FUN_02036368(&flat);angle=FUN_0205cc08(flat.z);if(flat.x<0)angle=(unsigned short)(65536-angle);((Receiver_02040744 *)s)->v5(angle);FUN_02036348(&full,&a,&b);FUN_02036368(&full);*(unsigned short *)(s+128)=FUN_0205cb90(full.y);}

}
