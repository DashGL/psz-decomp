// FUN_0200fe0c @ 0x0200fe0c (0x9c, arm) - ported from FUN_0202a49c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
extern void FUN_0200eb78(void);
extern void *FUN_0200ed7c(int);
extern void FUN_0200d680(int, u8);
extern void FUN_0200d6a0(int, u16);
extern int FUN_0200d6b8(int, void *, u32);

struct Entry {
    u8 count;
    u8 pad;
    u16 f2;
    u32 f4;
};

int FUN_0200fe0c(void *arg) {
    FUN_0200eb78();
    for (int i = 0; i < 0x20; i++) {
        struct Entry *e = (struct Entry *)FUN_0200ed7c(i);
        if (e != 0) {
            FUN_0200d680(i, e->count);
            FUN_0200d6a0(i, e->f2);
            if (e->f4 != 0 && arg != 0) {
                for (int j = 0; j < e->count; j++) {
                    if (!FUN_0200d6b8(i, arg, e->f4)) {
                        return 0;
                    }
                }
            }
        }
    }
    return 1;
}
