// flags: -O4,p
extern void *FUN_020c7e54(void);
extern int FUN_020c6f30(int, void *, void *, int, int);
extern void FUN_020d514c(int, int, void *);
extern void *FUN_020c6e10(int, int);
extern int FUN_020d3740(int);
extern void *FUN_020c7bcc(int);
#pragma thumb off
extern void FUN_020014d4(void *, int, int);
#pragma thumb on
extern int FUN_020d3600(int, void *, int, int);
extern void FUN_020c7bec(void *);
extern void FUN_020c7e84(void);

struct B16 {
    unsigned char b[0x10];
};

struct Key12 {
    int a;
    unsigned short b;
    int c;
};

int FUN_020c85a0(int a0, unsigned short a1, signed char *a2, int a3, int a4, int a5) {
    struct Key12 sp24;
    int sp0c[6];
    void *r6 = FUN_020c7e54();
    int r4;
    void *r7;
    int res;
    if (*(int *)((char *)r6 + 0xc) == 0) {
        return 3;
    }
    if (*a2 != 0) {
        r4 = a4 + 0x10;
    } else {
        r4 = a4;
    }
    sp24.a = a0;
    sp24.b = a1;
    res = FUN_020c6f30(*(int *)((char *)r6 + 4), &sp24, (void *)FUN_020c7e84, 0, 0);
    if (res == -1) {
        FUN_020d514c(a0, a1, sp0c);
        return 4;
    }
    r7 = FUN_020c6e10(*(int *)((char *)r6 + 4), res);
    if (r4 > FUN_020d3740(*(int *)((char *)r7 + 8)) && a5 != 0) {
        return 0xc;
    }
    r6 = FUN_020c7bcc(r4);
    *(struct B16 *)r6 = *(struct B16 *)a2;
    FUN_020014d4((char *)r6 + 0x10, a3, a4);
    r4 = FUN_020d3600(*(int *)((char *)r7 + 8), r6, r4, a5);
    FUN_020c7bec(r6);
    if (r4 != 0) {
        return 8;
    }
    return 0;
}
