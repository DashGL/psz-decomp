// flags: -O4,s
typedef struct {
    signed char v[8];
} Sub8;

typedef struct {
    unsigned short v[5];
} Sub10;

typedef struct {
    signed char f00;
    signed char f01;
    signed char f02;
    signed char f03;
    signed char f04;
    signed char f05;
    signed char f06;
    signed char f07;
    signed char f08;
    signed char f09;
    signed char f0a;
    signed char pad0b;
    unsigned short f0c;
    Sub8 f0e;
    Sub10 f16;
} Settings;

extern const Settings DAT_020ec2d8;
extern char *FUN_02031c74(void *);

Settings FUN_02031ce8(char *s) {
    Settings value = DAT_020ec2d8;
    Settings *p = *(Settings **)(s + 0x1c);
    char *q;
    int i;
    if (p) {
        value.f00 = p->f00;
        value.f01 = p->f01;
        value.f02 = p->f02;
        value.f03 = p->f03;
        value.f04 = p->f04;
        value.f05 = p->f05;
        value.f06 = p->f06;
        value.f07 = p->f07;
        value.f08 = p->f08;
        value.f09 = p->f09;
        value.f0a = p->f0a;
        value.f0c = p->f0c;
        value.f0e = p->f0e;
        value.f16 = p->f16;
    }
    q = FUN_02031c74(s);
    if (q) {
        signed char *r = (signed char *)(q + 0x18);
        Settings *dst = &value;
        if (r[0] >= 0) dst->f00 = r[0];
        if (r[1] >= 0) dst->f01 = r[1];
        if (r[2] >= 0) dst->f02 = r[2];
        if (r[3] >= 0) dst->f03 = r[3];
        if (r[4] >= 0) dst->f04 = r[4];
        if (r[5] >= 0) dst->f05 = r[5];
        if (r[6] >= 0) dst->f06 = r[6];
        if (r[7] >= 0) dst->f07 = r[7];
        if (r[8] >= 0) dst->f08 = r[8];
        if (r[9] != -2) dst->f09 = r[9];
        if (r[10] >= 0) dst->f0a = r[10];
        for (i = 0; i < 8; i++) {
            if (r[11 + i] != -2) {
                dst->f0e.v[i] = r[11 + i];
            }
        }
    }
    return value;
}
