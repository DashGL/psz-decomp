// flags: -O4,s
typedef void (*Close)(void *);
typedef int (*Status)(void *);
typedef struct { unsigned short v[7]; } Short7;
extern unsigned long long UNK_0211c844[];
extern void FUN_020ba8cc(int *, int *, void *, void *), FUN_020c4434(void *), FUN_020656b8(void *, int, unsigned int);
extern void FUN_0207458c(void *), FUN_02073650(void), FUN_02074568(void *), FUN_02073664(void);
extern void FUN_020bdec8(void *), FUN_020be3e0(void *), FUN_02073678(void), FUN_020bdcc0(void *);
extern void FUN_02074770(void *), FUN_020bdc90(void *), FUN_020bd884(void *), FUN_020745ac(void *);
extern void FUN_020747a4(void *), FUN_020be3f0(void *), FUN_02073bbc(int, int);
extern int FUN_02074024(void *, int *, int *), FUN_020870e8(void *, void *);
extern int FUN_020c4500(void *, unsigned short *, int), FUN_020c5cec(int), FUN_020c5b1c(int);
extern int FUN_02090b68(void), FUN_020bd4ec(void *, unsigned short *, void *, int);
extern int FUN_020bd848(void *), FUN_020bd8ac(void *, int), FUN_02073c58(int);
extern int FUN_020bd900(void *, int, int, unsigned int, unsigned int);
extern int FUN_020e3514(void), FUN_020e14b4(void), FUN_02073218(int), FUN_02073fb0(void *);
extern void *FUN_02086e3c(void);

#define W(n) (*(int *)(self + (n)))
#define CHILD (*(char **)(self + 44))

void FUN_0207404c(char *self) {
    unsigned char profile[100];
    unsigned short name[16];
    unsigned char payload[20];
    int out0 = 0, out1 = 0;
    int a, b;
    int cmd, flag, slot, state;
    unsigned int maskA, maskB;
    unsigned long long random;
    short value;
    char *child;

    FUN_020ba8cc(&out0, &out1, 0, 0);
    (*(Status **)CHILD)[6](CHILD);
    child = CHILD;
    state = W(48);
    switch ((unsigned int)state) {
    case 0:
        if (FUN_02074024(self, 0, 0) == 5) {
            name[0] = 0;
            FUN_020c4434(profile);
            FUN_020c4434(profile + 16);
            FUN_020c4434(payload);
            FUN_020656b8(payload, 0, 20);
            if (FUN_020870e8(FUN_02086e3c(), profile)) {
                unsigned char *p = profile + 16;
                FUN_020c4500(p, name, 16);
                payload[0] = p[0];
                payload[1] = p[1];
                *(Short7 *)(payload + 2) = *(Short7 *)(p + 2);
            }
            flag = (FUN_020c5cec(0) != 0 || FUN_020c5b1c(0) != 0);
            random = UNK_0211c844[1] * UNK_0211c844[0] + UNK_0211c844[2];
            UNK_0211c844[0] = random;
            value = (short)(((random >> 32) * 48ULL >> 32) + 1);
            if (flag) value *= 556; else value *= 561;
            *(short *)(payload + 18) = value;
            FUN_020bd4ec(CHILD, name, payload, FUN_02090b68());
            W(48) = 1;
        }
        break;
    case 1:
        if ((signed char)child[28] == 4) {
            W(48) = 2;
        }
        break;
    case 2:
        FUN_0207458c(self);
        a = 0;
        b = 0;
        cmd = FUN_02074024(self, &a, &b);
        switch ((unsigned int)cmd) {
        case 3:
            (*(Close **)CHILD)[2](CHILD);
            W(48) = 7;
            break;
        case 1:
            if (FUN_020bd848(CHILD) == 1) {
                FUN_02073650();
                W(52) = 1;
                FUN_02074568(self);
                W(60) = 1;
                W(48) = 3;
            } else {
                W(48) = 8;
            }
            break;
        case 2:
            if (FUN_020bd8ac(CHILD, a) == 1) {
                FUN_02073664();
                W(52) = 0;
                FUN_02074568(self);
                W(60) = 1;
                W(48) = 3;
            } else {
                W(48) = 8;
            }
            break;
        case 6: {
            int va = a;
            int vb = b;
            va &= 7;
            vb &= 254;
            slot = FUN_02073c58(va);
            maskA = (slot >= 0) ? (1U << slot) : 0;
            slot = FUN_02073c58(vb);
            maskB = (slot >= 0) ? (1U << slot) : 0;
            if (FUN_020bd900(CHILD, va, vb, maskA, maskB) == 1) {
                W(52) = 0;
                FUN_02074568(self);
                W(60) = 2;
                W(48) = 4;
            } else {
                W(48) = 8;
            }
            break;
        }
        case 9:
            FUN_02074568(self);
            FUN_020bdec8(CHILD);
            FUN_020be3e0(CHILD);
            W(60) = 3;
            W(48) = 6;
            break;
        }
        break;
    case 3:
    case 4:
        if (state == 3 && !FUN_020e3514() && FUN_020e14b4() && !FUN_02073218(0)) {
            FUN_02073678();
            FUN_020bdcc0(CHILD);
            W(48) = 8;
            break;
        }
        switch ((signed char)CHILD[28]) {
        case 10:
            FUN_020bdec8(CHILD);
            FUN_02074770(self);
            W(48) = 5;
            break;
        case 4:
            FUN_02073678();
            W(48) = 8;
            break;
        case 7:
            break;
        default:
            cmd = FUN_02074024(self, 0, 0);
            switch (cmd) {
            case 7:
                if (FUN_020e3514() == 1) {
                    FUN_02073678();
                    FUN_020bdc90(CHILD);
                    W(48) = 2;
                } else {
                    FUN_02073678();
                    FUN_020bdcc0(CHILD);
                    W(48) = 2;
                }
                break;
            case 4:
                if (W(52) && FUN_02073fb0(self) >= 2) {
                    FUN_020bd884(CHILD);
                }
                break;
            }
            break;
        }
        break;
    case 5:
        FUN_020745ac(self);
        FUN_020747a4(self);
        cmd = FUN_02074024(self, 0, 0);
        switch (cmd) {
        case 8:
            FUN_020bdcc0(CHILD);
            W(48) = 2;
            break;
        case 3:
            (*(Close **)CHILD)[2](CHILD);
            W(48) = 7;
            break;
        }
        break;
    case 6:
        if (FUN_02074024(self, 0, 0) == 8) {
            FUN_020be3f0(CHILD);
            W(48) = 2;
        }
        break;
    case 7:
        if ((signed char)child[28] == 0) {
            W(48) = 0;
        }
        break;
    case 8:
        if (FUN_02074024(self, 0, 0) == 10) {
            FUN_02073bbc(0, 0);
            W(48) = 2;
        }
        break;
    case 9:
        if (FUN_02074024(self, 0, 0) == 3) {
            (*(Close **)CHILD)[2](CHILD);
            W(48) = 7;
        }
        break;
    }
    if (W(64) < 90) W(64)++;
    if (W(68) < 2) W(68)++;
}
