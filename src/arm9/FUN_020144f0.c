// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
enum { E0 = 0, E1 = 1 };
typedef struct {
    u32 pad[31];
    u32 f7c;
} Sub144F0;
typedef struct {
    u32 f0;
    u32 f4;
    Sub144F0 *f8;
    int pos;
} G144F0;
typedef struct {
    u32 m[4];
    u32 x;
    u32 y;
} Mtx24;
typedef struct {
    u16 a, b, c, d;
} H8;

extern G144F0 DAT_02104754;
extern u32 DAT_02104764[32];
extern H8 DAT_021047e4[32];
extern Mtx24 DAT_021048e4[32];
extern Mtx24 DAT_02104be4[32];

static inline int can_push(int next) {
    return (next < 32) ? E1 : E0;
}

static inline void push_mtx(void) {
    int next = DAT_02104754.pos + 1;
    if (can_push(next)) {
        if (DAT_02104754.f4) {
            int old = *(volatile int *)&DAT_02104754.pos;
            DAT_021048e4[next].x = DAT_021048e4[old].x;
            DAT_021048e4[next].y = DAT_021048e4[old].y;
            DAT_02104764[next] = DAT_02104764[old];
        } else {
            int old = *(volatile int *)&DAT_02104754.pos;
            DAT_021048e4[next] = DAT_021048e4[old];
            DAT_02104be4[next] = DAT_02104be4[old];
            DAT_02104764[next] = DAT_02104764[old];
        }
        DAT_02104754.pos = next;
    }
}

void FUN_020144f0(void) {
    if (!(DAT_02104754.f8->f7c & 1)) {
        u16 old16 = (u16)DAT_02104754.pos;
        push_mtx();
        {
            u16 new16 = (u16)DAT_02104754.pos;
            DAT_021047e4[new16] = DAT_021047e4[old16];
            if (DAT_021047e4[old16].c == 1) {
                DAT_021047e4[new16].c = 2;
            } else {
                DAT_021047e4[new16].c = DAT_021047e4[old16].c;
            }
        }
    } else {
        push_mtx();
    }
}
