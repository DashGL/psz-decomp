// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x72, exact bytes and relocation targets.
// Native dispatch evidence: notes/sessions/matching-upper-2026-11-12-equipment-totals-language.md
//cpp
// FUN_020b5be4 @ 0x020b5be4 (inventory code 0x72, thumb)
// check: 2.0/sp2p3 target=0x72 candidate=0x72 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Combine equipment, character and slot contributions.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020b5be4.txt.
 */
struct C_020b5be4 {
 virtual void v0();
 virtual void v1();
 virtual void v2();
 virtual void v3();
 virtual void v4();
 virtual void v5();
 virtual void *v6();
};
extern "C" {
extern int FUN_020b737c(void *,void *,int),FUN_020b6388(void *,void *),FUN_020b62ac(void *,void *,int),FUN_020b6264(void *,void *,void *),FUN_020b611c(void *),FUN_020b60d8(void *,void *),FUN_020b6100(void *,void *);int FUN_020b5be4(char *s,void *a,void *b,void *c,void *all){void *descriptor;int x,y,z,w,u,v,t;descriptor=((C_020b5be4 *)s)->v6();x=FUN_020b737c(s,all,1);y=FUN_020b6388(s,a);z=FUN_020b62ac(s,a,0);w=FUN_020b6264(s,a,c);u=FUN_020b611c(s);v=FUN_020b60d8(s,descriptor);t=FUN_020b6100(s,b);return y+(z+(w+(x+(u+(v+t)))));}

}
