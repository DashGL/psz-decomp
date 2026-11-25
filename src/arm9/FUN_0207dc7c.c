// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern int FUN_02047440(void *);
extern int FUN_0204770c(void *);
extern int FUN_0207b860(void *, int);
extern void *FUN_0204225c(void *, int);
extern void FUN_02046b94(void *, int);
extern void FUN_02046bec(void *);
extern void FUN_0206e728(void *, void (*)(void *));
extern void FUN_0206e738(void *, void *);
extern void FUN_0207dd40(void *);
extern char DAT_0211c844[];

int FUN_0207dc7c(char *s) {
    int result = FUN_02047440(s);
    char *actor;
    void *animation;
    Vec v;
    if (result == 0) {
        if (!*(int *)(s + 272) && *(void *volatile *)(s + 48)) {
            actor = *(char **)(s + 48);
            if (actor) {
                animation = FUN_0204225c(actor, 3);
                if (animation) {
                    int random = FUN_0207b860(DAT_0211c844, 16);
                    FUN_02046b94(animation, (*(int *)(s + 280) << 12) + random);
                    FUN_02046bec(animation);
                }
                if (*(unsigned short *)(s + 276)) {
                    FUN_0206e728(actor, FUN_0207dd40);
                    FUN_0206e738(actor, s);
                }
                *(int *)(s + 272) = 1;
            }
        }
        if (FUN_0204770c(s)) {
            v = *(Vec *)(s + 80);
            v.x -= *(int *)(s + 260);
            v.y -= *(int *)(s + 264);
            v.z -= *(int *)(s + 268);
            *(Vec *)(s + 80) = v;
        }
    }
    return result;
}
