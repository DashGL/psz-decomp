// flags: -O4,s
typedef struct { unsigned w[8]; } Cfg8;
extern int DAT_02122c50[];
extern const int DAT_02122c68[];
extern void *DAT_02122c14;
extern const Cfg8 DAT_02122288;
extern void *FUN_020c2b50(void *);
extern void *FUN_020c3564(void *);
extern void *FUN_020c1fc8(void);
#pragma thumb off
extern void *FUN_0205e0c4(void);
extern void FUN_0200c938(void *, unsigned);
extern void FUN_0206557c(unsigned, void *, unsigned);
#pragma thumb reset
extern void FUN_overlay_10__02120bbc(void *);
extern void FUN_020a45a4(unsigned);
extern void FUN_overlay_10__021206ac(unsigned, unsigned, unsigned, unsigned);
extern void FUN_020c2b84(void *, const void *, unsigned, unsigned, unsigned);
extern void FUN_020c35d4(void *, const void *);
extern void FUN_020c38f0(void *, int);
extern void FUN_overlay_10__02120bd0(void *);
extern void FUN_overlay_10__02120c20(void *);
extern int FUN_020c2438(void *, const void *, const void *, int);
extern int FUN_020c10ec(void);
void *FUN_overlay_10__021206d0(char *self) {
    Cfg8 config;
    void *resource;
    *(void **)self = DAT_02122c50;
    FUN_020c2b50(self + 4);
    *(unsigned *)(self + 8) = ~0u;
    FUN_020c3564(self + 12);
    *(unsigned *)(self + 72) = 0;
    *(unsigned *)(self + 76) = 0;
    *(unsigned short *)(self + 80) = 0;
    *(unsigned short *)(self + 82) = 0;
    *(unsigned *)(self + 84) = 0;
    FUN_0200c938(self + 88, 12);
    FUN_overlay_10__02120bbc(self);
    FUN_020a45a4(8);
    FUN_overlay_10__021206ac(0, 1, 4, 4);
    FUN_020c2b84(self + 4, DAT_02122c68, 7, 4, 4);
    resource = DAT_02122c14;
    *(int *)(self + 8) = FUN_020c2438(FUN_020c1fc8(), resource, resource, 2);
    FUN_0206557c(0, FUN_0205e0c4(), 2048);
    config = DAT_02122288;
    FUN_020c35d4(self + 12, &config);
    FUN_020c38f0(self + 12, 0);
    FUN_overlay_10__02120bd0(self);
    if (FUN_020c10ec() >= 64)
        *(unsigned *)(self + 72) = 3;
    FUN_overlay_10__02120c20(self);
    return self;
}
