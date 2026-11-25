// flags: -O4,s
extern void FUN_overlay_15__021290ec(void);
extern void FUN_overlay_15__021255f8(unsigned int);
extern void FUN_overlay_15__021328b0(unsigned int);
extern int FUN_overlay_15__02125214(int, int, int);
extern unsigned int *FUN_overlay_15__02135af8(int, int);
extern void FUN_overlay_15__021254e0(unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_overlay_15__021291f0(void);
extern void FUN_overlay_15__02127de4(void (*)(void));
extern struct {
    unsigned char idx;
    unsigned char flag;
    unsigned char pad[6];
    unsigned int *sprite;
} DAT_0213e828;
struct T_0212905c { unsigned short v, p1, p2, p3; };
extern const struct T_0212905c DAT_0213a276[];
extern const struct T_0212905c DAT_0213a27a[];
extern const struct T_0212905c DAT_0213a278[];
extern const struct T_0212905c DAT_0213a27c[];
void FUN_overlay_15__0212905c(void) {
    unsigned int *sprite, index;
    DAT_0213e828.flag = 0;
    FUN_overlay_15__021290ec();
    FUN_overlay_15__021255f8(16);
    FUN_overlay_15__021328b0(3);
    FUN_overlay_15__02125214(57, -1, 0);
    sprite = FUN_overlay_15__02135af8(0, 91);
    DAT_0213e828.sprite = sprite;
    *sprite = (*sprite & 0xfe00ff00u) | 0x00e00084;
    sprite = DAT_0213e828.sprite;
    ((unsigned short *)sprite)[2] = (((unsigned short *)sprite)[2] & ~0xc00) | 0xc00;
    index = DAT_0213e828.idx;
    FUN_overlay_15__021254e0(
        DAT_0213a276[index].v,
        DAT_0213a27a[index].v,
        DAT_0213a278[index].v,
        DAT_0213a27c[index].v);
    FUN_overlay_15__02127de4(FUN_overlay_15__021291f0);
}
