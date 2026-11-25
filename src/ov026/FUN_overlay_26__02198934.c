// flags: -O4,s
extern int FUN_02040d2c(void *, int);
extern void FUN_02037924(void *);
extern unsigned int FUN_02035b60(int);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_26__02198934(int *p) {
    int *parent, *child;
    unsigned short angle;
    if (FUN_02040d2c((void *)p[1], 0)) {
        parent = (int *)p[2];
        p[3]--;
        if (p[3] <= 0) {
            parent[19] = 0;
            FUN_02037924((void *)p[2]);
        } else {
            child = (int *)p[1];
            angle = *(unsigned short *)((char *)child + 68);
            *(unsigned short *)((char *)child + 68) = angle + (FUN_02035b60(0x6000) - 0x3000);
            FUN_02040c0c((void *)p[1], 0, 2, 4096, 0);
        }
    }
}
