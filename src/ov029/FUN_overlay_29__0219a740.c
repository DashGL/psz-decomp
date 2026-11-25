// flags: -O4,s
typedef struct { int x, y, z; } Vec;
#define I(p, o) (*(int *)((char *)(p) + (o)))
#define P(p, o) (*(void **)((char *)(p) + (o)))
#define V(p, o) (*(Vec *)((char *)(p) + (o)))
#define H(p, o) (*(unsigned short *)((char *)(p) + (o)))

extern int DAT_0219be74;
extern Vec DAT_0219be88;
extern int FUN_020370b8(void *, void *, Vec *);
extern int FUN_0205c7ac(const Vec *, const Vec *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_0203647c(Vec *, const Vec *, const Vec *);
extern void FUN_02036368(Vec *);
extern void FUN_020bbfbc(Vec *, unsigned short);
extern void FUN_02091cc0(Vec *, const Vec *, const int *);
extern void FUN_02036848(Vec *, const Vec *);
extern unsigned short FUN_0205c9e4(int, int);
extern void FUN_02043f30(void *, int, const Vec *);
extern void FUN_02043f94(void *, int, int);
extern void FUN_02043fb4(void *, int, int);
extern void FUN_02072750(void *, int, const Vec *);
extern void FUN_02072724(void *, int);
extern void FUN_0203666c(void *);
extern void FUN_02046d94(void *, int, int);
extern void FUN_02043ea4(void *, int, int);
extern void FUN_02075068(void *, int);
extern void FUN_0204bf88(void *);
extern int FUN_02072650(void *, int, int, int);
extern int FUN_0207281c(void *, int);
extern void *FUN_02075040(void *, int);

void FUN_overlay_29__0219a740(void *self) {
    Vec query, wanted, current, next, position, delta, side, step, offset;
    char desc[100];
    char *state;
    void *parent;
    int found, speed, turn, dot, limit;
    unsigned short yaw;
    void *effect;

    parent = P(self, 0x10);
    query.x = 0;
    query.y = 0;
    query.z = 4096;
    found = FUN_020370b8(self, P(parent, 0x54), &query);
    state = (char *)self + 0x11c;
    if (I(state, 0) <= 0) {
        return;
    }

    speed = DAT_0219be74;
    turn = (unsigned short)(10 * (150 - I(state, 0)));
    if (found == 1) {
        FUN_02035408(&delta, query.x - I(state, 0x10), query.y - I(state, 0x14), query.z - I(state, 0x18));
        FUN_0203647c(&wanted, &delta, &V(self, 0x38));
        wanted.y = 0;
        FUN_02036368(&wanted);
        current = V(state, 0x1c);
        FUN_02036368(&current);
        yaw = FUN_0205c9e4(current.x, current.z);
        side = current;
        FUN_020bbfbc(&side, 0x4000);
        if (FUN_0205c7ac(&side, &wanted) <= 0) {
            turn = 0x10000 - turn;
        }
        next.x = 0;
        next.y = 0;
        next.z = 4096;
        FUN_020bbfbc(&next, (unsigned short)(yaw + turn));
        dot = FUN_0205c7ac(&current, &wanted);
        limit = FUN_0205c7ac(&current, &next);
        if (limit > 0) { if (!(dot <= limit) != 0) next = wanted; }
        V(state, 0x1c) = next;
    }

    FUN_02091cc0(&step, &V(state, 0x1c), &speed);
    FUN_02036848(&V(state, 0x10), &step);
    FUN_02043f30(self, 1, &V(state, 0x10));
    yaw = FUN_0205c9e4(I(state, 0x1c), I(state, 0x24));
    FUN_02043f94(self, 1, yaw);
    FUN_02043fb4(self, 1, (unsigned short)(2000 * I(state, 0)));

    if (I(state, 0) == 120) {
        I(state, 4) = FUN_02072650(self, 1, 2, 1);
        FUN_02072750(self, I(state, 4), &V(state, 0x10));
    }
    if (I(state, 4) != -1) {
        FUN_02072750(self, I(state, 4), &V(state, 0x10));
        if (FUN_0207281c(self, I(state, 4))) {
            I(state, 0) = 3;
            FUN_02072724(self, I(state, 4));
            I(state, 4) = -1;
        }
    }
    if (I(state, 0) == 3) {
        FUN_0203666c(desc);
        I(desc, 0x54) = 40;
        I(desc, 0x58) = I(self, 0xc);
        V(desc, 0x20) = V(state, 0x10);
        FUN_02046d94(desc, 0, 0);
        FUN_02043ea4(self, 1, 0);
        FUN_02075068(self, I(state, 0xc));
        I(state, 0xc) = -1;
    }
    if (I(state, 0) > 3) {
        effect = FUN_02075040(self, I(state, 0xc));
        if (effect) {
            offset = DAT_0219be88;
            FUN_020bbfbc(&offset, yaw);
            FUN_0203647c(&position, &V(state, 0x10), &offset);
            V(effect, 0x5c) = position;
            H(effect, 0x6c) = 0xc000;
            FUN_0204bf88(effect);
            H(effect, 0x6a) = (unsigned short)(yaw + 0x4000);
            FUN_0204bf88(effect);
        }
    }
    if (I(state, 0) == 1) {
        if (I(state, 8) != -1) {
            FUN_02072724(self, I(state, 8));
            I(state, 8) = -1;
        }
        if (I(state, 4) != -1) {
            FUN_02072724(self, I(state, 4));
            I(state, 4) = -1;
        }
    }
    I(state, 0)--;
}
