// flags: -O4,s
enum { E0 = 0, E1 = 1 };
typedef struct { unsigned char b[4]; unsigned int w[3]; } Record;
typedef struct { unsigned char b[4]; } Key;
typedef struct { int x, y, z; } Vector;
extern unsigned char *FUN_020384a4(void *, int);
extern int FUN_020424b4(void *, int), FUN_020b6ad4(void *, void *), FUN_0203a1a8(void *, int), FUN_02046724(void *, unsigned int, void *, int);
extern void *FUN_0203955c(void *), *FUN_02090c20(void);
extern void FUN_020345f0(void *, void *), FUN_0204c624(void *, void *), FUN_02090f74(void *, void *, void *, int), FUN_020c193c(int, int, int, int, int), FUN_0203aaf0(void *, int);
static inline int has_flag(char *s) { return (*(unsigned int *)(s + 248) & 0x400000) ? E1 : E0; }
void FUN_0203b10c(char *s) {
    unsigned char *event;
    int frame, flag;
    Record item;
    int sounds[3];
    Vector point, tmp, raw;
    short screen[2];
    Key key1, key2;
    char *child;
    event = FUN_020384a4(s, *(int *)(s + 208));
    if (!event || !*(void **)(s + 140)) return;
    frame = FUN_020424b4(*(void **)(s + 140), 0);
    if (frame >= ((int)event[6] << 12) && (unsigned char)s[509] == 1) {
        if (!FUN_020b6ad4(s + 32, &item)) {
            FUN_0203955c(&item);
            item.b[0] = 0;
            item.b[1] = 0;
        }
        flag = 0;
        key1 = *(Key *)&item;
        if (FUN_0203a1a8(&key1, 10) && has_flag(s))
            flag = 1;
        FUN_02046724(sounds, *(unsigned int *)(s + 252), &item, flag);
        FUN_020345f0(&point, s + 156);
        key2 = *(Key *)&item;
        if (FUN_0203a1a8(&key2, 16)) {
            child = *(char **)(s + 432);
            if (child && *(void **)(child + 20)) {
                FUN_0204c624(&raw, *(void **)(child + 20));
                FUN_020345f0(&tmp, &raw);
                point = tmp;
            }
        }
        FUN_02090f74(screen, FUN_02090c20(), &point, 0);
        if (*(int *)(s + 576) == 12)
            FUN_020c193c(sounds[0], sounds[2], screen[0], screen[1], *(int *)(s + 252));
        else
            FUN_020c193c(sounds[0], sounds[1], screen[0], screen[1], *(int *)(s + 252));
        s[509] = 0;
    }
    if (frame >= ((int)event[7] << 12) && (unsigned char)s[510] == 1) {
        unsigned int state = *(unsigned int *)(s + 208);
        if (state - 7 <= 2)
            FUN_0203aaf0(s, 1);
        else if (state - 14 <= 4)
            FUN_0203aaf0(s, 0);
        s[510] = 0;
    }
}
