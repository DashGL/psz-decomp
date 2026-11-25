//cpp
// flags: -O4,s
struct Vec3 { union { struct { int x, y, z; }; int w[3]; }; };
struct Query {
    int target, min, max;
    Vec3 position;
    unsigned short yaw, angle;
    unsigned int flags;
};
struct Target {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16();
    virtual void v17(); virtual void v18(); virtual void v19(); virtual void v20();
    virtual void v21(); virtual void v22(); virtual void v23(); virtual void v24();
    virtual void v25(); virtual void v26(); virtual void v27(); virtual void v28();
    virtual void v29(); virtual void v30(); virtual void v31(); virtual void v32();
    virtual void v33(); virtual void v34(); virtual void v35(); virtual void v36();
    virtual void v37(); virtual void v38(); virtual void v39(); virtual void v40();
    virtual void v41();
    virtual void v42(Vec3 *);
    unsigned char pad[0x98];
    Vec3 pos;
};
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define H(p,o) (*(unsigned short *)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))
extern "C" {
extern int DAT_0219fd38[], DAT_0219fd3c, DAT_0219fd40;
extern Vec3 DAT_020fc958;
extern void *DAT_02108cf4;
extern void *FUN_020352a4(void *, int);
extern Target *FUN_02039200(void *);
extern int FUN_02036c34(void *);
extern int FUN_020865fc(Query *);
extern int FUN_0205c86c(Vec3 *);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02037924(void *);
extern void FUN_02036348(Vec3 *, Vec3 *, const Vec3 *);
extern void FUN_02036368(Vec3 *);
extern void FUN_020bc5cc(int *, int *, int *);
extern void FUN_020bc610(int *, int *, int *);
void FUN_overlay_20__0219d708(void *self);
}

static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}

void FUN_overlay_20__0219d708(void *self)
{
    Query query;
    Vec3 targetpos;
    Vec3 direction;
    int strength;
    int weighted;
    int remaining;
    void *actor = P(self, 4);

    switch (I(self, 0xc)) {
    case 0: {
        unsigned short yaw = H(actor, 0x44);
        unsigned short desired = H(self, 0x10);
        int positive = 1;
        unsigned short difference = (unsigned short)(desired - yaw);
        int delta;
        unsigned short step;
        if (difference >= 0x8000) {
            difference = (unsigned short)(65536 - difference);
            positive = 0;
        }
        delta = FUN_02036c34(actor);
        step = (unsigned short)(((long long)delta * 182 + 0x800) >> 12);
        if (difference < step) {
            yaw = H(self, 0x10);
            FUN_02040c0c(actor, 0, 13, 0x1000, 10);
            I(self, 0xc) = 1;
        } else if (positive) {
            yaw += step;
        } else {
            yaw -= step;
        }
        H(actor, 0x44) = yaw;
        break;
    }
    case 1: {
        int delta = FUN_02036c34(actor);
        I(self, 0x14) += delta;
        int done = (I(self, 0x14) > I(self, 0x18)) ? 1 : 0;
        if (done) {
            FUN_02037924(P(self, 8));
            break;
        }
        const Vec3 *actorPos = (const Vec3 *)actor;
        actorPos = (const Vec3 *)((char *)actor + 0x38);
        unsigned short yaw = H(actor, 0x44);
        Target *target;
        for (int i = 0; i <= 3; i++) {
            target = FUN_02039200(FUN_020352a4(DAT_02108cf4, i));
            if (!target) continue;
            int ok1 = (target->v16() == 1) ? 1 : 0;
            if (!ok1) {
                int ok3 = (target->v16() == 3) ? 1 : 0;
                if (!ok3) continue;
            }
            query.target = -1;
            query.min = 0;
            query.max = 0;
            query.position = DAT_020fc958;
            query.yaw = 0;
            query.angle = 0;
            query.flags = 0;
            query.position = *actorPos;
            query.yaw = (unsigned short)yaw;
            query.angle = 0x1aaa;
            query.flags |= 4;
            query.min = fx_mul(DAT_0219fd38[3], DAT_0219fd38[3]);
            query.flags |= 1;
            query.max = fx_mul(DAT_0219fd38[2], DAT_0219fd38[2]);
            query.target = i;
            query.flags |= 2;
            if (!FUN_020865fc(&query)) continue;
            const Vec3 *tp = &target->pos;
            targetpos.x = tp->x;
            targetpos.y = tp->y;
            targetpos.z = tp->z;
            FUN_02036348(&direction, &targetpos, actorPos);
            int distance = FUN_0205c86c(&direction);
            direction.y = 0;
            FUN_02036368(&direction);
            remaining = DAT_0219fd38[2] - distance;
            FUN_020bc5cc(&weighted, &DAT_0219fd3c, &remaining);
            FUN_020bc610(&strength, &weighted, &DAT_0219fd40);
            int cap = (strength > *(volatile int *)&DAT_0219fd38[0]) ? 1 : 0;
            if (cap) strength = *(volatile int *)&DAT_0219fd38[0];
            direction.x = fx_mul(direction.x, strength);
            direction.y = fx_mul(direction.y, strength);
            direction.z = fx_mul(direction.z, strength);
            target->v42(&direction);
        }
        break;
    }
    }
}
