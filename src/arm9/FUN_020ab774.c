//cpp
// flags: -O4,s
struct Vector {
    union {
        struct { int x, y, z; };
        int w[3];
    };
};

struct RecAB774 {
    int f00[12];
    int f30;
    int f34[3];
    int f40;
};

struct MgrAB774 {
    unsigned char pad00[0x40];
    unsigned char *cams[9];
    int cur_cam;
};

struct ActorAB774 {
    unsigned char pad00[0x9c];
    int f9c;
    int fa0;
    int fa4;
    unsigned char pad0a8[0x1fc - 0xa8];
    unsigned char f1fc;
    unsigned char pad1fd[0x240 - 0x1fd];
    int f240;
    unsigned char pad244[0x7b8 - 0x244];
    int f7b8[2][4];
    unsigned char pad7d8[0x20];
    void *f7f8[7];
    unsigned char pad814[0xad0 - 0x814];
    unsigned char fad0[7];
    unsigned char padad7;
    int fad8[2][3];
    int faf0;
    int faf4;
    int faf8;
    int fafc;
    int fb00;
    RecAB774 fb04;
    unsigned char padb48[0xbb0 - 0xb48];
    RecAB774 fbb0[7];
    short fd8c;
    signed char fd8e;
    signed char fd8f;
};

struct ObjAB774 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9();
    virtual void v10(int, int *);
};

