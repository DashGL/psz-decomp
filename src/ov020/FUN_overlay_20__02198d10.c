// flags: -O4,s
typedef struct { int x, y, z; } Vec3;
typedef struct { int v; } Fx;
#define I(p, o) (*(int *)((char *)(p) + (o)))
#define P(p, o) (*(void **)((char *)(p) + (o)))
#define H(p, o) (*(unsigned short *)((char *)(p) + (o)))
#define V(p, o) (*(Vec3 *)((char *)(p) + (o)))

extern int DAT_0219f944, DAT_020fc988;
extern void FUN_020bc5e8(int *, const int *);
extern int FUN_0205c86c(const Vec3 *);
extern void FUN_02036368(Vec3 *);
extern unsigned short FUN_0205cc08(int);
extern void FUN_020bc658(void *, const int *);
extern unsigned int FUN_02009c84(Fx);
extern unsigned int FUN_02009d14(unsigned int, unsigned int);
extern int FUN_02009c50(unsigned int);

void FUN_overlay_20__02198d10(unsigned char *actor) {
    Vec3 direction;
    int scaled, gap_scale, absolute;
    Fx scaled_abs;
    unsigned short current, target, gap, step;
    int forward;
    void *state;

    FUN_020bc5e8(&I(P(actor, 0xd4), 0x64), &DAT_0219f944);
    state = P(actor, 0xd4);
    if ((!((I(state, 0) & 1) == 0) != 0) && (!(FUN_0205c86c(&V(state, 0xc)) <= DAT_020fc988) != 0)) {
        current = H(actor, 0x44);
        direction = V(P(actor, 0xd4), 0xc);
        direction.y = 0;
        FUN_02036368(&direction);
        target = FUN_0205cc08(direction.z);
        if (direction.x < 0) {
            target = (unsigned short)(0x10000 - target);
        }
        gap = (unsigned short)(target - current);
        forward = 1;
        if (gap > 0x8000) {
            gap = (unsigned short)(0x10000 - gap);
            forward = 0;
        }
        if (forward != 0) {
            I(P(actor, 0xd4), 0x64) += I(P(actor, 0xd4), 0x68);
        } else {
            I(P(actor, 0xd4), 0x64) -= I(P(actor, 0xd4), 0x68);
        }
        state = P(actor, 0xd4);
        FUN_020bc658(&absolute, &I(state, 0x64));
        if (!(absolute <= I(state, 0x6c)) != 0) {
            state = P(actor, 0xd4);
            if (!(I(state, 0x64) >= DAT_020fc988) != 0) {
                I(state, 0x64) = -I(state, 0x6c);
            } else {
                I(state, 0x64) = I(state, 0x6c);
            }
        }
        scaled = I(P(actor, 0xd4), 0x64);
        gap_scale = (int)gap >> 3;
        FUN_020bc5e8(&scaled, &gap_scale);
        FUN_020bc658(&scaled_abs, &scaled);
        step = (unsigned short)((unsigned int)FUN_02009c50(FUN_02009d14(0x43360b60, FUN_02009c84(scaled_abs))) >> 12);
        if (step > gap) {
            current = target;
        } else if (forward != 0) {
            current += step;
        } else {
            current -= step;
        }
        H(actor, 0x44) = current;
    }
}
