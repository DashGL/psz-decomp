// flags: -O4,s
#pragma thumb off
extern int FUN_020015ac(const void *, const void *, unsigned);
#pragma thumb on
extern void FUN_020ea16c(unsigned, void *);

typedef struct {
    unsigned char raw[240];
} Entry;

typedef struct {
    Entry e;
    unsigned char pad[16];
} Slot;

struct Global {
    Slot slots[4];
    Entry active;
    unsigned char field_4f0[4];
    unsigned char profile;
    unsigned char flag1;
    unsigned char flag2;
};

extern struct Global *DAT_0213e8c4;
extern const char DAT_0213a6ac[];

void FUN_overlay_15__02131bb4(unsigned profile) {
    struct Global *g = DAT_0213e8c4;
    g->active = g->slots[profile].e;
    g->profile = (unsigned char)profile;
    if (FUN_020015ac(g->slots[profile].e.raw + 0xc0, DAT_0213a6ac, 4) != 0) {
        DAT_0213e8c4->flag1 = 0;
    } else {
        DAT_0213e8c4->flag1 = 1;
    }
    if (FUN_020015ac(g->slots[profile].e.raw + 0xc8, DAT_0213a6ac, 4) != 0 ||
        FUN_020015ac(g->slots[profile].e.raw + 0xcc, DAT_0213a6ac, 4) != 0) {
        DAT_0213e8c4->flag2 = 0;
    } else {
        DAT_0213e8c4->flag2 = 1;
    }
    FUN_020ea16c(g->slots[profile].e.raw[0xd0], DAT_0213e8c4->field_4f0);
}
