// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd4, exact bytes and relocation targets.
// flags: -O4,p

struct ObjC70B8 {
    void **arr;
    int count;
    int a5;
    int a3;
    int a4;
};

extern const char DAT_020fcc1c[];
extern const char DAT_020fcc24[];
extern const char DAT_020fcbb4[];
extern const char DAT_020fcc30[];
extern const char DAT_020fcc38[];
extern const char DAT_020fcc44[];
extern const char DAT_020fcc50[];
extern const char DAT_020fcc58[];
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void *FUN_020c7bcc(unsigned int);
extern void *FUN_020c6da8(void *, void *, int);

struct ObjC70B8 *FUN_020c70b8(void *a0, int count, void *a2, int a3, int a4, int a5) {
    struct ObjC70B8 *obj;
    int i;

    if (a3 == 0) {
        FUN_02000edc(DAT_020fcc1c, DAT_020fcc24, DAT_020fcbb4, 0x38);
    }
    if (a4 == 0) {
        FUN_02000edc(DAT_020fcc30, DAT_020fcc24, DAT_020fcbb4, 0x39);
    }
    if (a0 == 0) {
        FUN_02000edc(DAT_020fcc38, DAT_020fcc24, DAT_020fcbb4, 0x3a);
    }
    if (count == 0) {
        FUN_02000edc(DAT_020fcc44, DAT_020fcc24, DAT_020fcbb4, 0x3b);
    }
    obj = (struct ObjC70B8 *)FUN_020c7bcc(0x14);
    if (obj == 0) {
        FUN_02000edc(DAT_020fcc50, DAT_020fcc24, DAT_020fcbb4, 0x3e);
    }
    obj->arr = (void **)FUN_020c7bcc(count << 2);
    if (obj->arr == 0) {
        FUN_02000edc(DAT_020fcc58, DAT_020fcc24, DAT_020fcbb4, 0x41);
    }
    for (i = 0; i < count; i++) {
        obj->arr[i] = FUN_020c6da8(a0, a2, a5);
    }
    obj->count = count;
    obj->a5 = a5;
    obj->a4 = a4;
    obj->a3 = a3;
    return obj;
}
