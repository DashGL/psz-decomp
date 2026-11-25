// flags: -O4,p
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef struct {
    int f00;
    u8 pad04[9];
    u8 count_d;       // 0x0d
    u8 pad0e[8];
    u8 f16;           // 0x16
    u8 pad17[0xf4 - 0x17];
    int peers[0x2c];  // 0xf4..0x1a3
    u8 pad1a4;
    u8 curIdx;        // 0x1a5
    u8 pad1a6[0x1bc - 0x1a6];
    int f1bc;         // 0x1bc
    u8 pad1c0[8];
    int f1c8;         // 0x1c8
    u64 f1cc;         // 0x1cc
    u8 pad1d4[0x2fc - 0x1d4];
    char *base2fc;    // 0x2fc
    u8 pad300[4];
    u8 order[0x40];   // 0x304
    int total;        // 0x344
} Ctx;

typedef struct {
    int f00;
    int status;
    char text[0x20c];
} GPStatus;

extern Ctx *FUN_020e961c(void);
extern int FUN_020e1ea8(void);
extern int FUN_020dd83c(int, void *);
extern int FUN_020dd6d8(void *);
extern u64 FUN_02067e0c(void);
extern int FUN_020c8e5c(int, int, void *);
extern int FUN_020c8d2c(int, int, void *);
extern int FUN_020e0abc(void *, void *, void *, int);
extern int FUN_02005738(void *, void *, int);
extern int FUN_020e6b94(int, int);
extern char DAT_02101758[], DAT_02101750[], DAT_02101754[];

int FUN_020e6cf4(int flag, int includeCurrent, int preferred) {
    GPStatus status;
    char buf_x[12];
    char buf_y[4];
    int pid;
    char buf_z[4];
    int start, advance, looped;
    int peer, i;

    if (includeCurrent) {
        start = FUN_020e961c()->curIdx;
    } else {
        if (FUN_020e961c()->curIdx < FUN_020e961c()->total - 1) {
            start = FUN_020e961c()->curIdx + 1;
        } else {
            start = 0;
        }
    }

    looped = 0;
    advance = !includeCurrent;
    for (;;) {
        if (advance || looped) {
            FUN_020e961c()->curIdx++;
            if (FUN_020e961c()->curIdx >= FUN_020e961c()->total) {
                FUN_020e961c()->curIdx = 0;
            }
        }
        if (looped && start == FUN_020e961c()->curIdx) {
            FUN_020e961c()->f1c8 = 3000;
            FUN_020e961c()->f1cc = FUN_02067e0c();
            FUN_020e961c()->f1bc = 0;
            return 0;
        }
        looped = 1;
        peer = FUN_020dd83c(FUN_020e1ea8(), FUN_020e961c()->base2fc + 12 * FUN_020e961c()->order[FUN_020e961c()->curIdx]);
        if (peer == 0 || peer == -1) continue;
        if (!FUN_020dd6d8(FUN_020e961c()->base2fc + 12 * FUN_020e961c()->order[FUN_020e961c()->curIdx])) continue;
        for (i = 1; i <= FUN_020e961c()->count_d; i++) {
            if (peer == FUN_020e961c()->peers[i]) break;
        }
        if (i <= FUN_020e961c()->count_d) continue;
        if (FUN_020c8e5c(FUN_020e961c()->f00, peer, &pid) | FUN_020c8d2c(FUN_020e961c()->f00, pid, &status)) continue;
        if (status.status != 4) continue;
        {
            int x = FUN_020e0abc(DAT_02101758, buf_x, status.text, 47);
            int y = FUN_020e0abc(DAT_02101750, buf_y, status.text, 47);
            int z = FUN_020e0abc(DAT_02101754, buf_z, status.text, 47);
            if (x <= 0 || y <= 0 || z <= 0) continue;
        }
        if (FUN_02005738(buf_x, 0, 10) != 3) continue;
        if (FUN_02005738(buf_y, 0, 10) != FUN_020e961c()->f16) continue;
        if (peer == preferred) flag = 1;
        return FUN_020e6b94(peer, flag);
    }
}