extern "C" {
extern MgrAB774 *DAT_02108c84;
extern void *DAT_02108cf4;
extern int DAT_020f5164[];

extern int FUN_020485b0(void *);
extern void FUN_02048578(void *, int);
extern int FUN_0203b41c(void *), FUN_0203ae60(void *);
extern unsigned char *FUN_020ac3b4(void *, int);
extern int FUN_0205256c(void *, unsigned int, void *), FUN_020525b8(void *, unsigned int, void *);
extern void FUN_0208e1f4(void *), FUN_020abd28(void *, const void *), FUN_020337d0(int, int *);
extern void FUN_020485c8(void *, int), FUN_02035408(void *, int, int, int), FUN_02048540(void *, const void *), FUN_02048458(void *);
extern void *FUN_020352a4(void *, int);
extern ObjAB774 *FUN_020352c0(void *);
extern int FUN_020447d4(void *, int, void *);
extern int FUN_020bc674(void *);
extern void *FUN_02077930(void);
extern int FUN_02077d50(void *), FUN_02077cb0(void *, int);
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on

void FUN_020ab774(ActorAB774 *s) {
    RecAB774 record;
    Vector position;
    int pair0[3];
    int pos1[3];
    int pair1[3];
    int pos2[3];
    Vector v0;
    Vector v1;
    Vector v2;
    int y_shared;
    int delta0[2];
    int y_local;
    int delta1[2];
    int delta2[2];
    int i;
    MgrAB774 *mgr;

    for (i = 0; i < 7; i++) {
        if (s->f7f8[i] != 0) {
            if (FUN_020485b0(s->f7f8[i]) == 0) {
                s->fad0[i] = 0;
            }
            FUN_02048578(s->f7f8[i], 0);
        }
    }

    s->fd8c = 0;
    s->fd8e = 0;
    s->fd8f = 0;
    s->faf0 = 0;
    s->faf4 = 0;
    s->faf8 = 0;

    mgr = DAT_02108c84;
    if (mgr != 0 && FUN_0203b41c(s) == 0 && FUN_0203ae60(s) == 0) {
        unsigned char *cam = mgr->cams[mgr->cur_cam];
        if (cam != 0) {
            unsigned char *slot;
            int found;
            position = *(Vector *)(cam + 0x18);
            y_shared = 0x1000;

            slot = FUN_020ac3b4(s, 3);
            if (slot != 0 && slot[0x110] != 0 &&
                FUN_0205256c(slot, 0, pair0) == 1 &&
                FUN_020525b8(slot, 0, &record) == 1 &&
                s->fd8c < 7 &&
                s->f7f8[s->fd8c] != 0) {
                delta0[0] = position.x - pair0[0];
                delta0[1] = position.z - pair0[1];
                FUN_0208e1f4(delta0);
                pair0[0] += delta0[0];
                pair0[1] += delta0[1];
                FUN_020abd28(&s->fbb0[s->fd8c], &record);
                {
                    int id0 = s->fbb0[s->fd8c].f40;
                    y_local = 0x1000;
                    FUN_020337d0(id0, &y_local);
                }
                FUN_020485c8(s->f7f8[s->fd8c], 5);
                FUN_02035408(&v0, pair0[0], y_local, pair0[1]);
                FUN_02048540(s->f7f8[s->fd8c], &v0);
                if (s->fad0[s->fd8c] == 0) {
                    FUN_02048458(s->f7f8[s->fd8c]);
                }
                FUN_02048578(s->f7f8[s->fd8c], 1);
                s->fad0[s->fd8c] = 1;
                s->fd8c++;
            }

            found = 0;
            if (s->f1fc == 2 && s->fd8c < 7) {
                ObjAB774 *obj = FUN_020352c0(FUN_020352a4(DAT_02108cf4, s->fafc));
                int sub1 = s->fb04.f30;
                if (obj != 0 && FUN_020447d4(obj, sub1, pos1) != 0) {
                    int dx = pos1[0] - s->f9c;
                    int dy = pos1[2] - s->fa4;
                    found = 1;
                    delta1[0] = dx;
                    delta1[1] = dy;
                    FUN_020bc674(delta1);
                    s->faf0 = pos1[0];
                    s->faf8 = pos1[2];
                    obj->v10(s->fb04.f30, &y_shared);
                    FUN_02035408(&v1, s->faf0, y_shared, s->faf8);
                    FUN_02048540(s->f7f8[s->fd8c], &v1);
                    if (s->fad0[s->fd8c] == 0) {
                        FUN_02048458(s->f7f8[s->fd8c]);
                    }
                    FUN_02048578(s->f7f8[s->fd8c], 1);
                    s->fad0[s->fd8c] = 1;
                    s->fd8c++;
                }
            }

            if (!found) {
                s->fafc = -1;
                s->fb00 = 0;
            }

            s->fd8e = 0;
            s->fd8f = 0;

            for (i = 0; i < 3; i++) {
                int page = FUN_02077d50(FUN_02077930());
                if (page >= 0 && page < 2) {
                    int kind = -1;
                    if (s->fad8[page][i] > -1 && s->fad8[page][i] < 3) {
                        kind = FUN_02077cb0(FUN_02077930(), s->fad8[page][i]);
                    }
                    slot = FUN_020ac3b4(s, s->fad8[page][i]);
                    if (slot != 0 && s->fd8c < 7 && kind >= 0 && kind < 0x2c && DAT_020f5164[kind] != 0) {
                        unsigned char count = slot[0x110];
                        unsigned char j;
                        FUN_0200c938(pair1, 0xc);
                        for (j = 0; j < count; j++) {
                            if (FUN_0205256c(slot, j, pair1) == 1 &&
                                s->fd8c < 7 &&
                                s->f7f8[s->fd8c] != 0) {
                                int ok = 1;
                                if (FUN_020525b8(slot, j, &record) == 1) {
                                    int k;
                                    for (k = 0; k < s->fd8c; k++) {
                                        if (record.f40 == s->fbb0[k].f40 ||
                                            record.f40 == s->fafc) {
                                            ok = 0;
                                            break;
                                        }
                                    }
                                    if (ok == 1) {
                                        int sub;
                                        unsigned int id;
                                        ObjAB774 *obj2;
                                        delta2[0] = position.x - pair1[0];
                                        delta2[1] = position.z - pair1[1];
                                        FUN_0208e1f4(delta2);
                                        if (s->fd8e == 0 && s->fafc == -1 && s->f240 != 0xf) {
                                            s->faf0 = pair1[0];
                                            s->faf8 = pair1[1];
                                            s->fafc = record.f40;
                                            s->fb00 = s->f7b8[page][s->fad8[page][i]];
                                            FUN_020abd28(&s->fb04, &record);
                                        }
                                        pair1[0] += delta2[0];
                                        pair1[1] += delta2[1];
                                        FUN_020abd28(&s->fbb0[s->fd8c], &record);
                                        switch (s->fad8[page][i]) {
                                        case 0:
                                            FUN_020485c8(s->f7f8[s->fd8c], 1);
                                            break;
                                        case 1:
                                            FUN_020485c8(s->f7f8[s->fd8c], 4);
                                            break;
                                        case 2:
                                            FUN_020485c8(s->f7f8[s->fd8c], 2);
                                            break;
                                        }
                                        sub = s->fbb0[s->fd8c].f30;
                                        id = s->fbb0[s->fd8c].f40;
                                        obj2 = FUN_020352c0(FUN_020352a4(DAT_02108cf4, id));
                                        if (obj2 != 0) {
                                            obj2->v10(sub, &y_shared);
                                            FUN_020447d4(obj2, sub, pos2);
                                            pair1[0] = pos2[0];
                                            pair1[1] = pos2[2];
                                        } else {
                                            FUN_020337d0(id, &y_shared);
                                        }
                                        FUN_02035408(&v2, pair1[0], y_shared, pair1[1]);
                                        FUN_02048540(s->f7f8[s->fd8c], &v2);
                                        if (s->fad0[s->fd8c] == 0) {
                                            FUN_02048458(s->f7f8[s->fd8c]);
                                        }
                                        FUN_02048578(s->f7f8[s->fd8c], 1);
                                        s->fad0[s->fd8c] = 1;
                                        s->fd8c++;
                                        s->fd8e++;
                                        if (s->fad8[page][i] == 0) {
                                            s->fd8f++;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
}
