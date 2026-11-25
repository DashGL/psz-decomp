// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Src68510 {
    unsigned char pad0[2];
    unsigned char f2 : 4;
    unsigned char f2_hi : 4;
    unsigned char f3;
    unsigned char f4;
    unsigned char pad5;
    unsigned char f6[0x14];
    unsigned char f1a;
    unsigned char pad1b;
    unsigned char f1c[0x34];
    unsigned char f50;
    unsigned char pad51[0x13];
    unsigned short f64 : 3;
    unsigned short f64_hi : 13;
};
struct Dst68510 {
    unsigned char f0;
    unsigned char f1;
    unsigned char f2;
    unsigned char f3;
    unsigned char f4[0x14];
    unsigned short f18;
    unsigned short f1a;
    unsigned char f1c[0x34];
    unsigned short f50;
    unsigned short f52;
};
extern void FUN_020654dc(const void *, void *, int);

static inline struct Src68510 *get_src68510(void) {
    return (struct Src68510 *)0x027ffc80;
}

void FUN_02068510(struct Dst68510 *dst) {
    dst->f0 = get_src68510()->f64;
    dst->f1 = get_src68510()->f2;
    dst->f2 = get_src68510()->f3;
    dst->f3 = get_src68510()->f4;
    dst->f1a = get_src68510()->f1a;
    dst->f52 = get_src68510()->f50;
    FUN_020654dc(get_src68510()->f6, dst->f4, 0x14);
    FUN_020654dc(get_src68510()->f1c, dst->f1c, 0x34);
    dst->f18 = 0;
    dst->f50 = 0;
}
