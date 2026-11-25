// flags: -O4,p
extern int FUN_02041474(void *, int);
extern void FUN_02037924(void *);
void FUN_overlay_28__0219a988(unsigned int *p) {
    void *c = (void *)p[1];
    if (p[4] == 1) {
        if (FUN_02041474(c, 0)) FUN_02037924((void *)p[2]);
    } else if (++p[5] > p[6]) {
        FUN_02037924((void *)p[2]);
    }
}
