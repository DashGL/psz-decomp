// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xb2, exact bytes and relocation targets.
// flags: -O4,p

struct SlotC6A50 {
    char name[0x2c];
    int active;
};

struct StateC6A50 {
    struct SlotC6A50 slots[3];
    char s90[0x2c];
    char sbc[0x2c];
    unsigned char se8[0xc];
    char sf4[0x20];
    int f114;
    int f118;
    int f11c;
    int f120;
};

extern void FUN_0209e6c4(void *, const void *);
extern int FUN_020c6c04(void *);
extern int FUN_0205c520(int, int);
extern void FUN_020656b8(void *, int, int);

void FUN_020c6a50(struct StateC6A50 *self, int idx, const unsigned char *str, int val) {
    if (val < 0) {
        val = 0;
    }
    if (idx >= 0 && idx < 3) {
        FUN_0209e6c4(self->slots[idx].name, str);
        self->slots[idx].active = 1;
    }
    if (idx <= FUN_020c6c04(self)) {
        int rate;
        self->f120 = 0;
        if (val == 0) {
            rate = 0x1000;
        } else {
            rate = FUN_0205c520(0x1000, val * 30);
        }
        self->f11c = rate;
        self->f118 = 1;
        FUN_0209e6c4(self->s90, str);
        if (self->f114 != 0) {
            self->se8[0] = str[0];
            self->se8[1] = str[1];
        } else {
            FUN_0209e6c4(self->se8, str);
            FUN_020656b8(self->sf4, 0, 0x20);
            self->f114 = 1;
        }
        FUN_0209e6c4(self->sbc, self->se8);
    }
}
