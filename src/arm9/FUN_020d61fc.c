// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb4, exact bytes and relocation targets.
// flags: -O4,s
struct StateD61FC {
    int f0;
    int f4;
    int f8;
    int fc;
    int f10;
    int arr14[4];
    int f24;
    int f28;
    int f2c;
    int f30;
    int f34;
    void (*cb38)(int, int);
    void (*cb3c)(int, int, void *, int);
    int f40;
    int f44;
    int f48;
    int f4c;
};

extern int FUN_020c7824(void);
extern void FUN_020d5880(int, int, unsigned short, void *, int);
extern void FUN_020d5e78(int);

void FUN_020d61fc(struct StateD61FC *s, unsigned char *p1, unsigned char *p2) {
    switch (p1[7]) {
    case 1:
        if (p1[0xc] <= 3) {
            s->arr14[p1[0xc]] = 1;
            if (s->f10 == 0 && s->arr14[1] != 0 && s->arr14[2] != 0 && s->arr14[3] != 0 &&
                (s->f4 == -1 || s->arr14[0] != 0)) {
                s->f10 = 1;
                s->f2c = FUN_020c7824() + 10000;
                s->cb38(s->f10, s->f40);
            }
        }
        break;
    case 2: {
        p1[7] = 3;
        unsigned short u = *(unsigned short *)(p2 + 2);
        FUN_020d5880(s->f0, *(int *)(p2 + 4),
                     (unsigned short)((unsigned char)(u >> 8) | ((u << 8) & 0xff00)), p1, 0x15);
        break;
    }
    case 0xe:
        s->f10 = 6;
        s->cb3c(s->f44, s->f48, &s->f4c, s->f40);
        if (s->f4 == -1) {
            s->f0 = -1;
        }
        FUN_020d5e78(s->f8);
        break;
    }
}
