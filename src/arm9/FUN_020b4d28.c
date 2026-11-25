//cpp
// flags: -O4,s
#pragma always_inline on
#pragma block_assign on

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct Item {
    u8 b[4];
    int is_kind0() const {
        if (this->b[0] == 0) return 1;
        return 0;
    }
};

struct ItemRecord {
    Item item;
    int w[3];
    Item get_item() const { return item; }
};

struct Vec3 {
    int x, y, z;
    Vec3() {}
    Vec3(int a, int b, int c);
};

struct EffectPair {
    signed char slot;
    signed char variant;
    short scale;
    u32 extra;
};

struct Str16 {
    u8 data[16];
    Str16() {}
    Str16(const Str16& rhs);
};

struct Sub2 {
    u8 b[8];
};

struct Sub3 {
    u32 w[14];
};

struct Metadata {
    Str16 s0;
    Str16 s1;
    signed char f0;
    signed char f1;
    signed char f2;
    signed char f3;
    Sub2 sub2;
    Sub3 sub3;
};

struct EffectDesc {
    u16 h[8];
    int slot;        // 0x10 (sp+0xd4)
    int variant;     // 0x14 (sp+0xd8)
    int attachment;  // 0x18 (sp+0xdc)
    u32 flags;       // 0x1c (sp+0xe0)
    Vec3 pos;        // 0x20 (sp+0xe4)
    Vec3 scale;      // 0x2c (sp+0xf0)
    u16 h2[4];       // 0x38
    int p64;         // 0x40 (sp+0x104)
    int p68;         // 0x44 (sp+0x108)
    int p72;         // 0x48 (sp+0x10c)
    int p76;         // 0x4c (sp+0x110)
    int p80;         // 0x50 (sp+0x114)
    int kind;        // 0x54 (sp+0x118)
    int owner;       // 0x58 (sp+0x11c)
    int p92;         // 0x5c
    int p96;         // 0x60
    EffectDesc();
    void set_slot_variant(int s, int v) {
        *(volatile int *)&slot = s;
        int t = v;
        if (t < 0) t = v;
        *(volatile int *)&variant = t;
    }
    void set_hit(int p0, int p1, int p2) {
        p68 = p0;
        p72 = p1;
        p76 = p2;
        flags |= 0x8000000;
    }
};

extern "C" {
extern const int DAT_020f5848[];
extern int FUN_0203a1a8(Item *, int);
extern char *FUN_0204daa8(int);
extern void FUN_020c4450(void *, const void *);
extern EffectPair FUN_020463b8(int, u32, u32, u32);
extern void FUN_020b51e8(EffectPair *, const EffectPair &);
extern void FUN_0203666c(void *);
extern void FUN_02035408(void *, int, int, int);
extern int FUN_02046828(int);
extern int FUN_02046d94(void *, int, int);
extern void *FUN_0204f3b8(void);
extern void FUN_020b5ab8(void *, int, int);
extern void FUN_020b4b54(void *, int, void *, int, int, int, void *, void *, int, int);
extern void FUN_0204c4fc(void *, int, int, int);
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb reset
}

inline Str16::Str16(const Str16& rhs) {
    FUN_020c4450(this, &rhs);
}

inline Vec3::Vec3(int a, int b, int c) {
    FUN_02035408(this, a, b, c);
}

inline EffectDesc::EffectDesc() {
    FUN_0203666c(this);
}

static inline int test_item(Item it, int k) {
    return FUN_0203a1a8(&it, k);
}

static inline int check_kind0(Item it) {
    return it.is_kind0();
}

static inline int in_range(int x, int lo, int hi) {
    return (x >= lo && x <= hi) ? 1 : 0;
}

static inline void play_sound(const Item &local, int owner, int action, int soundParameter) {
    if (check_kind0(local) && test_item(local, 16) && action != 4) {
        char *actor = FUN_0204daa8(owner);
        if (actor && *(void **)(actor + 0x1b0)) {
            void *comp = *(void **)(actor + 0x1b0);
            void *source = *(void **)((char *)comp + 0x14);
            if (source) {
                int sound;
                switch (action) {
                default: sound = 18; break;
                case 1: sound = 2; break;
                case 2: sound = 3; break;
                case 5: sound = 4; break;
                case 6: sound = 5; break;
                case 7: sound = 6; break;
                }
                FUN_0204c4fc(source, sound, soundParameter, 0);
            }
        }
    }
}

