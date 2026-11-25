// flags: -O4,s
enum { E0 = 0, E1 = 1, E_BIG = 0x10000 };
typedef struct { int x, y; } Point;
typedef struct { int a[7]; } Labels;
extern const Labels DAT_02137c24;
extern unsigned char DAT_0211a51c[], DAT_0211a3c4[];
extern unsigned short DAT_0211a3b8;
extern int FUN_02084c1c(void *), FUN_02084be4(void *), FUN_02084be8(void *), FUN_02084bf8(void *), FUN_overlay_12__0211f7e0(void), FUN_020788c0(void), FUN_0207890c(void);
extern int *FUN_02078cb8(void);
extern const char *FUN_overlay_12__02121fc8(int, int);
extern void FUN_overlay_12__0211f7fc(void *, int, const char *, int, Point, int);
extern void FUN_overlay_12__0212c8f8(const char *, int, int, int);

static inline int has_party(void) { return (FUN_02078cb8()[2] >= 0) ? E1 : E0; }
static inline int has_room(void) { return (*(int *)(DAT_0211a3c4 + 8) >= 0) ? E1 : E0; }
static inline int is_flag2(void) { return (DAT_0211a3b8 & 2) ? E1 : E0; }
static inline int is_mode_zero(void) { return (FUN_020788c0() == 0) ? E1 : E0; }

void FUN_overlay_12__0211f434(int *self) {
    int count = 0;
    const Labels labels = DAT_02137c24;
    Point position;
    int which;
    int i;
    for (which = 0; which < 4; which++) {
        int status;
        const char *text;
        int enabled;
        position.x = self[4] * (20 << 12) + (7 << 12);
        position.y = count * (17 << 12) + (29 << 12);
        switch (which) {
        case 0: {
            if (FUN_02084c1c(DAT_0211a51c) && FUN_02084be4(DAT_0211a51c) == 1) break;
            if (!FUN_02084be8(DAT_0211a51c) && (!FUN_02084bf8(DAT_0211a51c) || !FUN_overlay_12__0211f7e0())) break;
            status = 0;
            text = FUN_overlay_12__02121fc8(0, labels.a[0]);
            enabled = 1;
            if (((FUN_02078cb8()[2] >= 0) ? E1 : E0)) {
                status = 2;
                enabled = 0;
            } else if (((*(int *)(DAT_0211a3c4 + 8) >= 0) ? E1 : E0) && *(signed char *)(DAT_0211a3c4 + 12) == 0) {
                if (((DAT_0211a3b8 & 2) ? E1 : E0)) {
                    status = 2;
                    enabled = 0;
                } else {
                    text = FUN_overlay_12__02121fc8(0, labels.a[4]);
                }
            } else if (!((FUN_020788c0() == 0) ? E1 : E0)) {
                int mode = FUN_020788c0();
                if (mode != 3 && mode != 4) {
                    status = 2;
                    enabled = 0;
                }
            }
            FUN_overlay_12__0211f7fc((char *)self + 712 + 288 * count, status, text, count, position, enabled);
            count++;
            break;
        }
        case 1: {
            if (FUN_02084c1c(DAT_0211a51c) && FUN_02084be4(DAT_0211a51c) == 1) break;
            if (FUN_02084be8(DAT_0211a51c) || (FUN_02084bf8(DAT_0211a51c) && FUN_overlay_12__0211f7e0())) {
                int status = 0;
                const char *text = FUN_overlay_12__02121fc8(0, labels.a[1]);
                int enabled = 1;
                if (!((FUN_020788c0() == 0) ? E1 : E0)) {
                    if (((FUN_02078cb8()[2] >= 0) ? E1 : E0)) {
                        text = FUN_overlay_12__02121fc8(0, labels.a[6]);
                    } else if (FUN_0207890c() && !((DAT_0211a3b8 & 2) ? E1 : E0)) {
                        text = FUN_overlay_12__02121fc8(0, labels.a[5]);
                    } else {
                        int mode = FUN_020788c0();
                        if (mode != 3 && mode != 4) {
                            status = 2;
                            enabled = 0;
                        }
                    }
                }
                FUN_overlay_12__0211f7fc((char *)self + 712 + 288 * count, status, text, count, position, enabled);
            } else if (((FUN_02078cb8()[2] >= 0) ? E1 : E0)) {
                const char *text = FUN_overlay_12__02121fc8(0, labels.a[6]);
                FUN_overlay_12__0211f7fc((char *)self + 712 + 288 * count, 0, text, count, position, 1);
            } else {
                const char *text = FUN_overlay_12__02121fc8(0, labels.a[6]);
                FUN_overlay_12__0211f7fc((char *)self + 712 + 288 * count, 2, text, count, position, 0);
            }
            count++;
            break;
        }
        case 2: {
            int mode;
            if (!FUN_02084be8(DAT_0211a51c)) break;
            enabled = 0;
            mode = *(signed char *)(DAT_0211a3c4 + 12);
            if (mode == 0 || mode == 2) {
                if (((*(int *)(DAT_0211a3c4 + 8) >= 0) ? E1 : E0) && !((DAT_0211a3b8 & 2) ? E1 : E0)) {
                    enabled = 1;
                } else {
                    enabled = 0;
                }
            }
            if (enabled) {
                status = 0;
            } else {
                status = 2;
            }
            text = FUN_overlay_12__02121fc8(0, labels.a[2]);
            FUN_overlay_12__0211f7fc((char *)self + 712 + 288 * count, status, text, count, position, enabled);
            count++;
            break;
        }
        case 3:
            if (FUN_02084c1c(DAT_0211a51c)) {
                const char *text = FUN_overlay_12__02121fc8(0, labels.a[3]);
                FUN_overlay_12__0211f7fc((char *)self + 712 + 288 * count, 0, text, count, position, 1);
                count++;
            }
            break;
        }
    }
    for (i = 0; i < count; i++) {
        FUN_overlay_12__0212c8f8((char *)self + 728 + 288 * i, 20 * self[4] + 11, 17 * i + 32, 2);
    }
    self[1] = count;
}
