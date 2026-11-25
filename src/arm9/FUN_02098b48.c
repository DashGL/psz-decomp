// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x7e, exact bytes and relocation targets.
// Native dispatch evidence: notes/sessions/matching-upper-2026-11-12-actor-interface-language.md
//cpp
// FUN_02098b48 @ 0x02098b48 (inventory code 0x7e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Turn actor toward position and start lateral movement.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02098b48.txt.
 */
struct C_02098b48 {
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
 virtual void v29();
 virtual void v30();
 virtual void v31();
 virtual void v32();
 virtual void v33();
 virtual void v34();
 virtual void v35();
 virtual void v36();
 virtual void v37();
 virtual void v38();
 virtual int v39();
};
extern "C" {
extern char *FUN_0208555c(int);extern int FUN_0203ae60(void *),FUN_0205c9e4(int,int);extern void FUN_020345f0(void *,void *),FUN_02036348(void *,void *,void *),FUN_02094638(void *,int,void *);void FUN_02098b48(int *s,void *position,int side){char *actor;int b[3],a[3],angle;actor=FUN_0208555c(s[0]);if(actor && !FUN_0203ae60(actor) && ((C_02098b48 *)actor)->v39()){FUN_020345f0(a,actor+156);FUN_02036348(b,position,a);angle=FUN_0205c9e4(b[0],b[2]);*(short *)(actor+192)=angle;if(side){*(short *)(actor+194)=angle+16384;s[1]=11;}else{*(short *)(actor+194)=angle-16384;s[1]=10;}FUN_02094638(actor,2,position);}}

}
