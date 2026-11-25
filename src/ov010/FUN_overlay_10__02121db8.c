// flags: -O4,s
typedef struct { int v[8]; } Params;
extern char DAT_overlay_10__02122d18[], DAT_overlay_10__02122d40[];
extern void *DAT_overlay_10__02122d0c;
extern Params DAT_overlay_10__021223a8, DAT_overlay_10__02122388;
extern void *FUN_020c2b50(void *), *FUN_020c3564(void *), *FUN_020c1fc8(void);
#pragma thumb off
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(unsigned, void *, unsigned);
#pragma thumb on
extern void FUN_020a45a4(unsigned), FUN_overlay_10__02121d94(unsigned, unsigned, unsigned, unsigned);
extern void FUN_020c2b84(void *, const void *, unsigned, unsigned, unsigned);
extern void FUN_020c35d4(void *, const void *), FUN_020c38f0(void *, int);
extern int FUN_020c2438(void *, const void *, const void *, int), FUN_020c38c8(void *, int, int);

void *FUN_overlay_10__02121db8(char *self)
{
    Params first, second;
    int count, x;
    void *resource;
    *(void **)self = DAT_overlay_10__02122d18;
    FUN_020c2b50(self + 4);
    *(unsigned *)(self + 8) = ~0u;
    FUN_020c3564(self + 12);
    FUN_020c3564(self + 72);
    *(unsigned *)(self + 132) = 0;
    FUN_020a45a4(8);
    FUN_overlay_10__02121d94(0, 1, 4, 4);
    FUN_020c2b84(self + 4, DAT_overlay_10__02122d40, 7, 4, 4);
    resource = DAT_overlay_10__02122d0c;
    *(int *)(self + 8) = FUN_020c2438(FUN_020c1fc8(), resource, resource, 2);
    FUN_0206557c(0, FUN_0205e0c4(), 2048);
    count = 1;
    first = DAT_overlay_10__021223a8;
    first.v[0] = 1;
    FUN_020c35d4(self + 12, &first);
    FUN_020c38f0(self + 12, 0);
    x = FUN_020c38c8(self + 12, 200, 28);
    count += x * FUN_020c38c8(self + 12, 10, 48);
    second = DAT_overlay_10__02122388;
    second.v[0] = count;
    FUN_020c35d4(self + 72, &second);
    FUN_020c38f0(self + 72, 0);
    return self;
}
