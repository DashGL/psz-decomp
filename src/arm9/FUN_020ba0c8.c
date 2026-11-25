// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xac, exact bytes and relocation targets.
// flags: -O4,s
extern int DAT_0211b280;
extern void FUN_02059cd4(void *);
extern int FUN_02059fb4(void *, int);
extern void FUN_0205a150(void *, void *, int);
extern int FUN_020c5138(void *);
extern void *FUN_020ba918(int);
extern void FUN_020ba5c0(void *, void *, int, int, int, int, int, int, int);
extern void FUN_0205a160(void *, int, int);
extern void FUN_020ba518(void *, void *, int, int, int, int, int);

int FUN_020ba0c8(int param_1, int param_2, int param_3, int param_4) {
    char file[0x48];
    int hdr[4];
    if (DAT_0211b280 != 0) {
        FUN_02059cd4(file);
        if (FUN_02059fb4(file, param_1) != 0) {
            int size = *(int *)(file + 0x28) - *(int *)(file + 0x24);
            if ((unsigned int)size > 0x10u) {
                FUN_0205a150(file, hdr, 0x10);
                if (FUN_020c5138(hdr) != 0) {
                    void *obj;
                    size = (volatile int)(size - 0x10);
                    obj = FUN_020ba918(0x8c);
                    if (obj != 0) {
                        FUN_020ba5c0(obj, file, param_2, size, hdr[2], hdr[3], param_3, param_4, DAT_0211b280);
                    }
                    return 1;
                }
                FUN_0205a160(file, 0, 0);
            }
            if (size > 0) {
                void *obj = FUN_020ba918(0x8c);
                if (obj != 0) {
                    FUN_020ba518(obj, file, param_2, size, param_3, param_4, DAT_0211b280);
                }
                return 1;
            }
        }
    }
    return 0;
}
