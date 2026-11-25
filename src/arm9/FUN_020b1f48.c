// flags: -O4,s
typedef struct {
    char pad0[44];
    int f2c;
    unsigned char f30;
    char pad1[75];
    void *ptrs[3];
} Self_020b1f48;
extern void *UNK_02108d08;
extern char *UNK_02108c84;
extern void FUN_020472bc(void *), FUN_020c189c(int, int), FUN_020b0b7c(void *), FUN_020b0b9c(void *), FUN_0203eee4(void *, int), FUN_0203f078(void *, int), FUN_020b0e10(void *);
void FUN_020b1f48(char *s) {
    int i;
    void *p;
    char *manager, *target;
    if (!*(int *)(s + 280)) {
        *(int *)(s + 280) = 1;
        for (i = 0; i < 3; i++) {
            p = ((Self_020b1f48 *)s)->ptrs[i];
            if (p) {
                FUN_020472bc(p);
                ((Self_020b1f48 *)s)->ptrs[i] = 0;
            }
        }
        FUN_020c189c(0, *(int *)(s + 44));
        FUN_020b0b7c(s);
        FUN_020b0b9c(s);
        p = UNK_02108d08;
        if (p) {
            FUN_0203eee4(p, (unsigned char)s[48]);
            FUN_0203f078(p, (unsigned char)s[48]);
        }
        manager = UNK_02108c84;
        if (manager) {
            target = *(char **)(manager + 64 + 4 * (*(int *)(manager + 100)));
            if (target) (*(void (**)(void *, int))(*(char **)target + 32))(target, 20480);
        }
        FUN_020b0e10(s);
    }
}
