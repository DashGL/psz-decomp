//cpp
// flags: -O4,s
struct Row {
    int maximum;
    int current;
    unsigned int id : 3;
    unsigned int status : 2;
    unsigned int mode : 2;
    unsigned int : 25;
    int participant;
    int value;
    int active[2];
    unsigned char name[16];
};

struct Summary {
    Row row[3];
    int count;
};

struct Vec {
    int x, y, z;
};

struct Actor {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void v10();
    virtual void v11();
    virtual void v12();
    virtual void v13();
    virtual void v14();
    virtual void v15();
    virtual int v16();

    bool isType3() { return v16() == 3; }
};

struct Slot {
    char pad0[0x28];
    int id;
    Actor *actor;
    char pad1[4];
    unsigned char f8;
    unsigned char f9;
    char pad2[0x94 - 0x36];
};

struct TimerEntry {
    int a;
    int b;
    unsigned char c;
    unsigned char d;
    short timer;
};

struct Mgr {
    char pad0[0x60];
    Slot slots[4];
    TimerEntry timers[8];
};

extern "C" {
extern Mgr *DAT_0211a52c;
extern char DAT_0211a51c[];
extern int FUN_02073218(int);
extern int FUN_02085488(int, int);
extern int FUN_02084be8(void *);
extern int FUN_02085438(void);
extern int FUN_02085450(void);
extern int FUN_0208546c(void);
extern int FUN_020390d4(void *);
extern int FUN_02085880(int);
extern int FUN_0207f770(void *);
extern int FUN_0207f79c(void *, int);
extern Actor *FUN_02085640(void);
extern Actor *FUN_0208555c(int);
extern void *FUN_02077930(void);
extern void *FUN_overlay_4__02129ed4(void);
extern void FUN_02077794(Summary *);
extern void FUN_020c4560(void *);
extern void FUN_020743fc(void *, void *);
extern void FUN_02077aa0(void *, int);
extern void FUN_02077ad0(void *, int);
extern void FUN_overlay_4__0212a010(void *, int, int, unsigned short, int);
extern void FUN_overlay_4__0212a630(void *, int);
extern void FUN_02085e0c(void *, void *);
extern void FUN_020779b0(void *, Summary *);
extern void FUN_02077a30(void *, Summary *);
extern void FUN_02077a84(void *);

void FUN_020859a8(void) {
    int changed = 0;
    int i, j;
    int rowIndex;
    Actor *actor;
    Summary summary;

    if (DAT_0211a52c) {
        for (int k = 0; k < 8; k++) {
            if (DAT_0211a52c->timers[k].timer > 0) {
                DAT_0211a52c->timers[k].timer--;
                if (DAT_0211a52c->timers[k].timer == 0) {
                    DAT_0211a52c->timers[k].a = -1;
                    DAT_0211a52c->timers[k].b = -1;
                    DAT_0211a52c->timers[k].d = 0;
                    DAT_0211a52c->timers[k].timer = 0;
                    DAT_0211a52c->timers[k].c = 0;
                }
            }
        }
        for (int k = 0; k < 4; k++) {
            if (DAT_0211a52c->slots[k].actor && DAT_0211a52c->slots[k].f8 == 2) {
                if (!FUN_02073218(DAT_0211a52c->slots[k].id)) {
                    changed = FUN_02085488(DAT_0211a52c->slots[k].id, 1);
                } else if (DAT_0211a52c->slots[k].f9) {
                    changed = FUN_02085488(DAT_0211a52c->slots[k].id, 0);
                }
            }
        }
    }

    FUN_02077794(&summary);
    if (FUN_02084be8(DAT_0211a51c)) {
        summary.count = FUN_02085438() - 1;
    } else {
        summary.count = FUN_02085450() - 1;
    }

    int hidden = 1;
    actor = FUN_02085640();
    if (actor) {
        if ((*(unsigned int *)((char *)actor + 248) & 0x08000000) != 0) {
            hidden = 1;
        } else {
            hidden = 0;
        }
    }

    rowIndex = 0;
    for (i = 0; i < 4; i++) {
        if (FUN_02084be8(DAT_0211a51c)) {
            actor = FUN_0208555c(i);
            if (!actor) continue;
            int pid = *(int *)((char *)actor + 252);
            if (pid == FUN_0208546c()) continue;
            if (FUN_020390d4(actor)) continue;
            FUN_020c4560(summary.row[rowIndex].name);
            FUN_020743fc(summary.row[rowIndex].name, (char *)actor + 36);
            summary.row[rowIndex].maximum = *(unsigned short *)((char *)actor + 92);
            summary.row[rowIndex].current = *(unsigned short *)((char *)actor + 334);
            summary.row[rowIndex].id = *(int *)((char *)actor + 252);
            summary.row[rowIndex].participant = *(int *)((char *)actor + 252);
            if (*(short *)((char *)actor + 340) >= 10000) {
                FUN_02077aa0(FUN_02077930(), summary.row[rowIndex].participant);
            } else {
                FUN_02077ad0(FUN_02077930(), summary.row[rowIndex].participant);
            }
            if (FUN_02085880(*(int *)((char *)actor + 252))) {
                if (actor->isType3() && !hidden) {
                    Vec pos = *(Vec *)((char *)actor + 180);
                    FUN_overlay_4__0212a010(FUN_overlay_4__02129ed4(), pos.x, pos.z, *(unsigned short *)((char *)actor + 192), *(int *)((char *)actor + 252));
                }
            } else {
                FUN_overlay_4__0212a630(FUN_overlay_4__02129ed4(), *(int *)((char *)actor + 252));
            }
            {
                unsigned int state[9];
                FUN_02085e0c(state, (char *)actor + 344);
                summary.row[rowIndex].value = FUN_0207f770(state);
                for (j = 0; j < 2; j++) {
                    int fl = !((*(unsigned int *)((char *)actor + 248) & 0x8000) == 0);
                    summary.row[rowIndex].active[j] = fl ? 1 : FUN_0207f79c(state, j);
                }
            }
            rowIndex++;
        } else {
            actor = DAT_0211a52c->slots[i].actor;
            if (!actor) continue;
            int pid = *(int *)((char *)actor + 252);
            if (pid == FUN_0208546c()) continue;
            if (FUN_020390d4(actor)) {
                FUN_020c4560(summary.row[rowIndex].name);
                FUN_020743fc(summary.row[rowIndex].name, (char *)actor + 36);
                summary.row[rowIndex].maximum = *(unsigned short *)((char *)actor + 92);
                summary.row[rowIndex].current = *(unsigned short *)((char *)actor + 92);
                summary.row[rowIndex].id = *(int *)((char *)actor + 252);
                summary.row[rowIndex].participant = *(int *)((char *)actor + 252);
                FUN_02077ad0(FUN_02077930(), summary.row[rowIndex].participant);
                summary.row[rowIndex].mode = 1;
            } else {
                FUN_020c4560(summary.row[rowIndex].name);
                FUN_020743fc(summary.row[rowIndex].name, (char *)actor + 36);
                summary.row[rowIndex].maximum = *(unsigned short *)((char *)actor + 92);
                summary.row[rowIndex].current = *(unsigned short *)((char *)actor + 334);
                summary.row[rowIndex].id = *(int *)((char *)actor + 252);
                summary.row[rowIndex].participant = *(int *)((char *)actor + 252);
                if (*(short *)((char *)actor + 340) >= 10000) {
                    FUN_02077aa0(FUN_02077930(), summary.row[rowIndex].participant);
                } else {
                    FUN_02077ad0(FUN_02077930(), summary.row[rowIndex].participant);
                }
                if (FUN_02085880(*(int *)((char *)actor + 252))) {
                    int fl = !((*(unsigned int *)((char *)actor + 248) & 0x01000000) == 0);
                    if (fl == 1) {
                        Vec pos = *(Vec *)((char *)actor + 180);
                        FUN_overlay_4__0212a010(FUN_overlay_4__02129ed4(), pos.x, pos.z, *(unsigned short *)((char *)actor + 192), *(int *)((char *)actor + 252));
                    }
                } else {
                    FUN_overlay_4__0212a630(FUN_overlay_4__02129ed4(), *(int *)((char *)actor + 252));
                }
                {
                    unsigned int state[9];
                    FUN_02085e0c(state, (char *)actor + 344);
                    summary.row[rowIndex].value = FUN_0207f770(state);
                    for (j = 0; j < 2; j++) {
                        int fl = !((*(unsigned int *)((char *)actor + 248) & 0x8000) == 0);
                        summary.row[rowIndex].active[j] = fl ? 1 : FUN_0207f79c(state, j);
                    }
                }
                summary.row[rowIndex].mode = 0;
            }
            rowIndex++;
        }
    }

    FUN_020779b0(FUN_02077930(), &summary);
    FUN_02077a30(FUN_02077930(), &summary);
    if (FUN_02084be8(DAT_0211a51c) && changed) {
        FUN_02077a84(FUN_02077930());
    }
}
}