extern "C" void FUN_020b4d28(void *unused, int owner, int action, int soundParameter, int attachment, ItemRecord *item, int *parameters) {
    int normal = 0;
    if (test_item(item->item, 10)) {
        if (action != 3 && action != 8) {
            normal = 1;
        }
    } else if (!in_range(item->item.b[1], 8, 13)) {
        normal = 1;
    }

    int slots[2];
    int variants[2];
    int scales[2];
    int extras[2];
    {
        const volatile int *p = DAT_020f5848;
        int a = p[13], b = p[14];
        slots[0] = a; *(volatile int *)&slots[1] = b;
        a = p[7]; b = p[8];
        variants[0] = a; variants[1] = b;
        a = p[9]; b = p[10];
        scales[0] = a; scales[1] = b;
    }
    FUN_0200c938(extras, 8);

    if (test_item(item->item, 10) && !normal) {
        slots[0] = 6;
        variants[0] = 8;
    } else if (in_range(item->item.b[1], 1, 7) || in_range(item->item.b[1], 8, 13) || test_item(item->item, 14) || test_item(item->item, 15)) {
        char *actor = FUN_0204daa8(owner);
        if (actor) {
            const Metadata *src = (const Metadata *)(volatile const void *)(actor + 0x24);
            Metadata metadata(*src);
            u32 kind = item->item.b[1];
            int mode = action;
            if (action >= 5 && action <= 7) {
                mode = action - 5;
            }
            EffectPair first = FUN_020463b8(0, kind, mode, 0);
            EffectPair second = FUN_020463b8(0, kind, mode, 1);
            if (metadata.f1 == 1) {
                FUN_020b51e8(&first, FUN_020463b8(1, kind, mode, 0));
                FUN_020b51e8(&second, FUN_020463b8(1, kind, mode, 1));
            }
            slots[0] = first.slot;
            variants[0] = first.variant;
            scales[0] = first.scale;
            extras[0] = (int)first.extra;
            slots[1] = second.slot;
            variants[1] = second.variant;
            scales[1] = second.scale;
            extras[1] = (int)second.extra;
        }
    }

    if (normal && action != 4) {
        for (int j = 0; j < 2; j++) {
            if (slots[j] < 0) continue;
            EffectDesc effect;
            effect.owner = owner;
            effect.scale = Vec3(scales[j], scales[j], scales[j]);
            if (test_item(item->item, 3) &&
                ((action == 0 && j == 1) ||
                 (action == 2 && j == 0) ||
                 (action == 5 && j == 1) ||
                 (action == 7 && j == 0))) {
                effect.scale = Vec3(-scales[j], scales[j], scales[j]);
            }
            int ex = extras[j];
            effect.kind = 149;
            if (test_item(item->item, 4) && (action == 0 || action == 1 || (u32)(action - 5) <= 1)) {
                effect.kind = 47;
            } else if (test_item(item->item, 6) && (action == 2 || action == 7)) {
                effect.kind = 46;
            } else if (in_range(item->item.b[1], 1, 7) || test_item(item->item, 10)) {
                effect.kind = 41;
            } else if (in_range(item->item.b[1], 14, 16)) {
                effect.kind = 43;
            }
            if (effect.kind >= 149) continue;
            { int s_ = ((volatile int *)slots)[j]; int v_ = ((volatile int *)variants)[j]; effect.set_slot_variant(s_, v_); }
            effect.p64 = 8;
            effect.attachment = attachment;
            if (!in_range(item->item.b[1], 14, 16)) {
                effect.flags |= 0x80000;
            }
            int a = FUN_02046828(owner);
            int p1 = ((const volatile int *)parameters)[1];
            int p0 = ((const volatile int *)parameters)[0];
            effect.p72 = p1;
            effect.p76 = a;
            effect.p68 = p0;
            effect.flags |= 0x8000000;
            int spawned = FUN_02046d94(&effect, ex, 0);
            FUN_020b5ab8(FUN_0204f3b8(), owner, spawned);
        }
    } else if (!normal) {
        int a = parameters[0];
        int b = parameters[1];
        if (action == 4) b = parameters[2];
        FUN_020b4b54(FUN_0204f3b8(), owner, item, action, attachment, 2, slots, variants, a, b);
    }

    play_sound(item->get_item(), owner, action, soundParameter);
}
