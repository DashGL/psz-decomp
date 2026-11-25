// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct {
    unsigned char pad[0x38];
    Vec3 pos;
} Actor;
extern int FUN_02040d2c(void *, int);
extern int FUN_overlay_26__021982f4(void *, Vec3 *);
extern unsigned short FUN_overlay_26__021987d4(void *, const Vec3 *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern const int DAT_overlay_26__0219b300;
extern void FUN_02037924(void *);
extern int FUN_overlay_26__021984e0(void *);
extern void FUN_overlay_26__02198824(void *, const Vec3 *, int, int);
extern void FUN_02040c0c(void *, int, int, int, int);
static inline int fxmul(long long a, long long b) { return (int)((a * b + 0x800) >> 12); }
enum { E0 = 0, E1 = 1 };
void FUN_overlay_26__021983a0(unsigned char *self)
{
    Vec3 pos, target, diff;
    int threshold;
    Actor *actor;
    unsigned char *owner;
    unsigned short angle;
    if (FUN_02040d2c(*(void **)(self + 4), 0) != 0) {
        owner = *(unsigned char **)(self + 8);
        actor = *(Actor **)(self + 4);
        pos = actor->pos;
        if (FUN_overlay_26__021982f4(owner, &target) == 1) {
            diff.x = target.x - pos.x;
            diff.y = target.y - pos.y;
            diff.z = target.z - pos.z;
            angle = FUN_overlay_26__021987d4(actor, &diff);
            FUN_020bc5cc(&threshold, &DAT_overlay_26__0219b300, &DAT_overlay_26__0219b300);
            if ((((fxmul(diff.z, diff.z) + (fxmul(diff.x, diff.x) + fxmul(diff.y, diff.y)) < threshold) ? E1 : E0) != 0) && angle < 0x5555) {
                *(int *)(owner + 0x4c) = 1;
                FUN_02037924(*(void **)(self + 8));
                return;
            }
        }
        *(int *)(self + 0xc) -= 1;
        if (*(int *)(self + 0xc) <= 0) {
            *(int *)(owner + 0x4c) = 0;
            FUN_02037924(*(void **)(self + 8));
        } else {
            FUN_overlay_26__02198824(actor, &target, 0x3c00, FUN_overlay_26__021984e0(self));
            FUN_02040c0c(actor, 0, 2, 0x1000, 0);
        }
    }
}
