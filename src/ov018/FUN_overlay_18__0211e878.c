// flags: -O4,s
extern unsigned char DAT_02123a4c[];
extern signed char DAT_0211a208[];
typedef struct Desc {
    unsigned char pad[0x24];
    unsigned char f24;
} Desc;
typedef struct Manager {
    unsigned char pad0[0x40];
    void *children[9];
    int index;
} Manager;
extern Desc DAT_02124544;
extern unsigned int DAT_021239e0;
extern Manager *DAT_02108c84;

extern void *FUN_020c2b50(void *);
extern void *FUN_020c3564(void *);
extern void FUN_overlay_18__0211e680(void *);
extern void FUN_overlay_18__0211eee4(void *);
extern void FUN_020794d4(void *);
extern void FUN_overlay_18__0211ed64(void *, void *);
extern void FUN_overlay_18__0211eca0(void *, void *);
extern void FUN_overlay_18__0211ee2c(void *, int, int, int, int);
extern void *FUN_overlay_18__02122cf4(void);
extern void FUN_overlay_18__02122d88(void *);

void *FUN_overlay_18__0211e878(int *self) {
    Desc *descriptor;
    void *session;
    self[0] = (int)DAT_02123a4c;
    FUN_020c2b50(self + 1);
    FUN_020c3564(self + 2);
    self[17] = -1;
    FUN_overlay_18__0211e680(self + 18);
    self[21] = 0;
    self[22] = 1;
    self[23] = 6;
    descriptor = &DAT_02124544;
    if (DAT_0211a208[1] != 1) {
        unsigned int value = descriptor->f24;
        if (DAT_021239e0 != value) {
            Manager *manager;
            FUN_overlay_18__0211eee4(descriptor);
            descriptor->f24 = value;
            DAT_021239e0 = descriptor->f24;
            manager = DAT_02108c84;
            if (manager != 0) {
                void *child = manager->children[manager->index];
                if (child != 0) {
                    FUN_020794d4(child);
                }
            }
        }
    } else {
        self[23] = 5;
    }
    FUN_overlay_18__0211ed64(self, descriptor);
    FUN_overlay_18__0211eca0(self, descriptor);
    FUN_overlay_18__0211ee2c(self, 30, 144, 172, 12);
    session = FUN_overlay_18__02122cf4();
    if (session != 0) {
        FUN_overlay_18__02122d88(session);
    }
    return self;
}
