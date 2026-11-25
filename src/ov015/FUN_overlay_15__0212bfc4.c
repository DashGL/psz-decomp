typedef int (*Loader)(char *);
struct LoaderTable { Loader fn[5]; };
struct MsgSrc { unsigned char pad[8]; unsigned char m[5]; };
extern const struct LoaderTable DAT_0213a35c;
extern const struct MsgSrc DAT_0213a344;
extern unsigned char *DAT_0213e864;
extern const char DAT_0213b22c[];
#pragma thumb off
extern int FUN_020015ac(const void *, const void *, unsigned int);
extern void FUN_020656b8(void *, int, unsigned int);
#pragma thumb on
extern void *FUN_overlay_15__021366c4(unsigned int, int);
extern void FUN_overlay_15__02127e24(int *, int *);
extern void FUN_overlay_15__0212c0bc(void), FUN_overlay_15__021255f8(unsigned int);
extern int FUN_overlay_15__02125214(int, int, int);
extern void FUN_overlay_15__02125320(int);
extern void *FUN_overlay_15__02135f98(int, int), *FUN_overlay_15__02135af8(int, int);
extern void FUN_overlay_15__0212c5dc(void), FUN_overlay_15__0212c55c(void), FUN_overlay_15__0212c13c(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
void FUN_overlay_15__0212bfc4(void) {
    struct LoaderTable loaders = DAT_0213a35c;
    unsigned char messages[5];
    int mode;
    unsigned char *owner;
    unsigned short *sprite;
    void *created;
    messages[0] = DAT_0213a344.m[0];
    messages[1] = DAT_0213a344.m[1];
    messages[2] = DAT_0213a344.m[2];
    messages[3] = DAT_0213a344.m[3];
    messages[4] = DAT_0213a344.m[4];
    DAT_0213e864 = FUN_overlay_15__021366c4(24, 4);
    FUN_overlay_15__02127e24(&mode, 0);
    loaders.fn[mode]((char *)(DAT_0213e864 + 8));
    owner = DAT_0213e864;
    if (FUN_020015ac(owner + 8, DAT_0213b22c, 3) != 0) {
        owner[0x14] = 3;
    } else {
        FUN_020656b8(owner + 8, 0, 12);
        DAT_0213e864[0x14] = 0;
    }
    FUN_overlay_15__0212c0bc();
    FUN_overlay_15__021255f8(mode + 11);
    FUN_overlay_15__02125214(messages[mode], -1, 0);
    FUN_overlay_15__02125320(2);
    *(void **)DAT_0213e864 = FUN_overlay_15__02135f98(0, 0);
    created = FUN_overlay_15__02135af8(0, 63);
    *(void **)(DAT_0213e864 + 4) = created;
    sprite = *(unsigned short **)(DAT_0213e864 + 4);
    sprite[2] = (sprite[2] & ~0xc00) | 0xc00;
    FUN_overlay_15__0212c5dc();
    FUN_overlay_15__0212c55c();
    FUN_overlay_15__02127de4(FUN_overlay_15__0212c13c);
}