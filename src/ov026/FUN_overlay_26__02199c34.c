//cpp
// flags: -O4,s
extern "C" {
extern unsigned int FUN_02037208(void *, unsigned int);
extern int FUN_02086a90(void *);
}
extern "C" int FUN_overlay_26__02199c34(int *self) {
    int current = self[2];
    unsigned char *owner;
    if (((self[19] == current) ? 1 : 0) == 0 && ((self[18] == current) ? 1 : 0) == 0) return 0;
    owner = (unsigned char *)self[1];
    if (((*(int *)(owner + 212) == 2) ? 1 : 0) == 1) return 0;
    if (FUN_02037208(owner, 3) != 0) return 0;
    self[20] = FUN_02086a90(owner);
    return 1;
}
