//cpp
// flags: -O4,s
struct Obj_020369c8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void v5(); virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9();
    virtual void v10(unsigned int, void *);
};
extern "C" {
extern void *FUN_020be450(void), *FUN_020be5c0(void *, unsigned int, int), *FUN_020718e0(void);
extern void FUN_020bf818(void *, void *), FUN_02034680(void *, void *), FUN_020719d8(void *, void *);
void FUN_020369c8(char *s, unsigned int kind, unsigned int id, unsigned int slot) {
    unsigned int pair[2], position[3], request[8];
    void *p = FUN_020be5c0(FUN_020be450(), *(unsigned int *)(*(char **)(s + 160) + 52 * slot), 0);
    if (p) {
        FUN_020bf818(p, pair);
        position[0] = pair[0];
        position[2] = pair[1];
    } else {
        FUN_02034680(position, s + 56);
    }
    ((Obj_020369c8 *)s)->v10(slot, position + 1);
    request[0] = ~0u;
    request[4] = 0;
    request[5] = 30;
    ((unsigned short *)request)[12] = 0;
    ((unsigned short *)request)[13] = 0;
    ((unsigned short *)request)[14] = 25;
    request[5] = 10;
    request[0] = id;
    request[4] = kind;
    FUN_02034680(request + 1, position);
    FUN_020719d8(FUN_020718e0(), request);
}
}
