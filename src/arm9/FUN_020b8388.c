//cpp
// flags: -O4,s
#pragma opt_propagation off
extern "C" {
extern int FUN_0203ae60(void *);
extern int FUN_02078198(int);
extern int FUN_02000ec4(int);
extern void FUN_02095508(void *, int);
extern void FUN_0208d7e4(void *, int, short, int, unsigned short);
extern void FUN_020b860c(void *, void *);
extern void FUN_0207f540(void *, void *);
}

struct Actor {
    unsigned char pad04[0x5c - 4];
    unsigned short maxHp;
    unsigned char pad5e[0xf8 - 0x5e];
    unsigned int actorFlags;
    int id;
    unsigned char pad100[0x14e - 0x100];
    unsigned short hp;
    unsigned char pad150[0x158 - 0x150];
    unsigned char f158[0x24c - 0x158];
    unsigned char f24c[4];

    virtual void v00(); virtual void v04(); virtual void v08(); virtual void v0c();
    virtual void v10(); virtual void v14(); virtual void v18(); virtual void v1c();
    virtual void v20(); virtual void v24(); virtual void v28(); virtual void v2c();
    virtual void v30(); virtual void v34(); virtual void v38(); virtual void v3c();
    virtual void v40(); virtual void v44(); virtual void v48(); virtual void v4c();
    virtual void v50(); virtual void v54(); virtual void v58(); virtual void v5c();
    virtual void v60(); virtual void v64(); virtual void v68(); virtual void v6c();
    virtual void v70(); virtual void v74(); virtual void v78(); virtual void v7c();
    virtual void v80(); virtual void v84(); virtual void v88(); virtual void v8c();
    virtual void v90(); virtual void v94(); virtual void v98(); virtual void v9c();
    virtual void va0(); virtual void va4(); virtual void va8(); virtual void vac();
    virtual void vb0(); virtual void vb4(); virtual void vb8(); virtual void vbc();
    virtual void vc0(); virtual void vc4(); virtual void vc8(); virtual void vcc();
    virtual void vd0(); virtual void vd4(); virtual void vd8(); virtual void vdc(int, int);
};

static inline bool hasFlag16(short flags, int mask) {
    return (flags & mask) != 0;
}

static inline bool hasFlag32(unsigned int flags, unsigned int mask) {
    return (flags & mask) != 0;
}

struct Damage {
    short s0, s2, s4, s6, flags;
    signed char c0a, c0b, c0c, c0d, c0e;
    unsigned char u0f, u10, u11, u12;
    signed char c13, c14, severity, c16, c17;
};

#pragma always_inline on
static inline void copyDamage(Damage *dst, const Damage *src) {
    dst->s0 = src->s0;
    dst->s2 = src->s2;
    dst->s4 = src->s4;
    dst->s6 = src->s6;
    dst->flags = src->flags;
    dst->c0a = src->c0a;
    dst->c0b = src->c0b;
    dst->c0c = src->c0c;
    dst->c0d = src->c0d;
    dst->c0e = src->c0e;
    dst->u0f = src->u0f;
    dst->u10 = src->u10;
    dst->u11 = src->u11;
    dst->u12 = src->u12;
    dst->c13 = src->c13;
    dst->c14 = src->c14;
    dst->severity = src->severity;
    dst->c16 = src->c16;
    dst->c17 = src->c17;
}

extern "C" void FUN_020b8388(Actor *self, Damage *damage, int *source) {
    Damage copy;
    int severity, maximum, absolute, high, id;
    short flags;
    int delta, current, lethal, reaction, low;

    id = self->id;
    if (FUN_0203ae60(self)) {
        if (hasFlag16(damage->flags, 0x80)) {
            FUN_02095508(self, 33);
        }
        return;
    }

    flags = damage->flags;
    if (hasFlag16(flags, 4)) {
        FUN_0208d7e4(self->f24c, id, 0, 0, 12);
        return;
    }
    if (hasFlag16(flags, 0x200) && hasFlag32(self->actorFlags, 0x200000)) {
        FUN_0208d7e4(self->f24c, id, 0, 0, 13);
        return;
    }

    severity = damage->severity;
    maximum = self->maxHp;
    delta = damage->s0;
    lethal = (self->hp + delta <= 0) || hasFlag16(flags, 1);

    if (hasFlag16(flags, 0x20) || (hasFlag16(flags, 0x10) && lethal)) {
        delta = -(self->hp - 1);
        lethal = 0;
    }
    if (lethal) {
        copyDamage(&copy, damage);
        copy.s0 = (short)delta;
        FUN_020b860c(self, &copy);
        return;
    }

    if (delta < 0 && FUN_02078198(*source)) {
        self->vdc(delta, maximum);
    }

    flags = damage->flags;
    reaction = 19;
    if (hasFlag16(flags, 0x400)) {
        absolute = FUN_02000ec4(delta);
        high = (int)(((long long)maximum * 819 + 2048) >> 12);
        low = (int)(((long long)maximum * 205 + 2048) >> 12);
        if (hasFlag32(self->actorFlags, 256)) {
            reaction = 0;
        } else if (absolute >= high && severity >= 2) {
            reaction = 7;
        } else if (absolute >= low && severity >= 1) {
            reaction = hasFlag16(flags, 8) ? 2 : 1;
        } else {
            reaction = 0;
        }
    } else if (delta > 0) {
        reaction = 3;
    }

    if (reaction != 19) {
        FUN_0208d7e4(self->f24c, id, (short)delta, 0, (unsigned short)reaction);
    }
    FUN_0207f540(self->f158, damage);
}
