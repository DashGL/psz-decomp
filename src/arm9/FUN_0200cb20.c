// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
//cpp
// flags: -O4,p
extern "C" {
void FUN_0204276c(void);
void FUN_02096460(void);
void FUN_0209df38(void);
void FUN_0209c9d8(void);
void FUN_020b77c8(void);
void FUN_02084d78(void);
void FUN_0206e9dc(void);
void FUN_0207793c(void);
void FUN_02086e14(void);
void FUN_020844b0(void);
void FUN_02032488(void);
void FUN_02035250(void);
void FUN_02072fc0(void);
void FUN_0200d148(void);
void FUN_020334b0(void);
void FUN_020780d0(void);
void FUN_02031a4c(void);
void FUN_020c1fc8(void);
void FUN_020c2080(void);
void FUN_020c3b28(void);
void **FUN_020c3a1c(void);
void FUN_020c39c8(void **);
void FUN_020c3a50(void);
void FUN_0208f074(void);
void FUN_020c163c(void);
void FUN_020bc120(void);
void FUN_020ba0a4(void);
void FUN_020ba7e8(void);
void FUN_020c2d90(void);
void FUN_02067f88(void);
}

struct Receiver_0200cb20 {
    virtual ~Receiver_0200cb20();
};
extern Receiver_0200cb20 *DAT_02101dd4;

extern "C" void FUN_0200cb20(void) {
    FUN_0204276c();
    FUN_02096460();
    FUN_0209df38();
    FUN_0209c9d8();
    FUN_020b77c8();
    FUN_02084d78();
    FUN_0206e9dc();
    FUN_0207793c();
    FUN_02086e14();
    FUN_020844b0();
    FUN_02032488();
    FUN_02035250();
    FUN_02072fc0();
    FUN_0200d148();
    FUN_020334b0();
    FUN_020780d0();
    FUN_02031a4c();
    FUN_020c1fc8();
    FUN_020c2080();
    FUN_020c3b28();
    if (DAT_02101dd4 != 0) {
        delete DAT_02101dd4;
        DAT_02101dd4 = 0;
    }
    FUN_020c39c8(FUN_020c3a1c());
    FUN_020c3a50();
    FUN_0208f074();
    FUN_020c163c();
    FUN_020bc120();
    FUN_020ba0a4();
    FUN_020ba7e8();
    FUN_020c2d90();
    FUN_02067f88();
}
