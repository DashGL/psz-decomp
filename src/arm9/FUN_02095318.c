//cpp
// flags: -O4,s
struct Vec { union { struct { int x, y, z; }; int w[3]; }; };
struct Key { unsigned char b[4]; };
union Item { unsigned int w[4]; unsigned char b[16]; };

struct Self {
    virtual void v00(); virtual void v01(); virtual void v02(); virtual void v03();
    virtual void v04(); virtual void v05(); virtual void v06(); virtual void v07();
    virtual void v08(); virtual void v09(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36(); virtual void v37(); virtual void v38(); virtual void v39();
    virtual void v40(); virtual void v41(); virtual void v42(); virtual void v43();
    virtual void v44(); virtual void v45(); virtual void v46(); virtual void v47();
    virtual void v48(); virtual void v49(); virtual void v50(); virtual void v51();
    virtual void v52(); virtual void v53(); virtual void v54(); virtual void v55();
    virtual void v56(); virtual void v57(); virtual void v58(); virtual void v59();
    virtual void v60(); virtual void v61(); virtual void v62(); virtual void v63();
    virtual void v64(); virtual void v65(); virtual void v66(); virtual void v67();
    virtual void v68();
    virtual int v69(Item *);
};

extern "C" {
extern int data_020fb084;
extern int FUN_02084684(int, void *, void *);
extern int FUN_020525b8(void *, unsigned int, void *);
extern int FUN_0203aee0(void *);
extern int FUN_0203c154(void *);
extern int FUN_02086464(int, int);
extern int FUN_020863d0(int);
extern int FUN_02078198(int);
extern int FUN_0205256c(void *, int, void *);
extern int FUN_0203bcac(void *, int);
extern void FUN_0203c15c(void *, int, int);
extern void FUN_0203c17c(void *);
extern void FUN_020437d8(int, int, int, int, int *);
extern void FUN_02086180(int, int, int, int);
extern void FUN_0203c170(void *);
extern void FUN_0203666c(void *);
extern void FUN_02046d94(void *, int, int);
void FUN_02095318(char *self, int context);
}

void FUN_02095318(char *self, int context)
{
    unsigned int hit[17];
    unsigned int effect[25];
    Item item;
    unsigned char info[24];
    int xy[3];
    Vec pos;
    int damage;
    Key key;
    int limit, i, hitSomething, attack, state, oldBonus, owner, part, bonus, target, dealt;
    unsigned char index;

    limit = 1;
    item.b[0] = 255;
    item.b[1] = 255;
    item.b[2] = 255;
    item.b[3] = 255;
    for (i = 0; i < 3; i++)
        item.w[i + 1] = 0;
    if (((Self *)self)->v69(&item) == 1) {
        key = *(Key *)&item;
        if (FUN_02084684(*(int *)(self + 252), &key, info) == 1)
            limit = info[9];
    }
    if (!*(void **)(self + 592) || !*(unsigned char *)(*(char **)(self + 592) + 272))
        return;
    if (limit > *(unsigned char *)(*(char **)(self + 592) + 272))
        limit = *(unsigned char *)(*(char **)(self + 592) + 272);
    index = 0;
    hitSomething = 0;
    for (; index < limit; index = (unsigned char)(index + 1)) {
        if (FUN_020525b8(*(void **)(self + 592), index, hit) != 1 || !(hit[13] & 1))
            continue;
        owner = *(int *)(self + 252);
        attack = FUN_0203aee0(self);
        part = hit[12];
        target = hit[16];
        state = *(int *)(self + 576);
        oldBonus = FUN_0203c154(self);
        bonus = !oldBonus && state == 12 && FUN_02086464(owner, target);
        if (bonus)
            FUN_0203c15c(self, FUN_020863d0(target), data_020fb084);
        else if (!oldBonus)
            FUN_0203c17c(self);
        FUN_020437d8(owner, attack, target, part, &damage);
        dealt = !(damage <= 0);
        if (dealt != 0) {
            if (state == 11)
                FUN_02086180(owner, target, 1, part);
            else if (bonus) {
                FUN_0203c170(self);
                FUN_02086180(owner, target, 2, part);
            }
        }
        if (!FUN_02078198(target)) {
            if (FUN_0205256c(*(void **)(self + 592), 0, xy)) {
                FUN_0203666c(effect);
                pos.x = xy[0];
                pos.y = 4096;
                pos.z = xy[1];
                *(Vec *)(effect + 8) = pos;
                effect[17] = 1;
                effect[18] = 16;
                effect[19] = ~0U;
                effect[21] = 36;
                effect[22] = *(int *)(self + 252);
                FUN_02046d94(effect, 0, 0);
            }
            hitSomething = 1;
        }
    }
    self[513] = (signed char)self[513] + 1;
    if (hitSomething)
        *(int *)(self + 228) = -(unsigned short)FUN_0203bcac(self, item.b[1]);
}
