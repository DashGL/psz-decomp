//cpp
// flags: -O4,s

struct Vec { union { struct { int x, y, z; }; int w[3]; }; };
typedef struct { unsigned char flags, pad[3]; int target; } Command;
typedef struct {
    unsigned char pad[0x34];
    unsigned int flags;
    unsigned int pad2[2];
    int linked;
} EntryBody;
typedef struct {
    int pad[2];
    EntryBody body;
} Entry;

class Actor_0219f048 {
public:
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

extern "C" char *DAT_02108d04;
extern "C" const short DAT_020ed83c[];
extern "C" int DAT_overlay_21__021a1924[];
extern "C" int DAT_overlay_21__021a1928;
extern "C" int DAT_021a1924;

#pragma thumb off
extern "C" void *FUN_02001540(void *, int, unsigned);
extern "C" void FUN_0205c8cc(Vec *, Vec *);
extern "C" void FUN_0200c938(void *, unsigned);
#pragma thumb on

extern "C" void FUN_02040c0c(void *, int, int, int, int);
extern "C" void FUN_overlay_21__021990dc(void *, int);
extern "C" int FUN_020866b4(int, Vec *);
extern "C" int FUN_0203b41c(void *);
extern "C" int FUN_0203ae60(void *);
extern "C" int FUN_02075090(void *);
extern "C" int FUN_02040d2c(void *, int);
extern "C" void *FUN_020be450(void);
extern "C" void *FUN_02090c20(void);
extern "C" Entry *FUN_020be5ec(void *, int);
extern "C" char *FUN_02075040(void *, int);
extern "C" void FUN_02035408(Vec *, int, int, int);
extern "C" void FUN_02091cc0(Vec *, Vec *, int *);
extern "C" void FUN_0203647c(Vec *, Vec *, Vec *);
extern "C" void FUN_overlay_21__02199ef4(void *, void *);
extern "C" void FUN_02090f74(short *, void *, Vec *, int);
extern "C" void FUN_020c1d7c(int, int, int, int, int);
extern "C" void FUN_02037924(void *);
extern "C" int FUN_02074e9c(void *, int, int, int);
extern "C" int FUN_020beccc(void *, void *, int, void *, void *);
extern "C" void FUN_0204bf88(void *);
extern "C" void FUN_0204b4d4(void *);
extern "C" void FUN_020c0488(void *);
extern "C" void FUN_020c0484(void *, int);
extern "C" void FUN_020be4f8(void *, int, int);
extern "C" void FUN_020bf6e0(void *, void *, int, int, unsigned short);
extern "C" void FUN_020be5d4(void *, int, int, void *);

#define W(p,n) (*(int *)((char *)(p)+(n)))
#define U(p,n) (*(unsigned *)((char *)(p)+(n)))

extern "C" void FUN_overlay_21__0219f048(char *self) {
    char *owner = *(char **)(self + 4);
    char *context = *(char **)(self + 8);
    char *actor, *effect, *tracks;
    Entry *entry;
    Vec origin, target, direction, origin2, forward, position;
    unsigned descriptor[13], properties[3];
    Vec center3;
    unsigned shape[9];
    Vec scaled, scaled2;
    Command command;
    short screen[2];
    unsigned key[2];
    int center2[2];
    int linked, id, scale, i;
    unsigned short angle;

    switch (W(self, 12)) {
    case 0:
        tracks = *(char **)(owner + 236);
        for (i = 0; i < 2; i++) {
            if (W(tracks + 188 * i, 20) != 12) {
                W(tracks + 188 * i, 24) = 3;
            }
        }
        FUN_02040c0c(owner, 0, 12, 4096, 0);
        W(self, 12) = 1;
        W(self, 16) = 0;
        break;
    case 2:
        origin = *(Vec *)(owner + 56);
        actor = DAT_02108d04;
        if (actor) {
            id = W(actor, 252);
            if (FUN_020866b4(id, &target) && !FUN_0203b41c(actor)) {
                linked = -1;
                entry = FUN_020be5ec(FUN_020be450(), W(self, 28));
                if (entry) {
                    EntryBody *body = &entry->body;
                    if (body->flags & 1) {
                        linked = body->linked;
                    }
                }
                FUN_02035408(&direction, origin.x - target.x, origin.y - target.y, origin.z - target.z);
                direction.y = 0;
                if (!W(self, 20)) {
                    if (U(self, 16) > 15 && linked == id && !FUN_0203ae60(actor)) {
                        FUN_02001540(&command, 0, 8);
                        command.target = -1;
                        FUN_02001540(&command, 0, 8);
                        command.target = -1;
                        command.flags = 1;
                        command.target = id;
                        FUN_overlay_21__02199ef4(context, &command);
                        W(self, 20) = 1;
                    } else {
                        if (direction.x || direction.y || direction.z) {
                            FUN_0205c8cc(&direction, &direction);
                        }
                        scale = DAT_overlay_21__021a1924[3];
                        direction.x = (int)(((long long)direction.x * scale + 2048) >> 12);
                        direction.y = (int)(((long long)direction.y * scale + 2048) >> 12);
                        direction.z = (int)(((long long)direction.z * scale + 2048) >> 12);
                        ((Actor_0219f048 *)actor)->v42(&direction);
                    }
                }
            }
        }
        FUN_02090f74(screen, FUN_02090c20(), &origin, 1);
        FUN_020c1d7c(26, 11, screen[0], screen[1], 4);
        break;
    case 3:
        if (FUN_02075090(owner)) {
            FUN_02037924(context);
        }
        break;
    }

    if (FUN_02040d2c(owner, 0)) {
        if (W(self, 12) == 1) {
            FUN_02040c0c(owner, 0, 13, 4096, 0);
            FUN_overlay_21__021990dc(owner, 1);
            W(self, 24) = FUN_02074e9c(owner, 2, 0, 0);
            origin2 = *(Vec *)(owner + 56);
            angle = *(unsigned short *)(owner + 68);
            forward.x = DAT_020ed83c[2 * (angle >> 4)];
            forward.y = 0;
            forward.z = DAT_020ed83c[2 * (angle >> 4) + 1];
            FUN_02091cc0(&scaled, &forward, &DAT_overlay_21__021a1928);
            FUN_0203647c(&position, &origin2, &scaled);
            position.y = DAT_overlay_21__021a1924[2];
            effect = FUN_02075040(owner, W(self, 24));
            if (effect) {
                *(Vec *)(effect + 92) = position;
                *(unsigned short *)(effect + 106) = angle;
                FUN_0204bf88(effect);
                U(effect, 228) |= 2;
            }
            FUN_020c0488(descriptor);
            FUN_020c0484(descriptor, 8);
            FUN_0200c938(properties, 12);
            properties[0] = 1;
            properties[1] = 1;
            FUN_0200c938(key, 8);
            key[1] = U(owner, 12);
            W(self, 28) = FUN_020beccc(FUN_020be450(), descriptor, 1, properties, key);
            FUN_020be4f8(FUN_020be450(), W(self, 28), 2);
            FUN_02091cc0(&scaled2, &forward, &DAT_021a1924);
            FUN_0203647c(&center3, &origin2, &scaled2);
            center2[0] = center3.x;
            center2[1] = center3.z;
            FUN_020bf6e0(shape, center2, 77824, 4096, angle);
            FUN_020be5d4(FUN_020be450(), W(self, 28), 0, shape);
            W(self, 12) = 2;
        }
        W(self, 16) = 0;
    } else if (W(self, 12) == 2 && U(self, 16) > 150) {
        W(context, 128) = 7;
        W(self, 12) = 3;
        effect = FUN_02075040(owner, W(self, 24));
        if (effect) FUN_0204b4d4(effect);
        W(self, 16) = 0;
    } else if (W(self, 12) == 2 && *(signed char *)(context + 268) == 1) {
        W(context, 140) = W(context, 272);
        W(context, 128) = 8;
        W(self, 12) = 3;
        effect = FUN_02075040(owner, W(self, 24));
        if (effect) FUN_0204b4d4(effect);
        W(self, 16) = 0;
    }
    U(self, 16)++;
}
