// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
// Native evidence: notes/sessions/matching-upper-continue-2026-11-12.md
//cpp
struct Obj_020ac7b8 {virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual void v29();virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();virtual void v40();virtual void v41();virtual void v42();virtual void v43();virtual void v44();virtual void v45();virtual void v46();virtual void v47();virtual void v48();virtual void v49();virtual void v50();virtual void v51();virtual void v52();virtual void v53();virtual void v54();virtual void v55();virtual void v56();virtual void v57();virtual void v58();virtual void v59();virtual void v60();virtual void v61();virtual void v62();virtual void v63();virtual void v64();virtual void used();};
extern "C" {
// FUN_020ac7b8 @ 0x020ac7b8 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply active entity action and notify global and virtual handlers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ac7b8.txt.
 */
typedef void (*Method)(void *);extern int FUN_0203ae60(void *);extern void FUN_0204f0c4(int,void *,int),FUN_020b05f0(void *);extern void *FUN_02086e3c(void);void FUN_020ac7b8(char *self){if(!FUN_0203ae60(self)){FUN_0204f0c4(*(int *)(self+252),self+680,1);FUN_020b05f0(FUN_02086e3c());((Obj_020ac7b8 *)self)->used();}}

}
