// flags: -O4,s
typedef struct {
    unsigned char b0, b1, b2, b3;
    unsigned char id[4];
    short h[4];
    unsigned char f10, f11, f12, f13;
} Record;

typedef struct {
    signed char b[4];
} Id4;

typedef struct {
    unsigned char pad[0x14];
    signed char id[4];
} Global;

extern Global *DAT_02108c64;
extern void FUN_0207f3fc(void *);
extern void FUN_020bce3c(void *);

void FUN_02030808(short **s, int enabled, int flag) {
    Record r;
    signed char *m;
    int i;
    r.b0 = 1;
    r.b1 = 0;
    r.b2 = 0;
    r.b3 = 0;
    FUN_0207f3fc(r.id);
    r.f10 = 1;
    r.f11 = 0;
    r.f12 = 0;
    r.f13 = 0;
    r.b2 = 7;
    r.b3 = 2;
    r.b0 = 5;
    for (i = 0; i < 4; i++) {
        r.h[i] = -1;
    }
    m = DAT_02108c64->id;
    r.id[0] = m[0];
    r.id[1] = m[1];
    r.id[2] = m[2];
    r.id[3] = m[3];
    for (i = 0; i < 4; i++) {
        r.h[i] = (*s)[i];
    }
    r.f10 = enabled ? 1 : 0;
    if (flag) {
        r.f11 |= 1;
    }
    FUN_020bce3c(&r);
}
