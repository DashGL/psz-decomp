// flags: -O4,s
typedef unsigned short u16;
typedef unsigned int u32;
typedef long long s64;

enum { E0 = 0, E1 = 1 };

typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    int m[9];
} Mat;

typedef struct {
    Vec pos;
    int speed;
    int pad10;
    u16 yaw;
    u16 spin;
    int bank;
    int target_id;
    int f20;
    int timer;
    int returning;
    u16 turn_rate;
    u16 pad2e;
    int effect_id;
} State;

typedef struct {
    int pad00[3];
    int owner_id;
    int pad10[10];
    Vec home;
    int pad44[36];
    State *state;
} Self;

typedef struct {
    char pad00[0x5c];
    Vec pos;
    int pad68[2];
    Mat mtx;
} Effect;

extern int DAT_0219b140[];
extern int DAT_0219b040[];
extern int UNK_0219b040[];
extern int DAT_0219b044;
extern int DAT_020fc988;
extern short DAT_020ed83c[];

extern int FUN_02036c34(void *);
extern int FUN_020866b4(int, Vec *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02036348(Vec *, Vec *, Vec *);
extern void FUN_02037390(int *, Vec *);
extern void FUN_overlay_30__0219a340(void *);
extern void FUN_overlay_30__0219958c(void *, int);
extern void FUN_02043f30(void *, int, Vec *);
extern void FUN_02072750(void *, int, Vec *);
extern void FUN_0205abac(Mat *, int, int);
extern void FUN_0205abc8(Mat *, int, int);
extern void FUN_02043f48(void *, int, Mat *);
extern Effect *FUN_02075040(void *, int);

#pragma thumb off
extern void FUN_0205c8cc(Vec *, Vec *);
extern u16 FUN_0205cc08(int);
extern void FUN_0205aa80(Mat *);
extern int FUN_02000ec4(int);
extern void FUN_0205aed0(Mat *, Mat *, Mat *);
#pragma thumb on

#define FX_MUL(a, b) ((int)(((s64)(a) * (b) + 0x800LL) >> 12))

void FUN_overlay_30__02199f60(Self *self)
{
    Vec target;
    Vec direction;
    Mat result;
    Mat spin;
    Mat lean;
    Mat heading;
    Vec distance;
    int delta = FUN_02036c34(self);
    State *state = self->state;
    int length1;
    int length2;
    int speed;
    int index;
    int bank;
    Effect *effect;

    if (state->returning) {
        if (!(DAT_0219b140[0] & 1)) {
            DAT_0219b040[1] = 0x3000;
            DAT_0219b140[0] |= 1;
        }
        if (!(DAT_0219b140[1] & 1)) {
            FUN_020bc5cc(UNK_0219b040, &DAT_0219b044, &DAT_0219b044);
            DAT_0219b140[1] |= 1;
        }
        FUN_02036348(&distance, &state->pos, &self->home);
        FUN_02037390(&length1, &distance);
        if ((length1 <= DAT_0219b040[0]) ? E1 : E0) {
            FUN_overlay_30__0219a340(self);
            FUN_overlay_30__0219958c(self, 1);
            return;
        }
    } else {
        state->timer -= delta;
        if ((state->timer <= DAT_020fc988) ? E1 : E0) {
            state->target_id = self->owner_id;
            state->returning = 1;
        }
    }

    if (FUN_020866b4(state->target_id, &target)) {
        u16 oldyaw = state->yaw;
        FUN_02036348(&direction, &target, &state->pos);
        direction.y = 0;
        FUN_02037390(&length2, &direction);
        if ((length2 > DAT_020fc988) ? E1 : E0) {
            u16 yaw;
            u16 diff;
            int positive;
            u16 turn;
            if (direction.x != 0 || direction.y != 0 || direction.z != 0) {
                FUN_0205c8cc(&direction, &direction);
            }
            yaw = FUN_0205cc08(direction.z);
            if (direction.x < 0) {
                yaw = (u16)(0x10000 - yaw);
            }
            diff = (u16)(yaw - oldyaw);
            positive = 1;
            if (diff >= 0x8000) {
                diff = (u16)(0x10000 - diff);
                positive = 0;
            }
            if (state->returning) {
                state->turn_rate += 60;
                if (state->turn_rate > 0x71c) {
                    state->turn_rate = 0x71c;
                }
            }
            turn = (u16)(((s64)state->turn_rate * delta + 0x800LL) >> 12);
            if (diff >= turn) {
                if (positive) {
                    yaw = (u16)(oldyaw + turn);
                    state->bank -= 182;
                } else {
                    yaw = (u16)(oldyaw - turn);
                    state->bank += 182;
                }
            }
            state->yaw = yaw;
        }
    }

    index = ((int)state->yaw >> 4) * 2;
    FUN_020bc5cc(&speed, &state->speed, &delta);
    { int s = DAT_020ed83c[index]; s64 b = speed; state->pos.x += (int)(((s64)s * b + 0x800LL) >> 12); s = DAT_020ed83c[index + 1]; state->pos.z += (int)(((s64)s * b + 0x800LL) >> 12); }

    FUN_02043f30(self, 3, &state->pos);
    FUN_02072750(self, state->f20, &state->pos);
    FUN_0205aa80(&result);

    state->spin += FX_MUL(delta, 0x1c71);
    index = ((int)state->spin >> 4) * 2;
    FUN_0205abac(&spin, DAT_020ed83c[index], DAT_020ed83c[index + 1]);

    bank = FX_MUL(state->bank, 0xf33);
    state->bank = bank;
    if (FUN_02000ec4(bank) > 0x1555) {
        if (bank > 0) {
            state->bank = 0x1555;
        } else {
            state->bank = -0x1555;
        }
    }

    index = ((int)(u16)state->bank >> 4) * 2;
    FUN_0205abc8(&lean, DAT_020ed83c[index], DAT_020ed83c[index + 1]);

    index = ((int)state->yaw >> 4) * 2;
    FUN_0205abac(&heading, DAT_020ed83c[index], DAT_020ed83c[index + 1]);

    FUN_0205aed0(&spin, &lean, &result);
    FUN_0205aed0(&result, &heading, &result);
    FUN_02043f48(self, 3, &result);

    effect = FUN_02075040(self, state->effect_id);
    if (effect) {
        effect->pos = state->pos;
        effect->mtx = result;
    }
}
