// flags: -O4,s
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
void *FUN_overlay_4__02129f10(char *self) {
    char *p;
    int i;
    int z;
    FUN_02071d0c(self + 4);
    z = 0;
    *(int *)(self + 20) = z;
    p = self + 24;
    do {
        FUN_02071d0c(p);
        *(int *)(p + 16) = z;
        p += 20;
    } while (p < self + 104);
    {
        char *p2 = self + 104;
        int z2 = 0;
        do {
            FUN_02071d0c(p2);
            *(int *)(p2 + 16) = z2;
            p2 += 20;
        } while (p2 < self + 264);
    }
    {
        char *p3 = self + 264;
        int z3 = 0;
        do {
            FUN_02071d0c(p3);
            *(int *)(p3 + 16) = z3;
            p3 += 20;
        } while (p3 < self + 764);
    }
    FUN_02071d0c(self + 764);
    *(int *)(self + 780) = 0;
    *(int *)self = 0;
    *(int *)(self + 796) = 0;
    FUN_02090b44(self + 764);
    *(int *)(self + 780) = 0;
    for (i = 0; i < 4; i++) {
        FUN_02090b44(self + 24 + i * 20);
        *(int *)(self + 40 + i * 20) = 0;
        self[792 + i] = 0;
    }
    for (i = 0; i < 8; i++) {
        FUN_02090b44(self + 104 + i * 20);
        *(int *)(self + 120 + i * 20) = 0;
    }
    for (i = 0; i < 25; i++) {
        FUN_02090b44(self + 264 + i * 20);
        *(int *)(self + 280 + i * 20) = 0;
    }
    *(int *)(self + 788) = 0;
    *(int *)(self + 784) = *(int *)(self + 788);
    return self;
}
