// flags: -O4,s
extern void FUN_02037ff0(void *, void *);
extern void *FUN_02034680(void *, void *);
extern int FUN_02085880(int);
void FUN_02075c68(char *s, int *position) {
    int v[3];
    s[603] = 1;
    int z = position[1]; v[0] = position[0]; v[1] = 0; v[2] = z;
    FUN_02037ff0(s, v);
    FUN_02034680(s + 168, FUN_02034680(s + 180, s + 156));
    *(int *)(s + 248) |= 0x1000000;
    if (FUN_02085880(*(int *)(s + 252)) == 1) {
        *(int *)(s + 248) &= ~2;
        *(int *)(s + 248) &= ~1;
    }
}
