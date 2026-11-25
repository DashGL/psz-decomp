// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x94, exact bytes and relocation targets.
// Native dispatch evidence: notes/sessions/matching-upper-2026-11-12-actor-methods-language.md
//cpp
// FUN_0208f690 @ 0x0208f690 (inventory code 0x8a, thumb)
// check: 2.0/sp2p3 target=0x94 candidate=0x94 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Reset actor action heading and send synchronized turn packet.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208f690.txt.
 */
struct C_0208f690 {
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
 virtual int v53(int,int,int);
};
extern "C" {
extern void *UNK_02108c64;extern char UNK_0211a578[];extern void FUN_02032dfc(void *,void *),FUN_0208d560(void *,int,unsigned short),FUN_0206f1e0(void *,unsigned short);extern int FUN_0206d36c(void *,int);int FUN_0208f690(char *s){int d[5];if(s){((C_0208f690 *)s)->v53(10,0,0);FUN_02032dfc(d,UNK_02108c64);if(!FUN_0206d36c(d,0)){if((unsigned char)s[508]!=2)*(short *)(s+318)=*(unsigned short *)(s+316);else{*(short *)(s+194)=*(unsigned short *)(s+316);*(short *)(s+318)=*(unsigned short *)(s+316);((C_0208f690 *)s)->v38();}FUN_0208d560(UNK_0211a578,*(int *)(s+252),*(unsigned short *)(s+316));FUN_0206f1e0(s,*(unsigned short *)(s+316));return 1;}}return 0;}

}
