// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x78, exact bytes and relocation targets.
//cpp
// flags: -O4,p
struct C_b7a8c_020b7a8c {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29();
};
extern "C" {
extern char *UNK_02108c84;
extern void *UNK_020f59b8;
extern void *FUN_020ba374(void *, int *, int);
extern unsigned short FUN_02037adc(void *, void *, int);
extern void *FUN_02033d60(void *, unsigned short, int, int);
void FUN_020b7a8c(char *s) {
    ((C_b7a8c_020b7a8c *)s)->v29();
    char *manager = UNK_02108c84;
    if (manager) {
        int sp0 = 0;
        *(void **)(s + 0x88) = FUN_020ba374(UNK_020f59b8, &sp0, 0x10);
        if (*(void **)(s + 0x88)) {
            *(unsigned short *)(s + 0x8c) = FUN_02037adc(manager, *(void **)(s + 0x88), 0);
            *(void **)(s + 0x90) = FUN_02033d60(manager, *(unsigned short *)(s + 0x8c), 0, 0xffff);
        }
        if (*(int *)(s + 0x94) == 9) {
            *(int *)(s + 0x94) = *(int *)(manager + 0x64);
        }
        *(int *)(manager + 0x64) = 8;
    }
}
}
