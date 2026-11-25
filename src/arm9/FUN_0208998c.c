// flags: -O4,s
typedef struct { unsigned short a, b, c, d; int x, y; } R340;
typedef struct { int w[23]; } T340;
typedef struct { unsigned char b[4]; } Key340;
extern T340 DAT_020f4100;
extern char DAT_020faa44[];
extern void FUN_02071d0c(void *), FUN_020c38f0(void *, int), FUN_020c331c(int, int, int, int), FUN_0208bbc0(void *, int, int, int, int, int), FUN_02079160(int, void *, unsigned, int, int, int, int, int, int), FUN_020c3788(void *, void *, int, int, int), FUN_0208971c(void *, void *), FUN_020c32b4(void *, int);
extern void *FUN_02077930(void), *FUN_0208f068(void), *FUN_02084568(void *), *FUN_0208efa8(void *, int, int, int), *FUN_02077f3c(void);
extern unsigned char *FUN_02084798(int, int);
extern int FUN_02077d98(void *), FUN_02079114(void), FUN_0209cbb8(void *, int, int), FUN_02078038(void *);

void FUN_0208998c(char *s) {
    R340 unused;
    T340 labels;
    unsigned char text[24];
    R340 left, right;
    int pos[2];
    Key340 key;
    int index, font, effect, mode;
    void *manager;
    unsigned char *stats;
    FUN_02071d0c(&unused);
    index = FUN_02077d98(FUN_02077930());
    labels = DAT_020f4100;
    manager = FUN_0208f068();
    if (!manager) return;
    key = *(Key340 *)s;
    if (!FUN_02084568(&key)) return;
    stats = FUN_02084798((unsigned char)s[1], *(int *)(s + 4) & 15);
    if (!*(int *)(s + 56)) {
        FUN_020c38f0(*(void **)(s + 48), 0);
        FUN_020c38f0(*(void **)(s + 52), 0);
    }
    font = FUN_02079114();
    if (!font) return;
    FUN_020c331c(58, 720896, 1028096, *(int *)(s + 32));
    effect = (*(int *)(s + 8) & 253952) >> 13;
    if (effect) {
        if (!*(int *)(s + 56) && labels.w[effect] != 255 && FUN_0208efa8(manager, index, 2, labels.w[effect])) {
            FUN_0208bbc0(s, 2, labels.w[(*(int *)(s + 8) & 253952) >> 13], 0, 12, 0);
        }
        FUN_020c331c(33, 917504, 1077248, *(int *)(s + 32));
        pos[0] = 983040;
        pos[1] = 1077248;
        FUN_02079160(font, pos, 2, 1, (*(int *)(s + 8) & 3584) >> 9, -1, -1, 8, 0);
    } else {
        FUN_020c3788(*(void **)(s + 52), DAT_020faa44, 72, 12, 2);
    }
    FUN_020c331c(61, 720896, 1126400, *(int *)(s + 32));
    mode = *(int *)(s + 4) & 15;
    if (mode) {
        if (!*(int *)(s + 56) && FUN_0209cbb8(text, (unsigned char)s[1], mode)) {
            FUN_020c3788(*(void **)(s + 48), text, 2, 36, 2);
        }
        FUN_020c331c(71, 720896, 1224704, *(int *)(s + 32));
        pos[0] = 917504;
        pos[1] = 1273856;
        FUN_02079160(font, pos, 2, 3, stats[2], -1, -1, 8, 0);
        FUN_020c331c(47, 720896, 1323008, *(int *)(s + 32));
        pos[0] = 884736;
        pos[1] = 1372160;
        FUN_02079160(font, pos, 2, 3, stats[0], -1, -1, 8, 0);
        pos[0] = 983040;
        FUN_02071d0c(&left);
        left.a = 2;
        FUN_0208971c(&left.x, pos);
        FUN_020c32b4(&left, FUN_02078038(FUN_02077f3c()));
        FUN_020c331c(50, 720896, 1421312, *(int *)(s + 32));
        pos[0] = 884736;
        pos[1] = 1470464;
        FUN_02079160(font, pos, 2, 3, stats[1], -1, -1, 8, 0);
        pos[0] = 983040;
        FUN_02071d0c(&right);
        right.a = 2;
        FUN_0208971c(&right.x, pos);
        FUN_020c32b4(&right, FUN_02078038(FUN_02077f3c()));
    } else if (!*(int *)(s + 56)) {
        FUN_020c3788(*(void **)(s + 52), DAT_020faa44, 72, 36, 2);
    }
    *(int *)(s + 56) = 1;
}
