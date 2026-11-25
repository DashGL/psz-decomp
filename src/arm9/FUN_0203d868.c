// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// Native receiver-first dispatch: notes/sessions/resume-low-2026-11-12.md
// Full per-function ROM, prior C, and concrete table evidence in accompanying proof.
//cpp
// FUN_0203d868 @ 0x0203d868 (inventory code 0x5c, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 115.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b115/0203d868.txt.
 */
struct Receiver_0203d868 { virtual void v0();virtual void v1();virtual void v2();virtual void v3();virtual void v4();virtual void v5();virtual void v6();virtual void v7();virtual void v8();virtual void v9();virtual void v10();virtual void v11();virtual void v12();virtual void v13();virtual void v14();virtual void v15();virtual void v16();virtual void v17();virtual void v18();virtual void v19();virtual void v20();virtual void v21();virtual void v22();virtual void v23();virtual void v24();virtual void v25();virtual void v26();virtual void v27();virtual void v28();virtual int v29(void *,unsigned int);virtual void v30();virtual void v31();virtual void v32();virtual void v33();virtual void v34();virtual void v35();virtual void v36();virtual void v37();virtual void v38();virtual void v39();virtual void v40();virtual void v41();virtual void v42();virtual void v43();virtual void v44();virtual void v45();virtual void v46();virtual void v47();virtual void v48();virtual int v49(); };
extern "C" {
extern int FUN_020390f4(void *);extern void FUN_0206eca0(void *,unsigned int,unsigned int),FUN_0203d8c4(void *),FUN_02070870(void *,void *);void FUN_0203d868(char *s,unsigned int angle,unsigned int arg){unsigned int pos[3];*(unsigned short *)(s+192)=angle;if(*(unsigned int *)(s+576)==9&&!FUN_020390f4(s)){FUN_0206eca0(s,angle,arg);FUN_0203d8c4(s);if(!((Receiver_0203d868 *)s)->v49()){if(((Receiver_0203d868 *)s)->v29(pos,arg)==1)FUN_02070870(s,pos);}}}

}
