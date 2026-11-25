extern void FUN_020c781c(void);
extern int FUN_020d51c0(int, int *, unsigned short *);
extern void *FUN_020c7bcc(int);
extern void FUN_02001540(void *, int, int);
extern void *FUN_020c70b8(int, int, int, void (*)(void), void (*)(void), int);
extern void FUN_020c7bec(void *);
extern void *FUN_020c6da8(int, int, void (*)(void));
extern void FUN_020c718c(void *);
extern int FUN_020c7468(int, int, int);
extern void FUN_020c6de0(void *);
extern int FUN_020c7498(int, void *, int);
extern void FUN_020c7478(int);
extern void FUN_020c7574(int, void *, int *);

extern void FUN_020d4b84(void);
extern void FUN_020d4b98(void);
extern void FUN_020d4bb4(void);

struct SockAddr_d4be8 {
    unsigned char len;
    unsigned char family;
    unsigned short port;
    int addr;
};

struct S_d4be8 {
    int f0;
    int f4;
    unsigned short f8;
    unsigned short fa;
    void *fc;
    void *f10;
    char pad[0x24 - 0x14];
    int f24;
    char pad2[0x38 - 0x28];
    int f38;
    int f3c;
    int f40;
    int f44;
    int f48;
};

int FUN_020d4be8(struct S_d4be8 **p0, int p1, int p2, int p3, int p4, int p5) {
    struct SockAddr_d4be8 sin;
    int sp14;
    int sp10;
    unsigned short port;
    struct S_d4be8 *s;

    FUN_020c781c();
    if (p3 == 0) {
        p3 = 0x10000;
    }
    if (p2 == 0) {
        p2 = 0x10000;
    }
    if (!FUN_020d51c0(p1, &sp14, &port)) {
        return 4;
    }
    s = (struct S_d4be8 *)FUN_020c7bcc(0x4c);
    if (s == 0) {
        return 1;
    }
    FUN_02001540(s, 0, 0x4c);
    s->f0 = -1;
    s->f3c = p3;
    s->f38 = p2;
    s->f24 = p4;
    s->fc = FUN_020c70b8(4, 0x20, 2, FUN_020d4b84, FUN_020d4b98, 0);
    if (s->fc == 0) {
        FUN_020c7bec(s);
        return 1;
    }
    s->f10 = FUN_020c6da8(4, 4, FUN_020d4bb4);
    if (s->f10 == 0) {
        FUN_020c718c(s->fc);
        FUN_020c7bec(s);
        return 1;
    }
    s->f0 = FUN_020c7468(2, 2, 0);
    s->f40 = p5;
    if (p5 == 3) {
        s->f44 = 0;
    } else {
        s->f44 = p5;
    }
    if (s->f0 == -1) {
        FUN_020c718c(s->fc);
        FUN_020c6de0(s->f10);
        FUN_020c7bec(s);
        return 3;
    }
    { int *_p = (int *)&sin; _p[0] = 0; _p[1] = 0; }
    sin.family = 2;
    sin.addr = sp14;
    sin.port = (unsigned short)(((port >> 8) & 0xff) | ((port << 8) & 0xff00));
    if (p5 != 3) {
        if (FUN_020c7498(s->f0, &sin, 8) == -1) {
            FUN_020c7478(s->f0);
            FUN_020c718c(s->fc);
            FUN_020c6de0(s->f10);
            FUN_020c7bec(s);
            return 3;
        }
    }
    sp10 = 8;
    FUN_020c7574(s->f0, &sin, &sp10);
    s->f4 = sin.addr;
    s->f8 = (unsigned short)(((sin.port >> 8) & 0xff) | ((sin.port << 8) & 0xff00));
    *p0 = s;
    return 0;
}
