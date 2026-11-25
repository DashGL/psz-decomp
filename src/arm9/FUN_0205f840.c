// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x140, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct State5f840 {
    int f00;
    unsigned int f04;
    int f08[4];
    unsigned int f18;
    unsigned int f1c;
};

extern struct State5f840 DAT_021125d4;
extern int DAT_020f96e4;

extern void FUN_02064dd8(int, void *, unsigned int, unsigned int);
extern void FUN_0206552c(void *, unsigned int, unsigned int);
extern void FUN_02064f78(int, void *, unsigned int, unsigned int, int, int);

void FUN_0205f840(char *dst, unsigned int offset, unsigned int len) {
    struct State5f840 *s = &DAT_021125d4;
    unsigned int f18 = s->f18;
    unsigned int src_addr;

    if (f18 == 0) {
        src_addr = s->f04 + offset;
    } else if (offset + len < s->f1c) {
        src_addr = s->f04 + offset;
    } else if (offset >= s->f1c) {
        src_addr = f18 + offset - s->f1c;
    } else {
        unsigned int part1 = s->f1c - offset;
        unsigned int f04 = s->f04;
        if (DAT_020f96e4 != -1 && part1 > 0x30) {
            FUN_02064dd8(DAT_020f96e4, dst, f04 + offset, part1);
        } else {
            FUN_0206552c(dst, f04 + offset, part1);
        }
        if (DAT_020f96e4 != -1) {
            FUN_02064f78(DAT_020f96e4, dst + part1, f18, len - part1, 0, 0);
        } else {
            FUN_0206552c(dst + part1, f18, len - part1);
        }
        return;
    }
    if (DAT_020f96e4 != -1) {
        FUN_02064f78(DAT_020f96e4, dst, src_addr, len, 0, 0);
    } else {
        FUN_0206552c(dst, src_addr, len);
    }
}
