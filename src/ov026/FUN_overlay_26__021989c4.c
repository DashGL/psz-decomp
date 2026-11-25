// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct {
    unsigned char pad[0x38];
    Vec3 pos;
} Actor;
extern const int DAT_020fc988;
extern const int DAT_overlay_26__0219b3f8;
extern int FUN_overlay_26__021982f4(void *, Vec3 *);
extern unsigned short FUN_overlay_26__021987d4(void *, const Vec3 *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_02037924(void *);
extern int FUN_02036c34(void *);
static inline int fxmul(long long a, long long b) { return (int)((a * b + 0x800) >> 12); }
enum { E0 = 0, E1 = 1 };
void FUN_overlay_26__021989c4(unsigned char *self)
{
    Actor *owner = *(Actor **)(self + 4);
    unsigned char *state;
    Vec3 position, target, delta;
    unsigned short angle;
    int threshold;
    if ((((DAT_020fc988 >= *(int *)(self + 12)) ? E1 : E0) != 0)) {
        state = *(unsigned char **)(self + 8);
        position = owner->pos;
        if (FUN_overlay_26__021982f4(state, &target) == 1) {
            delta.x = target.x - position.x;
            delta.y = target.y - position.y;
            delta.z = target.z - position.z;
            angle = FUN_overlay_26__021987d4(owner, &delta);
            FUN_020bc5cc(&threshold, &DAT_overlay_26__0219b3f8, &DAT_overlay_26__0219b3f8);
            if ((((fxmul(delta.z, delta.z) + (fxmul(delta.x, delta.x) + fxmul(delta.y, delta.y)) < threshold) ? E1 : E0) != 0) && angle < 16384) {
                *(int *)(state + 76) = 1;
                FUN_02037924(*(void **)(self + 8));
            } else {
                if (FUN_02035b60(7) < 5) {
                    *(int *)(state + 76) = 2;
                } else {
                    *(int *)(state + 76) = 3;
                }
                FUN_02037924(state);
                return;
            }
        } else {
            *(int *)(state + 76) = 3;
            FUN_02037924(state);
        }
    }
    *(int *)(self + 12) -= FUN_02036c34(owner);
}
