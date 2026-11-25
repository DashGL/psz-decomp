// flags: -O4,p
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    u8 pad0[0x0d];
    u8 f0d;
    u8 pad0e[2];
    int f10;
    u8 pad14;
    u8 f15;
    u8 f16;
    u8 f17;
    u8 pad18[8];
    int f20;
    int arr_24[32];
    u16 arr_a4[32];
    int fe4;
    int fe8;
    u64 fec;
    int arr_f4[32];
    u8 pad174[0x2c];
    int f1a0;
    u8 f1a4;
    u8 f1a5;
    u8 f1a6;
    u8 pad1a7[2];
    u8 f1a9;
    u8 pad1aa[0x2a];
    int f1d4;
    u8 pad1d8[4];
    int f1dc;
    u8 pad1e0[0x20];
    int f200;
    u8 pad204[8];
    int f20c;
    u8 pad210[0xc0];
    u8 arr_2d0[32];
    u8 pad2f0[0xdd];
    u8 f3cd;
    u8 pad3ce[0x96];
    void (*f464)(int, int, int, int, int, int);
    int f468;
} Ctrl;

extern Ctrl *FUN_020e961c(void);
extern void FUN_020e9628(int);
extern void FUN_020d6674(int);
extern void FUN_020e7d48(int, int);
extern void FUN_020e7b3c(void);
extern void FUN_020e8574(void);
extern void FUN_020e54f8(void);
extern void FUN_020d8960(int);
extern void FUN_020e34e0(void);
extern void FUN_020e5050(void);
extern void FUN_020d8af8(int);
extern int FUN_020e6cf4(int, int, int);
extern int FUN_020e852c(int);
extern int FUN_020e6b74(unsigned int);
extern int FUN_020e88a4(void);
extern int FUN_020e2a58(int);
extern void FUN_020e2ab8(int, void *, int);
extern int FUN_020e59d8(int, int, int, u16, void *, int);
extern u64 FUN_02067e0c(void);
extern char DAT_02101748[];
extern u8 DAT_0211de64[];

