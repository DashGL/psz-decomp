// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// Native dispatch evidence: notes/sessions/matching-upper-2026-11-12-action-family-language.md
//cpp
// FUN_0208fb08 @ 0x0208fb08 (inventory code 0x6e, thumb)
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate actor action and send typed action packet.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208fb08.txt.
 */
struct C_0208fb08 {
    virtual int v0();
    virtual int v1();
    virtual int v2();
    virtual int v3();
    virtual int v4();
    virtual int v5();
    virtual int v6();
    virtual int v7();
    virtual int v8();
    virtual int v9();
    virtual int v10();
    virtual int v11();
    virtual int v12();
    virtual int v13();
    virtual int v14();
    virtual int v15();
    virtual int v16();
    virtual int v17();
    virtual int v18();
    virtual int v19();
    virtual int v20();
    virtual int v21();
    virtual int v22();
    virtual int v23();
    virtual int v24();
    virtual int v25();
    virtual int v26();
    virtual int v27();
    virtual int v28();
    virtual int v29();
    virtual int v30();
    virtual int v31();
    virtual int v32();
    virtual int v33();
    virtual int v34();
    virtual int v35();
    virtual int v36();
    virtual int v37();
    virtual int v38();
    virtual int v39();
    virtual int v40();
    virtual int v41();
    virtual int v42();
    virtual int v43();
    virtual int v44();
    virtual int v45();
    virtual int v46();
    virtual int v47();
    virtual int v48();
    virtual int v49();
};
extern "C" {
extern void *UNK_02108c64;extern char UNK_0211a578[];extern void FUN_02032dfc(void *,void *),FUN_0207088c(void *,int),FUN_0208d6d0(void *,int,unsigned short,int,int,int,int);extern int FUN_0206d36c(void *,int),FUN_0204ddd8(int,int);int FUN_0208fb08(char *s,int a,int b,int c){int descriptor[5];if(s){FUN_02032dfc(descriptor,UNK_02108c64);if(!FUN_0206d36c(descriptor,0) && FUN_0204ddd8(*(int *)(s+252),9)){if(!((C_0208fb08 *)s)->v49())FUN_0207088c(s,a);FUN_0208d6d0(UNK_0211a578,*(int *)(s+252),*(unsigned short *)(s+318),9,a,b,c);return 1;}}return 0;}

}
