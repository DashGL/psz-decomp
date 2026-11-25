// flags: -O4,s
//cpp
struct Vec3 { union { struct { int x, y, z; }; int v[3]; }; };
struct Query {
    int id, a, b;
    Vec3 position;
    unsigned short yaw, angle;
    unsigned int flags;
};

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800LL) >> 12);
}

static inline int is_eq(int a, int b) { return (a == b) ? 1 : 0; }
static inline int is_le(int a, int b) { return (a <= b) ? 1 : 0; }
static inline int is_lt(int a, int b) { return (a < b) ? 1 : 0; }

extern "C" {
extern int DAT_0219dab8[];
extern int DAT_020fc988;
extern int DAT_0219dadc, DAT_0219dad8, DAT_0219dad4, DAT_0219dad0;
extern int FUN_02036c34(void *);
extern int FUN_overlay_23__0219a364(void *, Vec3 *);
extern int FUN_020865fc(Query *);
extern void FUN_overlay_23__0219be08(void *, int);
extern void FUN_overlay_23__0219c058(Query *);
extern void FUN_overlay_23__0219c084(Query *, int);
extern void FUN_overlay_23__0219c0b0(Query *, int);
extern void FUN_02086d60(int *, int *, int *);

void FUN_overlay_23__0219be14(char *self) {
    char *actor = *(char **)(self + 4);
    int *timers = (int *)(self + 0x80);
    int delta = FUN_02036c34(actor);
    unsigned short yaw = *(unsigned short *)(actor + 0x44);
    Vec3 *position = (Vec3 *)(actor + 0x38);
    int state = *(int *)(self + 0xec);
    if (is_eq(state, 4)) {
        int threshold = fx_mul(*(short *)(actor + 0x18), DAT_0219dab8[3]);
        int available = 1;
        if (timers[0] > threshold) {
            Vec3 target;
            if (FUN_overlay_23__0219a364(self, &target)) {
                int dz = *(volatile int *)&target.z - position->z;
                int dx = target.x - position->x;
                int dist = fx_mul(dz, dz) + fx_mul(dx, dx);
                if (is_lt(dist, DAT_0219dab8[4])) {
                    *(int *)(self + 0xf4) = -DAT_0219dab8[0];
                    *(int *)(self + 0xf8) = DAT_0219dab8[10];
                } else {
                    *(int *)(self + 0xf4) = DAT_0219dab8[2];
                    *(int *)(self + 0xf8) = DAT_0219dab8[1];
                }
                FUN_overlay_23__0219be08(self + 0xec, 3);
                available = 0;
            }
            timers[0] = 0;
        }
        if (available && is_le(timers[1], DAT_020fc988)) {
            Query first;
            FUN_overlay_23__0219c058(&first);
            first.position = *position;
            first.yaw = yaw;
            first.angle = 0x2000;
            first.flags |= 4;
            FUN_overlay_23__0219c084(&first, 0x1800);
            FUN_overlay_23__0219c0b0(&first, 0x5000);
            first.id = *(int *)(self + 0x64);
            if (FUN_020865fc(&first)) {
                int cooldown1;
                FUN_overlay_23__0219be08(self + 0xec, 5);
                FUN_02086d60(&cooldown1, &DAT_0219dadc, &DAT_0219dad8);
                timers[1] = cooldown1;
                available = 0;
            }
        }
        if (available && is_le(timers[2], DAT_020fc988)) {
            Query second;
            FUN_overlay_23__0219c058(&second);
            second.position = *position;
            second.yaw = yaw;
            second.angle = 0xe38;
            second.flags |= 4;
            FUN_overlay_23__0219c084(&second, 0x5000);
            FUN_overlay_23__0219c0b0(&second, 0xa000);
            second.id = *(int *)(self + 0x64);
            if (FUN_020865fc(&second)) {
                int cooldown2;
                FUN_overlay_23__0219be08(self + 0xec, 6);
                FUN_02086d60(&cooldown2, &DAT_0219dad4, &DAT_0219dad0);
                timers[2] = cooldown2;
            }
        }
    } else if (is_eq(state, -1)) {
        FUN_overlay_23__0219be08(self + 0xec, 4);
    }
    timers[1] -= delta;
    timers[2] -= delta;
}
}
