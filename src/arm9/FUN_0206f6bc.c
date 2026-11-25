// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
extern int FUN_0203ae60(void *), FUN_0203bf3c(void *), FUN_020719d8(void *, void *);
extern void *FUN_0206f750(void *, const void *), *FUN_020718e0(void);
extern void FUN_0206f558(void *), FUN_02034680(void *, const void *);
void FUN_0206f6bc(unsigned char *self, int a, int b) {
    unsigned int copied[25];
    Vec v;
    unsigned int request[8];
    int cap1, cap2, kind, amount;
    if (FUN_0203ae60(self)) return;
    FUN_0206f750(copied, self + 0x24);
    cap1 = *(unsigned short *)((unsigned char *)copied + 0x38);
    cap2 = *(unsigned short *)((unsigned char *)copied + 0x3a);
    *(unsigned short *)(self + 0x14e) += a;
    if (*(unsigned short *)(self + 0x14e) > cap1) *(unsigned short *)(self + 0x14e) = cap1;
    *(unsigned short *)(self + 0x150) += b;
    if (*(unsigned short *)(self + 0x150) > cap2) *(unsigned short *)(self + 0x150) = cap2;
    if (FUN_0203bf3c(self)) {
        v = *(Vec *)(self + 0x9c);
        v.y = 4096;
        if (a >= b) { kind = 1; amount = a; }
        else { kind = 9; amount = b; }
        FUN_0206f558(request);
        request[5] = 10;
        request[0] = kind;
        request[4] = amount;
        FUN_02034680(request + 1, &v);
        FUN_020719d8(FUN_020718e0(), request);
    }
}
