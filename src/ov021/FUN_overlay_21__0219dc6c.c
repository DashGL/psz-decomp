//cpp
// flags: -O4,s
struct Vec { union { struct { int x, y, z; }; int w[3]; }; };
struct Query { int id, min, max; Vec origin; unsigned short angle, limit; unsigned flags; };

struct Actor {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41();
    virtual void v42(Vec *);
};

struct Camera {
    virtual void c0(); virtual void c1(); virtual void c2(); virtual void c3();
    virtual void c4(); virtual void c5(); virtual void c6(); virtual void c7();
    virtual void c8(); virtual void c9(); virtual void c10(); virtual void c11();
    virtual void c12(); virtual void c13(); virtual void c14(); virtual void c15();
    virtual void c16(); virtual void c17();
    virtual void c18(int, int);
};

extern "C" {
extern short DAT_020ed83c[];
extern int DAT_021a16ec[];
extern int UNK_021a16ec;
extern int DAT_021a16f0;
extern int DAT_021a16f4;
extern int DAT_021a16fc;
extern int DAT_021a1700;
extern int DAT_021a1704;
extern char *DAT_02108d04;
extern Vec DAT_020fc958;
extern int DAT_020ed09c;
extern char *DAT_02108c84;

extern int FUN_overlay_21__0219a7c4(void *, Vec *);
extern int FUN_overlay_21__02199360(void *, Vec *, int, int);
extern void FUN_02040c0c(void *, int, int, int, int);
extern void FUN_02091cc0(Vec *, Vec *, int *);
extern void FUN_02036848(Vec *, Vec *);
extern void FUN_0204bf88(void *);
extern char *FUN_02075040(void *, int);
extern int FUN_020865fc(Query *);
extern int FUN_020866b4(int, Vec *);
extern int FUN_02074e9c(void *, int, int, int);
extern int FUN_02040d2c(void *, int);
extern void FUN_02035408(Vec *, int, int, int);
#pragma thumb off
extern void FUN_0205c8cc(Vec *, Vec *);
#pragma thumb on
extern void FUN_02092654(Vec *, int *);
extern void FUN_02090f74(short *, void *, Vec *, int);
extern void *FUN_02090c20(void);
extern void FUN_020c1d7c(int, int, int, int, int);
extern void FUN_020c193c(int, int, int, int, int);
extern void FUN_020bbfbc(Vec *, int);
extern void FUN_0203647c(Vec *, Vec *, Vec *);
extern void FUN_02036384(void *, Vec *);
extern void FUN_02037924(void *);
extern void FUN_overlay_21__021990dc(void *, int);
extern void FUN_02075068(void *, int);

#define W(p, n) (*(int *)((char *)(p) + (n)))
#define U(p, n) (*(unsigned *)((char *)(p) + (n)))
#define H(p, n) (*(unsigned short *)((char *)(p) + (n)))
#define V(p, n) (*(Vec *)((char *)(p) + (n)))
#define FWD(v, a) do { (v).x = DAT_020ed83c[2 * ((a) >> 4)]; (v).y = 0; (v).z = DAT_020ed83c[2 * ((a) >> 4) + 1]; } while (0)

void FUN_overlay_21__0219dc6c(char *self)
{
    Vec target1;
    Vec target2;
    Vec target3;
    Vec position3;
    Vec forward3;
    Query query;
    Vec actorPosition;
    Vec delta;
    Vec target45;
    Vec forward6;
    Vec position6a;
    Vec scaled6b;
    Vec position6c;
    Vec move6c;
    Vec scaled10;
    Vec position_sw2;
    Vec forward_sw2;
    Vec velocity_sw2;
    Vec scaled3;
    Vec move6a;
    Vec scaled6c;
    Vec scaled_sw2;
    Vec move6b;
    Vec move10;
    short screen3[2];
    short screen6a[2];
    short screen6c[2];

    char *owner = *(char **)(self + 4);
    char *context = *(char **)(self + 8);
    char *effect, *actor, *manager, *tracks;
    Camera *camera;
    unsigned short angle;
    int i, ready, id;

    switch (U(self, 12)) {
    case 0:
        tracks = *(char **)(owner + 236);
        for (i = 0; i < 4; i++) {
            W(tracks + 188 * i, 24) = 3;
        }
        W(self, 12) = 1;
        W(self, 28) = 0;
        break;
    case 1:
        if (U(self, 28) > 30) {
            if (FUN_overlay_21__0219a7c4(context, &target1)) {
                ready = FUN_overlay_21__02199360(owner, &target1, 512, 0);
            } else {
                ready = 1;
            }
            if (ready) {
                FUN_02040c0c(owner, 0, 12, 4096, 0);
                W(self, 12) = 2;
            }
        }
        break;
    case 2:
        if (FUN_overlay_21__0219a7c4(context, &target2)) {
            FUN_overlay_21__02199360(owner, &target2, 128, 0);
        }
        break;
    case 3:
        if (FUN_overlay_21__0219a7c4(context, &target3)) {
            FUN_overlay_21__02199360(owner, &target3, 128, 0);
            position3 = V(owner, 252);
            angle = H(owner, 264);
            FWD(forward3, angle);
            FUN_02091cc0(&scaled3, &forward3, &DAT_021a16f4);
            FUN_02036848(&position3, &scaled3);
            position3.y = DAT_021a16ec[3];
            effect = FUN_02075040(owner, W(self, 32));
            if (effect) {
                V(effect, 92) = position3;
                H(effect, 106) = angle;
                FUN_0204bf88(effect);
            }
            actor = DAT_02108d04;
            id = W(actor, 252);
            query.id = -1;
            query.min = 0;
            query.max = 0;
            query.origin = DAT_020fc958;
            query.angle = 0;
            query.limit = 0;
            query.flags = 0;
            query.origin = position3;
            query.angle = angle;
            query.limit = 8192;
            query.flags |= 4;
            query.min = 102400;
            query.flags |= 1;
            query.max = 1638400;
            query.flags |= 2;
            query.id = id;
            if (FUN_020865fc(&query) && FUN_020866b4(id, &actorPosition)) {
                FUN_02035408(&delta,
                    (int)((unsigned)position3.x - (unsigned)actorPosition.x),
                    (int)((unsigned)position3.y - (unsigned)actorPosition.y),
                    (int)((unsigned)position3.z - (unsigned)actorPosition.z));
                delta.y = 0;
                if (delta.x || delta.y || delta.z) {
                    FUN_0205c8cc(&delta, &delta);
                }
                FUN_02092654(&delta, &UNK_021a16ec);
                ((Actor *)actor)->v42(&delta);
            }
            FUN_02090f74(screen3, FUN_02090c20(), &position3, 0);
            FUN_020c1d7c(26, 11, 0, screen3[1], 4);
        }
        break;
    case 4:
    case 5:
        if (FUN_overlay_21__0219a7c4(context, &target45)) {
            FUN_overlay_21__02199360(owner, &target45, 48, 0);
        }
        break;
    case 6:
        if (U(self, 28) == 20) {
            angle = H(owner, 68);
            FWD(forward6, angle);
            move6a = forward6;
            FUN_020bbfbc(&move6a, 32768);
            V(self, 16) = move6a;
            position6a = V(owner, 252);
            FUN_02090f74(screen6a, FUN_02090c20(), &position6a, 0);
            FUN_020c1d7c(26, 4, 0, screen6a[1], 4);
        }
        if (U(self, 28) >= 20 && U(self, 28) < 35) {
            FUN_02091cc0(&scaled6b, (Vec *)(self + 16), &DAT_021a1704);
            FUN_0203647c(&move6b, (Vec *)(owner + 56), &scaled6b);
            FUN_02036384(owner, &move6b);
        }
        if (U(self, 28) == 35) {
            FUN_02040c0c(owner, 0, 18, 4096, 0);
            W(self, 12) = 7;
            position6c = V(owner, 252);
            FUN_02090f74(screen6c, FUN_02090c20(), &position6c, 1);
            FUN_020c193c(26, 14, screen6c[0], screen6c[1], 4);
            W(self, 36) = FUN_02074e9c(owner, 14, 0, 0);
            if (W(self, 36) != DAT_020ed09c) {
                FUN_02091cc0(&scaled6c, (Vec *)(self + 16), &DAT_021a16f0);
                FUN_0203647c(&move6c, &position6c, &scaled6c);
                effect = FUN_02075040(owner, W(self, 36));
                if (effect) {
                    V(effect, 92) = move6c;
                    U(effect, 228) |= 16384;
                }
            }
            manager = DAT_02108c84;
            if (manager) {
                camera = *(Camera **)(manager + 92);
                if (camera) {
                    camera->c18(12288, 10);
                }
            }
        }
        break;
    case 10:
        if (U(self, 28) > 25) {
            W(context, 128) = 1;
            FUN_02037924(context);
        } else {
            FUN_02091cc0(&scaled10, (Vec *)(self + 16), &DAT_021a1700);
            FUN_0203647c(&move10, (Vec *)(owner + 56), &scaled10);
            FUN_02036384(owner, &move10);
        }
        break;
    }

    if (FUN_02040d2c(owner, 0)) {
        switch (U(self, 12)) {
        case 2:
            FUN_02040c0c(owner, 0, 13, 4096, 0);
            FUN_overlay_21__021990dc(owner, 1);
            W(self, 32) = FUN_02074e9c(owner, 2, 0, 0);
            position_sw2 = V(owner, 56);
            angle = H(owner, 68);
            FWD(forward_sw2, angle);
            FUN_02091cc0(&scaled_sw2, &forward_sw2, &DAT_021a16f4);
            FUN_02036848(&position_sw2, &scaled_sw2);
            position_sw2.y = DAT_021a16ec[3];
            effect = FUN_02075040(owner, W(self, 32));
            if (effect) {
                V(effect, 92) = position_sw2;
                H(effect, 106) = angle;
                FUN_0204bf88(effect);
                U(effect, 228) |= 2;
                velocity_sw2 = V(effect, 80);
                FUN_02092654(&velocity_sw2, &DAT_021a16fc);
                V(effect, 80) = velocity_sw2;
            }
            W(self, 12) = 3;
            break;
        case 4:
            FUN_02040c0c(owner, 0, 16, 4096, 0);
            W(self, 12) = 5;
            break;
        case 6:
            FUN_02040c0c(owner, 0, 18, 4096, 0);
            W(self, 12) = 7;
            break;
        case 7:
            FUN_02040c0c(owner, 0, 2, 4096, 0);
            W(self, 12) = 8;
            break;
        case 9:
            FUN_02040c0c(owner, 0, 1, 4096, 0);
            FUN_overlay_21__021990dc(owner, 0);
            FUN_020bbfbc((Vec *)(self + 16), 32768);
            W(self, 12) = 10;
            break;
        }
        W(self, 28) = 0;
    } else if (W(self, 12) == 3 && U(self, 28) > 90) {
        FUN_02040c0c(owner, 0, 15, 4096, 0);
        W(self, 12) = 4;
        FUN_02075068(owner, W(self, 32));
        W(self, 32) = -1;
        W(self, 28) = 0;
    } else if (W(self, 12) == 5 && U(self, 28) > 15) {
        FUN_02040c0c(owner, 0, 17, 4096, 0);
        W(self, 12) = 6;
        W(self, 28) = 0;
    } else if (W(self, 12) == 8 && U(self, 28) > 180) {
        FUN_02040c0c(owner, 0, 4, 4096, 0);
        W(self, 12) = 9;
        W(self, 28) = 0;
    }
    U(self, 28)++;
}
}
