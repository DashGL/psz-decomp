// flags: -O4,p
extern int FUN_02073198(void);
extern int FUN_020854f8(int);
extern void FUN_0207a378(unsigned int, void *, void *);

void FUN_0204f814(char *s) {
    int current = FUN_020854f8(FUN_02073198());
    int active;
    if (*(unsigned int *)(s + 4) == (unsigned int)current) {
        if (current == *(signed char *)(s + 1)) {
            active = 1;
        } else {
            active = 0;
        }
    } else {
        active = 1;
    }
    if (active) {
        FUN_0207a378(*(unsigned int *)(s + 4), s + 8, s + 0x1c);
    }
}
