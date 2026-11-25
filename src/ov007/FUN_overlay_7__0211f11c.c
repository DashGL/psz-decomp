// flags: -O4,s
typedef struct { int v[8]; } Params;
extern char DAT_overlay_7__0211fdf4[], DAT_overlay_7__0211fe00[];
extern Params DAT_overlay_7__0211fd1c, DAT_overlay_7__0211fcfc;
extern void FUN_020c2b50(void *), FUN_020c3564(void *), FUN_020b3044(void *), FUN_020a45a4(int);
extern void FUN_overlay_7__0211f0f8(unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_020c2b84(void *, const char *, int, int, int), FUN_020c35d4(void *, Params *), FUN_020c38f0(void *, int);
extern int FUN_020c38c8(void *, int, int);
#pragma thumb off
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(unsigned int, void *, unsigned int);
#pragma thumb on

void *FUN_overlay_7__0211f11c(char *self)
{
    Params a, b;
    int count, x;
    *(void **)self = DAT_overlay_7__0211fdf4;
    FUN_020c2b50(self + 4);
    FUN_020c3564(self + 8);
    FUN_020c3564(self + 68);
    FUN_020b3044(self + 128);
    FUN_020a45a4(8);
    FUN_overlay_7__0211f0f8(0, 1, 4, 4);
    FUN_020c2b84(self + 4, DAT_overlay_7__0211fe00, 7, 4, 4);
    FUN_0206557c(0, FUN_0205e0c4(), 2048);
    count = 1;
    a = DAT_overlay_7__0211fd1c;
    a.v[0] = 1;
    FUN_020c35d4(self + 8, &a);
    FUN_020c38f0(self + 8, 0);
    x = FUN_020c38c8(self + 8, 200, 28);
    count += x * FUN_020c38c8(self + 8, 10, 48);
    b = DAT_overlay_7__0211fcfc;
    b.v[0] = count;
    FUN_020c35d4(self + 68, &b);
    FUN_020c38f0(self + 68, 0);
    return self;
}
