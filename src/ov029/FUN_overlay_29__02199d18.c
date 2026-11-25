// flags: -O4,s
extern unsigned int FUN_02037208(void *, unsigned int);
extern int FUN_overlay_29__02199bb8(void *);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_29__02199d18(int *self) {
    void *owner = (void *)self[1], *state = (void *)self[2];
    unsigned int direction;
    self[3] = 0;
    *(unsigned short *)(self + 4) = 0;
    direction = FUN_02037208(owner, 4);
    switch (direction) {
    case 0: *(unsigned short *)(self + 4) = 0x4000; break;
    case 1: *(unsigned short *)(self + 4) = 0xc000; break;
    }
    if (FUN_overlay_29__02199bb8(state) == 1 && *(int *)0x0219c020 == 1)
        FUN_02040c0c(owner, 0, 1, 4096, 0);
    else
        FUN_02040c0c(owner, 0, 2, 4096, 0);
}
