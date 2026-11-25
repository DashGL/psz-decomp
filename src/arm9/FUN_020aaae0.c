//cpp
// flags: -O4,s
struct Sub {
    virtual void v0(); virtual void v1();
    virtual void v2(void *); virtual void v3(void *); virtual void v4(void *);
};
struct Self {
    unsigned char pad0[0x20];
    Sub sub;
    unsigned char pad24[0x5c - 0x24];
    unsigned short f5c;
    unsigned short f5e;
    unsigned char pad60[0x158 - 0x60];
    int f158;
};
extern "C" {
extern int FUN_020aa4b4(void *), FUN_0207f8dc(void *, int), FUN_0207f770(void *), FUN_0203a1fc(void *);
extern int FUN_020b67d8(void *, int), FUN_020b6800(void *, void *), FUN_020b681c(void *, void *), FUN_020b6850(void *), FUN_020b68f8(void *, void *, void *), FUN_020b6940(void *, void *), FUN_020b6d34(void *, void *, int);
extern int FUN_020b6984(void *), FUN_020b6994(void *, void *), FUN_020b6998(void *, void *), FUN_020b69dc(void *), FUN_020b6a48(void *, void *, void *), FUN_020b6a90(void *, void *);
extern int FUN_020b721c(void *), FUN_020b7224(void *), FUN_020b72a0(void *);
void FUN_020aaae0(Self *self, int *out) {
    int first[4], second[4], third[4];
    int special, factor, value, i;
    self->sub.v2(first);
    self->sub.v3(second);
    self->sub.v4(third);
    special = FUN_020aa4b4(self);
    if (special) value = FUN_020b67d8(&self->sub, special);
    else { factor = FUN_0207f8dc(&self->f158, 1); value = (FUN_020b67d8(&self->sub, 0) * factor) >> 12; }
    out[1] = value; out[2] = 0;
    out[2] += FUN_020b6800(&self->sub, second);
    out[2] += FUN_020b681c(&self->sub, first);
    out[2] += FUN_020b6850(&self->sub);
    out[2] += FUN_020b68f8(&self->sub, first, third);
    if (!FUN_0203a1fc(third)) {
        out[3] = FUN_020b6940(&self->sub, third);
        for (i = 0; i < 5; ++i) out[6 + i] = FUN_020b6d34(&self->sub, third, i);
    } else {
        out[3] = 0;
        for (i = 0; i < 5; ++i) out[6 + i] = 0;
    }
    value = FUN_020b6984(&self->sub);
    out[16] = (value * FUN_0207f8dc(&self->f158, 1)) >> 12; out[17] = 0;
    out[17] += FUN_020b6994(&self->sub, second);
    out[17] += FUN_020b6998(&self->sub, first);
    out[17] += FUN_020b69dc(&self->sub);
    out[17] += FUN_020b6a48(&self->sub, first, third);
    if (!FUN_0203a1fc(third)) out[18] = FUN_020b6a90(&self->sub, third);
    else out[18] = 0;
    out[19] = FUN_020b721c(&self->sub); out[20] = FUN_020b7224(&self->sub); out[21] = FUN_020b72a0(&self->sub);
    out[25] = self->f5c; out[26] = self->f5e;
    int *p = &self->f158; out[27] = FUN_0207f770(p); out[28] = FUN_0207f770(p);
}
}
