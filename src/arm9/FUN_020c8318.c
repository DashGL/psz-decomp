// flags: -O4,p
extern void *FUN_020c7e54(void);
extern void FUN_020d514c(int, unsigned short, void *);
extern int FUN_020d34b0(void *, void *, int, int, void *);
extern void *FUN_020c6da8(int, int, void *);
extern void FUN_020d3750(int, void *);
extern void FUN_020d34f4(int, void *);
extern int FUN_020d3738(int);
extern int FUN_020d373c(int);
extern void FUN_020c7eb0(void);
extern void FUN_020c7e5c(void);
extern void FUN_020c8220(void);
extern void FUN_020c8250(void);

int FUN_020c8318(unsigned short a0, int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10) {
    unsigned char sp08[0x18];
    void *r4 = FUN_020c7e54();
    if (a1 == 0) {
        a1 = 0x5dc;
    }
    if (a2 == 0) {
        a2 = 0x5b4;
    }
    *(int *)((char *)r4 + 0x24) = a3;
    *(int *)((char *)r4 + 0x28) = a8;
    *(int *)((char *)r4 + 0x10) = a4;
    *(int *)((char *)r4 + 0x14) = a5;
    *(int *)((char *)r4 + 0x18) = a6;
    *(int *)((char *)r4 + 0x1c) = a7;
    *(int *)((char *)r4 + 0x20) = a9;
    FUN_020d514c(0, a0, sp08);
    if (FUN_020d34b0(r4, sp08, a2, a1, (void *)FUN_020c7eb0) != 0) {
        return 3;
    }
    *(void **)((char *)r4 + 4) = FUN_020c6da8(0xc, 1, 0);
    if (*(void **)((char *)r4 + 4) == 0) {
        return 1;
    }
    *(void **)((char *)r4 + 8) = FUN_020c6da8(0x3c, 1, (void *)FUN_020c7e5c);
    if (*(void **)((char *)r4 + 8) == 0) {
        return 1;
    }
    FUN_020d3750(*(int *)r4, (void *)FUN_020c8220);
    FUN_020d34f4(*(int *)r4, (void *)FUN_020c8250);
    *(int *)((char *)r4 + 0x34) = FUN_020d3738(*(int *)r4);
    *(short *)((char *)r4 + 0x38) = (short)FUN_020d373c(*(int *)r4);
    *(int *)((char *)r4 + 0x30) = 0;
    *(int *)((char *)r4 + 0xc) = 1;
    if (a10 != 0) {
        *(int *)((char *)r4 + 0x2c) = a10;
    } else {
        *(int *)((char *)r4 + 0x2c) = 0;
    }
    return 0;
}
