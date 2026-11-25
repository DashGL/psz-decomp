// flags: -O4,s
typedef struct {
    unsigned char pad0[0x40];
    void *actors[9];
    int idx;
} Manager;

extern unsigned char DAT_02124634[];
extern signed char DAT_0211a208[];
extern unsigned char DAT_02156b38[];
extern unsigned int DAT_021245c8;
extern Manager *DAT_02108c84;

extern void *FUN_020c2b50(void *);
extern void *FUN_020c3564(void *);
extern void FUN_overlay_11__021213f8(void *);
extern void FUN_overlay_11__02122f98(void *);
extern void FUN_020794d4(void *);
extern void FUN_overlay_11__02121aec(void *, void *);
extern void FUN_overlay_11__02121a24(void *, void *);
extern void FUN_overlay_11__02121bb4(void *, int, int, int, int);
extern void *FUN_overlay_11__02122918(void);
extern void FUN_overlay_11__021229b4(void *);

void *FUN_overlay_11__021215f0(unsigned int *self) {
    unsigned char *settings;
    self[0] = (unsigned int)DAT_02124634;
    FUN_020c2b50(self + 1);
    FUN_020c3564(self + 2);
    self[17] = (unsigned int)-1;
    FUN_overlay_11__021213f8(self + 18);
    self[21] = 0;
    self[22] = 1;
    self[23] = 6;
    settings = DAT_02156b38;
    if (DAT_0211a208[1] != 1) {
        unsigned char val = settings[0x24];
        if (DAT_021245c8 != val) {
            Manager *mgr;
            FUN_overlay_11__02122f98(settings);
            settings[0x24] = val;
            DAT_021245c8 = settings[0x24];
            mgr = DAT_02108c84;
            if (mgr != 0) {
                void *actor = mgr->actors[mgr->idx];
                if (actor != 0) {
                    FUN_020794d4(actor);
                }
            }
        }
    } else {
        self[23] = 5;
    }
    FUN_overlay_11__02121aec(self, settings);
    FUN_overlay_11__02121a24(self, settings);
    FUN_overlay_11__02121bb4(self, 0x1e, 0x90, 0xac, 0xc);
    {
        void *p = FUN_overlay_11__02122918();
        if (p != 0) {
            FUN_overlay_11__021229b4(p);
        }
    }
    return self;
}
