// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec3;

typedef struct {
    unsigned int pad0[8];
    Vec3 pos;
    unsigned int pad1[10];
    int f54;
    unsigned int pad2[3];
} Desc;

typedef struct {
    unsigned char pad0[0x10];
    unsigned int f10[10];
    unsigned int f38[10];
} Manager;

typedef struct {
    Manager *ptr;
    int boost_val;
} GlobalState;

extern GlobalState DAT_0210e234;
extern int DAT_020f91ac;

extern void *FUN_020be450(void);
extern unsigned char *FUN_020be5ec(void *, unsigned int);
extern unsigned char *FUN_0208555c(unsigned int);
extern int FUN_0203c154(void *);
extern int FUN_02086464(unsigned int, unsigned int);
extern int FUN_0203c19c(unsigned int);
extern int FUN_020863d0(unsigned int);
extern void FUN_0203c15c(void *, int, int);
extern void FUN_0203c17c(void *);
extern void FUN_0203c170(void *);
extern void FUN_020437d8(unsigned int, unsigned int, unsigned int, unsigned int, int *);
extern void FUN_02086180(unsigned int, unsigned int, int, unsigned int);
extern int FUN_02078198(unsigned int);
extern void FUN_0203666c(Desc *);
extern void FUN_020bf818(void *, unsigned int *);
extern void FUN_02035408(Vec3 *, unsigned int, unsigned int, unsigned int);
extern void FUN_0204ac1c(Desc *, unsigned int, unsigned int, int);
extern void FUN_02046d94(Desc *, int, int);

typedef void (*Callback)(unsigned int, unsigned int, unsigned int);

int FUN_0204a9cc(unsigned int *query) {
    Desc desc;
    Vec3 position;
    int damage;
    unsigned int plane[2];
    int count;
    unsigned char *node;
    unsigned int source;
    unsigned int kind;
    int restricted;
    unsigned int token;
    int special;
    int boost;
    int hit;
    int result = 0;

    if (DAT_0210e234.ptr != 0 && query[1] != ~0u) {
        count = 0;
        node = FUN_020be5ec(FUN_020be450(), query[1]);
        while (node != 0) {
            unsigned char *entry = node + 8;
            if (entry != 0 && (*(unsigned int *)(entry + 0x34) & 1)) {
                unsigned int other;
                int duplicate;
                int i;

                other = *(unsigned int *)(entry + 0x40);
                token = *(unsigned int *)(entry + 0x30);
                duplicate = 0;
                for (i = 0; i < 10; i++) {
                    if (DAT_0210e234.ptr->f38[i] == *(unsigned int *)(entry + 0x38)) {
                        duplicate = 1;
                        break;
                    }
                }
                for (i = 0; i < 10; i++) {
                    if (DAT_0210e234.ptr->f10[i] == ~0u) {
                        DAT_0210e234.ptr->f10[i] = *(unsigned int *)(entry + 0x38);
                        break;
                    }
                }
                if (!duplicate) {
                    source = query[0];
                    kind = query[3];
                    if (query[12] == 0 && source != other) {
                        unsigned char *actor;
                        if (query[8] != 0) {
                            ((Callback)query[8])(query[9], other, token);
                        }
                        special = 0;
                        boost = 0;
                        actor = FUN_0208555c(source);
                        if (actor != 0) {
                            int eligible;
                            restricted = FUN_0203c154(actor);
                            eligible = (!restricted && FUN_02086464(source, other)) ? 1 : 0;
                            if (eligible && *(int *)(actor + 0x240) == 12) {
                                special = 1;
                            } else {
                                special = 0;
                            }
                            if (eligible && FUN_0203c19c(kind)) {
                                boost = 1;
                            } else {
                                boost = 0;
                            }
                            if (special) {
                                FUN_0203c15c(actor, FUN_020863d0(other), DAT_020f91ac);
                            } else if (boost) {
                                FUN_0203c15c(actor, FUN_020863d0(other), DAT_0210e234.boost_val);
                            } else if (!restricted) {
                                FUN_0203c17c(actor);
                            }
                        }
                        FUN_020437d8(source, kind, other, token, &damage);
                        if (damage > 0) {
                            hit = 1;
                        } else {
                            hit = 0;
                        }
                        if (query[10] != 0) {
                            ((Callback)query[10])(query[11], other, token);
                        }
                        if (actor != 0 && hit != 0) {
                            if (kind == 3 || kind == 6) {
                                FUN_02086180(source, other, 1, token);
                            } else if (special) {
                                FUN_0203c170(actor);
                                FUN_02086180(source, other, 2, token);
                            } else if (boost) {
                                FUN_0203c170(actor);
                                FUN_02086180(source, other, 2, token);
                            }
                        }
                    }
                    if (!FUN_02078198(other)) {
                        FUN_0203666c(&desc);
                        FUN_020bf818(entry + 12, plane);
                        FUN_02035408(&position, plane[0], query[2], plane[1]);
                        desc.pos = position;
                        desc.f54 = 36;
                        FUN_0204ac1c(&desc, query[5], query[6], -1);
                        FUN_02046d94(&desc, 0, 0);
                    }
                    result = 1;
                    count++;
                }
            }
            if ((int)query[7] < 0 || count < (int)query[7]) {
                node = *(unsigned char **)(node + 4);
            } else {
                node = 0;
            }
        }
    }
    return result;
}
