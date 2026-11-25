// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned int u32;

struct Sub4_02019f74 {
    u32 f00;
    u32 f04;
    u32 f08;
    u32 f0c;
    u8 pad10[5];
    u8 f15;
    u8 f16;
    u8 f17;
    u32 f18;
    u32 f1c;
    u32 f20;
};

struct Src_02019f74 {
    u32 f00;
    struct Sub4_02019f74 *f04;
    u8 pad08[0x18];
    u32 f20;
    u8 f24;
    u8 f25;
    u8 pad26[2];
    void (*f28)(void *);
    u32 f2c;
    void *f30;
};

struct Dst_02019f74 {
    void *f00;
    struct Src_02019f74 *f04;
    u32 f08;
    u32 f0c[0x20];
    u8 f8c[0x34];
    u32 fc0;
    u32 fc4;
    void *fc8;
    void *fcc;
    void *fd0;
    u32 fd4;
    u32 fd8;
    u32 fdc;
    u32 fe0;
    u32 fe4;
};

extern u32 DAT_020f6778[];
extern u32 DAT_020f676c[];
extern u32 DAT_020f6784[];

extern void FUN_0206557c(int, void *, int);
extern void FUN_02019f2c(void *);

static inline void *GetSbc(struct Sub4_02019f74 *m) {
    return (u8 *)m + m->f04;
}
static inline void *GetNodeData(struct Sub4_02019f74 *m) {
    if (m != 0) return (u8 *)m + 0x40;
    return 0;
}
static inline void *GetMat(struct Sub4_02019f74 *m) {
    if (m != 0 && m->f08 != 0) return (u8 *)m + m->f08;
    return 0;
}
static inline void *GetShp(struct Sub4_02019f74 *m) {
    if (m != 0 && m->f0c != 0) return (u8 *)m + m->f0c;
    return 0;
}

void FUN_02019f74(struct Dst_02019f74 *r5, struct Src_02019f74 *r4) {
    FUN_0206557c(0, r5, 0x17c);
    r5->fc0 = 1;
    r5->f08 = 1;
    if (r4->f30 != 0) {
        r5->f00 = r4->f30;
    } else {
        r5->f00 = GetSbc(r4->f04);
    }
    r5->f04 = r4;
    r5->fc8 = GetNodeData(r4->f04);
    r5->fcc = GetMat(r4->f04);
    r5->fd0 = GetShp(r4->f04);
    r5->fdc = DAT_020f6778[r4->f04->f15];
    r5->fe0 = DAT_020f676c[r4->f04->f15];
    r5->fe4 = DAT_020f6784[r4->f04->f16];
    r5->fd4 = r4->f04->f1c;
    r5->fd8 = r4->f04->f20;
    if (r4->f20 != 0 && r4->f24 < 0x20) {
        r5->f0c[r4->f24] = r4->f20;
        r5->f8c[r4->f24] = r4->f25;
    }
    if ((r4->f00 & 1) != 0) {
        r5->f08 |= 0x80;
    }
    if ((r4->f00 & 2) != 0) {
        r5->f08 |= 0x100;
    }
    if ((r4->f00 & 4) != 0) {
        r5->f08 |= 0x200;
    }
    if ((r4->f00 & 8) != 0) {
        r5->f08 |= 0x400;
    }
    if (r4->f28 != 0) {
        r4->f28(r5);
    }
    FUN_02019f2c(r5);
    r4->f00 &= ~1u;
}