void FUN_020e72d0(u32 kind) {
    int payload[5];
    int count = 3;
    int notify = 0;
    int i;

    switch (kind) {
    case 0:
        if (FUN_020e961c()->f1a4 < FUN_020e961c()->f0d - 1) {
            FUN_020e9628(13);
            payload[0] = FUN_020e961c()->arr_f4[FUN_020e961c()->f1a4 + 1];
            payload[1] = FUN_020e961c()->f1a4 + 1;
            payload[2] = FUN_020e961c()->arr_2d0[FUN_020e961c()->f1a4 + 1];
            payload[3] = FUN_020e961c()->arr_24[FUN_020e961c()->f1a4 + 1];
            payload[4] = FUN_020e961c()->arr_a4[FUN_020e961c()->f1a4 + 1];
            count = 5;
        } else {
            FUN_020e961c()->f17 = 0;
            FUN_020e961c()->f20 = 0;
            FUN_020d6674(FUN_020e961c()->f10);
            if (FUN_020e961c()->f15 == 0) {
                FUN_020e9628(3);
            } else if (FUN_020e961c()->f15 == 1) {
                FUN_020e9628(4);
            } else {
                FUN_020e9628(10);
            }
            FUN_020e961c()->f1a4 = 0;
            if (FUN_020e961c()->f15 == 2 || FUN_020e961c()->f0d == FUN_020e961c()->f16) {
                if (FUN_020e961c()->f15 == 2) {
                    FUN_020e961c()->f20c = FUN_020e961c()->arr_f4[FUN_020e961c()->f0d];
                } else {
                    FUN_020e961c()->f20c = 0;
                    FUN_020e961c()->arr_f4[0] = FUN_020e961c()->f200;
                }
                FUN_020e9628(16);
                FUN_020e961c()->f1d4 = 0;
                for (i = 1; i <= FUN_020e961c()->f0d; i++) {
                    FUN_020e7d48(FUN_020e961c()->arr_2d0[i], 2);
                }
            } else {
                payload[0] = 0;
                payload[1] = FUN_020e961c()->f0d;
                payload[2] = FUN_020e961c()->arr_2d0[FUN_020e961c()->f0d];
                if (FUN_020e961c()->f15 == 0) {
                    FUN_020e961c()->fe8 = 2;
                    FUN_020e961c()->fec = FUN_02067e0c();
                } else if (FUN_020e961c()->f15 == 1) {
                    FUN_020e6cf4(1, 0, 0);
                    if (FUN_020e961c()->f1a6 == 0 && FUN_020e961c()->f0d >= 2) {
                        Ctrl *a = FUN_020e961c();
                        int mask = FUN_020e852c(0);
                        Ctrl *b = FUN_020e961c();
                        Ctrl *c = FUN_020e961c();
                        if (a->f1dc != (mask & ~(1u << b->arr_2d0[c->f0d]))) {
                            FUN_020e7b3c();
                            break;
                        }
                    }
                }
            }
            if (FUN_020e961c()->f15 != 2) {
                notify = 1;
            }
        }
        if (FUN_020e961c()->f1a0 == 16) {
            break;
        }
        {
            Ctrl *a = FUN_020e961c();
            Ctrl *b = FUN_020e961c();
            Ctrl *c = FUN_020e961c();
            Ctrl *d = FUN_020e961c();
            Ctrl *e = FUN_020e961c();
            Ctrl *f = FUN_020e961c();
            if (FUN_020e6b74(FUN_020e59d8(8, a->arr_f4[b->f0d], c->arr_24[d->f0d], e->arr_a4[f->f0d], payload, count))) {
                return;
            }
        }
        FUN_020e961c()->f3cd = 0;
        break;

    case 1:
        FUN_020e9628(1);
        if (FUN_020e961c()->f15 == 3) {
            FUN_020e961c()->f20c = FUN_020e961c()->arr_f4[FUN_020e961c()->f0d];
        }
        notify = 1;
        break;

    case 2:
        FUN_020e9628(1);
        if (FUN_020e961c()->f15 == 0 || FUN_020e961c()->f15 == 1) {
            FUN_020e961c()->f17 = 1;
            FUN_020e961c()->f20 = FUN_020e961c()->f200;
        }
        FUN_020e8574();
        if (FUN_020e961c()->f0d <= 1) {
            break;
        }
        {
            Ctrl *a = FUN_020e961c();
            Ctrl *b = FUN_020e961c();
            Ctrl *c = FUN_020e961c();
            Ctrl *d = FUN_020e961c();
            Ctrl *e = FUN_020e961c();
            if (FUN_020e6b74(FUN_020e59d8(9, a->arr_f4[0], b->arr_24[0], c->arr_a4[0], &d->arr_f4[e->f0d - 1], 1))) {
                return;
            }
        }
        break;

    case 3:
        FUN_020e9628(1);
        FUN_020e8574();
        FUN_020e961c()->f20c = 0;
        notify = 1;
        break;

    case 4:
        if (FUN_020e961c()->f15 != 2) {
            FUN_020e2ab8(2, DAT_02101748, 0);
        }
        {
            int noPeer = (FUN_020e961c()->f20c == 0);
            Ctrl *a = FUN_020e961c();
            int id = FUN_020e2a58(FUN_020e961c()->f20c);
            Ctrl *b = FUN_020e961c();
            a->f464(0, 0, noPeer, 0, id, b->f468);
        }
        if (FUN_020e961c()->f15 == 0 || FUN_020e961c()->f15 == 1) {
            FUN_020e54f8();
        } else {
            if (FUN_020e961c()->fe4) {
                FUN_020d8960(FUN_020e961c()->fe4);
                FUN_020e961c()->fe4 = 0;
            }
            FUN_020e34e0();
            if (FUN_020e961c()->f15 == 2) {
                FUN_020e5050();
                if (FUN_020e88a4()) {
                    return;
                }
                if (DAT_0211de64[0x1c] == 1) {
                    DAT_0211de64[0x1d] = 1;
                }
                FUN_020e9628(10);
            } else {
                FUN_020e9628(1);
            }
            FUN_020e961c()->f20c = 0;
        }
        FUN_020e961c()->f1a9 = 0;
        break;
    }

    if (notify && FUN_020e961c()->f15 != 3) {
        FUN_020d8af8(FUN_020e961c()->fe4);
    }
}
