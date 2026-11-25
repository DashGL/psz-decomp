// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// Native dispatch evidence: notes/sessions/matching-upper-2026-11-12-actor-methods-language.md
//cpp
// FUN_0207088c @ 0x0207088c (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Query vector, compute angle and store both angle fields.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0207088c.txt.
 */
struct C_0207088c {
 virtual void v0();
 virtual void v1();
 virtual void v2();
 virtual void v3();
 virtual void v4();
 virtual void v5();
 virtual void v6();
 virtual void v7();
 virtual void v8();
 virtual void v9();
 virtual void v10();
 virtual void v11();
 virtual void v12();
 virtual void v13();
 virtual void v14();
 virtual void v15();
 virtual void v16();
 virtual void v17();
 virtual void v18();
 virtual void v19();
 virtual void v20();
 virtual void v21();
 virtual void v22();
 virtual void v23();
 virtual void v24();
 virtual void v25();
 virtual void v26();
 virtual void v27();
 virtual void v28();
 virtual int v29(int *,unsigned int);
};
extern "C" {
typedef int (*Method)(void *,int *,unsigned int); extern int FUN_02070810(void *,int *); int FUN_0207088c(char *self,unsigned int arg) { int v[3]; int value; if(((C_0207088c *)self)->v29(v,arg)==1) { value=FUN_02070810(self,v); *(unsigned short *)(self+194)=value; *(unsigned short *)(self+192)=*(unsigned short *)(self+194); return value; } return *(unsigned short *)(self+318); }

}
