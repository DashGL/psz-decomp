// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa4, exact bytes and relocation targets.
// flags: -O4,s
struct Vec2_13 {
    int x;
    int y;
};
struct Node13 {
    int f0;
    struct Node13 *next;
    int f8;
    int x;
    int y;
    int pad[13];
    int f48;
};
extern const struct Vec2_13 DAT_020f5bfc;
extern int *FUN_020be550(int, int);
extern struct Node13 *FUN_020be5ec(int, int);
extern int FUN_0205c520(int, int);

void FUN_020be6b4(int param_1, int param_2, struct Vec2_13 *param_3) {
    int count;
    int *r6;
    struct Node13 *cur;
    { int x = DAT_020f5bfc.x; int y = DAT_020f5bfc.y; param_3->x = x; param_3->y = y; }
    count = 0;
    r6 = FUN_020be550(param_1, param_2);
    for (cur = FUN_020be5ec(param_1, param_2); cur != 0; cur = cur->next) {
        char *sub = (char *)cur + 8;
        if (*(int *)(sub + 0x40) != r6[1]) {
            count += 0x1000;
            param_3->x += *(int *)(sub + 4);
            param_3->y += *(int *)(sub + 8);
        }
    }
    if (count > 0x1000) {
        int inv = FUN_0205c520(0x1000, count);
        param_3->x = (int)(((long long)param_3->x * inv + 0x800) >> 12);
        param_3->y = (int)(((long long)param_3->y * inv + 0x800) >> 12);
    }
}
