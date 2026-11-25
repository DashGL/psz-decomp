// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x52, exact bytes and relocation targets.
// Native receiver-first virtual head proven against the complete ROM body.
// ABI/evidence: notes/sessions/matching-low-2026-11-12.md
// Primary table020f988c slot54 uses empty default02037664; dispatch supplies
// receiver, amount, kind, and boolean mode, and consumes no return value.
//cpp
// FUN_02037610 @ 0x02037610 (inventory code 0x52, thumb)
// check: 2.0/sp2p3 target=0x52 candidate=0x52 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 114.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b114/02037610.txt.
 */
struct Receiver_02037610 {
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
virtual void v39();
virtual void v40();
virtual void v41();
virtual void v42();
virtual void v43();
virtual void v44();
virtual void v45();
virtual void v46();
virtual void v47();
virtual void v48();
virtual void v49();
virtual void v50();
virtual void v51();
virtual void v52();
virtual void v53();
virtual void v54(int,int,int);
};
extern "C" {
extern char *FUN_0208555c(unsigned int);extern void *FUN_0204f3b8(void);extern void FUN_020b5b10(void *,unsigned int,unsigned int);void FUN_02037610(char *s,unsigned int id,int amount,int kind,int last){char *p=FUN_0208555c(id);if(p){((Receiver_02037610 *)p)->v54(amount,kind,*(unsigned int *)(s+144)==3);if(last>0){void *manager;*(unsigned int *)(p+228)=0u-(unsigned short)last;manager=FUN_0204f3b8();FUN_020b5b10(manager,*(unsigned int *)(p+252),(unsigned int)last<<12);}}}

}
