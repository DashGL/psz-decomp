// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int x, z; } Point;

typedef struct {
    int id;               // +0x00
    int pad04[3];         // +0x04..0x0f
    Vec origin;           // +0x10..0x1b
    int pad1c[4];         // +0x1c..0x2b
    unsigned short yaw;   // +0x2c
    unsigned short pad2e; // +0x2e
    int source;           // +0x30
    int dmgSelf;          // +0x34
    int dmgOther;         // +0x38
    int mode;             // +0x3c
    int targetMask;       // +0x40
    int unk44;            // +0x44
    int flags;            // +0x48
    unsigned short cone;  // +0x4c
    unsigned short pad4e; // +0x4e
    int keys[15];         // +0x50..0x8b
    int maxCooldown;      // +0x8c
    int timers[15];       // +0x90..0xcb
    unsigned char hitBits;// +0xcc
    unsigned char padcd[3];
    int interval;         // +0xd0
    int tick;             // +0xd4
} HitVolume;

extern Point DAT_020f5bfc;
extern void *DAT_02108cf4;
extern char DAT_0211a51c[];

extern void *FUN_020be450(void);
extern char *FUN_020be5ec(void *, int);
extern void FUN_020bf818(void *, Point *);
extern int FUN_02078188(int);
extern int FUN_02078198(int);
extern int FUN_0203bf48(void *);
extern int FUN_0203bf3c(void *);
extern int FUN_0203ae60(void *);
extern int FUN_02084d00(void *);
extern int FUN_020375d8(void *);
extern int FUN_02084cc0(void *);
extern int FUN_020855bc(int);
extern int FUN_02085880(int);
extern void *FUN_020352a4(void *, int);
extern void *FUN_02039200(void *);
extern void *FUN_020352c0(void *);
extern void FUN_0209a39c(void *, int);
extern void FUN_020437d8(int, int, int, int, void *);
extern void FUN_0209a300(void *);

#pragma thumb off
extern void FUN_0205c8cc(Vec *, Vec *);
extern unsigned short FUN_0205c9e4(int, int);
#pragma thumb on

void FUN_02099f50(HitVolume *self) {
    Vec delta;
    Vec normal;
    Point p;
    Point seed;
    void *actor;
    int changed;
    char *node;
    int *pType;
    unsigned short angle;
    int valid;
    int participant;
    int valid2;
    int source;
    int damage;

    source = self->source;
    damage = 0;
    self->hitBits = 0;
    changed = 0;
    node = FUN_020be5ec(FUN_020be450(), self->id);

    switch (self->mode) {
    case 0:
        seed = DAT_020f5bfc;
        while (node != 0) {
            char *record = node + 8;
            if (record != 0) {
                int id;
                int key, index, kind;
                pType = (int *)(record + 0x3c);
                id = *(int *)(record + 0x40);
                p = seed;
                FUN_020bf818(record + 0xc, &p);
                { Vec *origin = (Vec *)((char *)self + 0x10); delta.x = p.x - origin->x; delta.y = 0; delta.z = p.z - origin->z; }
                normal = delta;
                if (normal.x != 0 || normal.y != 0 || normal.z != 0) {
                    FUN_0205c8cc(&normal, &normal);
                }
                angle = (unsigned short)(self->yaw - FUN_0205c9e4(normal.x, normal.z));
                if (angle >= 0x8000) {
                    angle = (unsigned short)(0x10000 - angle);
                }
                valid = 0;
                if (FUN_02078188(id) != 0) {
                    actor = FUN_02039200(FUN_020352a4(DAT_02108cf4, id));
                    if (actor != 0) {
                        if (FUN_0203bf48(actor) != 0) {
                            valid = 1;
                        } else if (FUN_0203bf3c(actor) != 0 && FUN_0203ae60(actor) != 0 && (self->flags & 8) != 0) {
                            valid = 1;
                        }
                    }
                }
                if (FUN_02078198(id) != 0 && FUN_02084d00(DAT_0211a51c) != 0) {
                    void *object = FUN_020352c0(FUN_020352a4(DAT_02108cf4, id));
                    if (object != 0 && self->unk44 == 1 && FUN_020375d8(object) == 0x180) {
                        break;
                    }
                }
                if ((int)angle <= (int)((unsigned int)self->cone >> 1) || self->cone == 0) {
                    if ((FUN_02078188(id) != 0 && (self->targetMask & 1) != 0 && *pType == 5 && valid != 0)
                        || (FUN_02078198(id) != 0 && (self->targetMask & 2) != 0)) {
                        if ((*(int *)(record + 0x34) & 1) != 0 || (FUN_02078188(id) != 0 && (self->flags & 8) != 0)) {
                            key = *(int *)(record + 0x38);
                            index = 0;
                            while (self->keys[index] != -1) {
                                if (key == self->keys[index] || index >= 15) {
                                    break;
                                }
                                index++;
                            }
                            if (index < 15 && self->keys[index] == -1) {
                                self->keys[index] = key;
                                participant = *(int *)(record + 0x40);
                                kind = *(int *)(record + 0x30);
                                if (FUN_02078188(id) != 0 && id == FUN_02084cc0(DAT_0211a51c)) {
                                    damage = self->dmgSelf;
                                    FUN_0209a39c(self, id);
                                } else if (FUN_02078188(id) != 0 && id != FUN_02084cc0(DAT_0211a51c)) {
                                    damage = self->dmgOther;
                                    FUN_0209a39c(self, id);
                                } else if (FUN_02078198(id) != 0) {
                                    damage = self->dmgOther;
                                }
                                FUN_020437d8(source, damage, participant, kind, 0);
                                if ((self->flags & 1) != 0) {
                                    changed |= 1;
                                    break;
                                } else {
                                    changed |= 1;
                                }
                            }
                        }
                    }
                }
            }
            node = *(char **)(node + 4);
        }
        break;
    case 1:
        self->tick++;
        if (self->tick > self->interval) {
            int id;
            self->tick = 0;
            for (id = 0; id <= 515; id++) {
                int allowed;
                valid2 = 0;
                if (FUN_02078188(id) != 0) {
                    void *a = FUN_02039200(FUN_020352a4(DAT_02108cf4, id));
                    if (a != 0 && FUN_0203bf48(a) != 0) {
                        valid2 = 1;
                    }
                }
                allowed = 0;
                if (FUN_02078198(id) != 0) {
                    allowed = 1;
                } else if (FUN_020855bc(id) == 1 || FUN_020855bc(id) == 3) {
                    if (FUN_02085880(id) != 0 && valid2 != 0) {
                        allowed = 1;
                    }
                }
                if (allowed != 0) {
                    if (FUN_02078188(id) != 0) {
                        damage = self->dmgSelf;
                        FUN_0209a39c(self, id);
                    } else if (FUN_02078198(id) != 0) {
                        damage = self->dmgOther;
                    }
                    FUN_020437d8(source, damage, id, 0, 0);
                }
            }
        }
        break;
    }

    if ((changed & 1) != 0) {
        FUN_0209a300(self);
    }
    if (self->maxCooldown != 0) {
        int index;
        for (index = 0; index < 15; index++) {
            if (self->keys[index] == -1) {
                break;
            }
            self->timers[index]++;
            if (self->timers[index] > self->maxCooldown) {
                int j;
                for (j = index; j < 14; j++) {
                    if (self->keys[j] == -1) {
                        break;
                    }
                    self->keys[j] = self->keys[j + 1];
                    self->timers[j] = self->timers[j + 1];
                }
            }
        }
    }
}
