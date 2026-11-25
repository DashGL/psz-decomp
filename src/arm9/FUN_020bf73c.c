// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -O4,s
struct Vec2_2 {
    int x;
    int y;
};
extern long long FUN_020bf7d8(struct Vec2_2 *);
extern int FUN_0205c540(long long);
extern void FUN_02034e98(struct Vec2_2 *, int);
extern void FUN_020bf66c(struct Vec2_2 *, struct Vec2_2 *, struct Vec2_2 *);
extern void FUN_02034e8c(int *, int *);

void FUN_020bf73c(int *param_1, int *param_2) {
    struct Vec2_2 sp18;
    struct Vec2_2 sp10;
    struct Vec2_2 sp08;
    struct Vec2_2 sp00;
    switch (param_1[0]) {
    case 0:
        *(struct Vec2_2 *)param_2 = *(struct Vec2_2 *)(param_1 + 1);
        param_2[2] = param_1[3];
        break;
    case 1: {
        int mx = (param_1[1] + param_1[3]) / 2;
        int my = (param_1[2] + param_1[4]) / 2;
        sp18.x = param_1[3] - mx;
        sp18.y = param_1[4] - my;
        param_2[0] = mx;
        param_2[1] = my;
        param_2[2] = FUN_0205c540(FUN_020bf7d8(&sp18));
        break;
    }
    case 2:
        sp10 = *(struct Vec2_2 *)(param_1 + 3);
        FUN_02034e98(&sp10, param_1[7]);
        sp08 = *(struct Vec2_2 *)(param_1 + 5);
        FUN_02034e98(&sp08, param_1[8]);
        FUN_020bf66c(&sp00, &sp10, &sp08);
        FUN_02034e8c(param_2, param_1 + 1);
        param_2[2] = FUN_0205c540(FUN_020bf7d8(&sp00));
        break;
    }
}
