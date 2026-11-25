// flags: -O4,s
typedef struct { int words[3]; } Triple;
extern char DAT_020fb090[];
extern char DAT_020fb180[];
extern char DAT_020fb0ac[];
extern char DAT_020fb1b0[];
extern const unsigned char DAT_020f44a4[];
extern const Triple DAT_020fc958;
extern void FUN_02039230(void *, int, int, void *, int);
extern void FUN_0208dea8(void *);
extern void FUN_02094ab0(void *);

typedef struct {
    void *vt0;
    unsigned char pad0[0x1c];
    void *vt20;
    unsigned char pad1[0xcc];
    void *vtf0;
    unsigned char pad2[0x158];
    void *vt24c;
    int f250;
    unsigned char sub[0x5c];
    int f2b0;
    int f2b4;
    int f2b8;
    unsigned char f2bc;
    unsigned char f2bd;
    unsigned char pad3[0x52];
    Triple t310;
} S_94ab8;

void *FUN_02094ab8(S_94ab8 *s, int a, int b, void *d, int e) {
    FUN_02039230(s, a, b, d, e);
    FUN_0208dea8(&s->vt24c);
    s->vt0 = DAT_020fb090;
    s->vt20 = DAT_020fb0ac;
    s->vtf0 = DAT_020fb180;
    s->vt24c = DAT_020fb1b0;
    s->f250 = 0;
    FUN_02094ab0(s->sub);
    s->f2b0 = 0;
    s->f2b4 = 0;
    s->f2bc = DAT_020f44a4[2];
    s->f2bd = DAT_020f44a4[3];
    s->t310 = DAT_020fc958;
    return s;
}
