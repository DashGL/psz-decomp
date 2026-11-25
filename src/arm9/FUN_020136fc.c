// FUN_020136fc @ 0x020136fc (0xf8, arm) - ported from FUN_020189c4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned int u32;
extern void FUN_0206740c(void *, u32);
extern void FUN_0205f574(void);
extern void FUN_0205f5bc(void *, u32, u32);
extern void FUN_0205f628(void);
extern void FUN_0205ec10(void *, u32, u32);
extern void FUN_0205f728(void);
extern void FUN_0205f740(void *, u32, u32);
extern void FUN_0205f7a4(void);
extern void FUN_0205ec68(void *, u32, u32);
extern void FUN_0205f9cc(void);
extern void FUN_0205fa00(void *, u32, u32);
extern void FUN_0205fa6c(void);
extern void FUN_0201349c(u32 *, int, u32);

struct Info189c4 {
    u32 f0;
    u32 f4;
    u32 size;
    void *data;
};

void FUN_020136fc(struct Info189c4 *info, u32 a1, int type, u32 *out) {
    void *data = info->data;
    u32 size = info->size;
    FUN_0206740c(data, size);
    switch (type) {
    case 1:
        if (info->f4 != 0) {
            FUN_0205f574();
            FUN_0205f5bc(data, a1, size);
            FUN_0205f628();
        } else {
            FUN_0205ec10(data, a1, size);
        }
        break;
    case 2:
        if (info->f4 != 0) {
            FUN_0205f728();
            FUN_0205f740(data, a1, size);
            FUN_0205f7a4();
        } else {
            FUN_0205ec68(data, a1, size);
        }
        break;
    case 0:
        FUN_0205f9cc();
        FUN_0205fa00(data, a1, size);
        FUN_0205fa6c();
        break;
    }
    out[0] = info->f0;
    out[1] = info->f4;
    FUN_0201349c(out, type, a1);
}
