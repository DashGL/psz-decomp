//cpp
// flags: -O4,s
typedef unsigned int u32;
typedef unsigned char u8;
typedef signed char s8;
typedef short s16;

struct Parent {
    s16 firstGroup;
    s8 groupCount;
    s8 pad3;
    s8 flag4;
    s8 flag5;
    s8 mask6;
    s8 pad7;
};

struct Group {
    s8 parentIdx;
    s8 entryCount;
    s16 firstEntry;
    s8 pad4;
    s8 flag5;
    s8 pad6;
    s8 pad7;
    s8 partIdx;
    s8 pad9[3];
};

struct Entry {
    s8 pad0[2];
    s8 flags;
    s8 pad3;
    s16 groupIdx;
    s8 pad6[2];
};

struct Manager {
    struct Parent *parents;
    void *unk4;
    struct Group *groups;
    void *unkC;
    struct Entry *entries;
    void *unk14;
    u32 *epochPtr;
};

struct Payload {
    u32 owner;
    u8 pad4[5];
    s8 byte9;
    u8 padA[2];
};

struct Packet {
    u32 unk0;
    u32 key;
    u32 amount : 14;
    u32 epoch  : 8;
    u32 kind   : 4;
    u32 mode   : 4;
    u32 bit30  : 1;
    u32 bit31  : 1;
    struct Payload payload;
};

struct Child {
    void **vtable;
    u8 pad4[0x28];
    u32 flags;
};

struct Stats {
    u8 pad0[0x14];
    s16 expVal;
};

struct Entity {
    u8 pad0[8];
    u32 flags;
    u8 padC[4];
    struct Child *child;
    s8 **unk14;
    struct Stats stats;
    u8 pad2E[0x36];
    u8 sub64[4];
};

struct Player {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual void v16(); virtual void v17(); virtual void v18(); virtual void v19();
    virtual void v20(); virtual void v21(); virtual void v22(); virtual void v23();
    virtual void v24(); virtual void v25(); virtual void v26(); virtual void v27();
    virtual void v28(); virtual void v29(); virtual void v30(); virtual void v31();
    virtual void v32(); virtual void v33(); virtual void v34(); virtual void v35();
    virtual void v36();
    virtual void v37(s16);
    u8 pad4[0x76];
    u8 level;
};

extern "C" {
extern void *DAT_02108cf4;
extern unsigned char DAT_0211a51c[];
extern struct Player *DAT_02108d04;

struct Entry *FUN_020511f4(struct Manager *, u32);
int FUN_020510dc(struct Entry *);
int FUN_020514ac(struct Group *);
void FUN_0205120c(struct Manager *, u32, int);
void *FUN_020352a4(void *, u32);
struct Entity *FUN_020352c0(void *);
void FUN_0207f4fc(void *);
u32 FUN_02084cc0(void *);
void FUN_020368b0(struct Entity *, int, u32, u32, int);
void FUN_020366e4(struct Entity *);
void FUN_020369c8(struct Entity *, int, int, int);
int FUN_0203ae60(struct Player *);
u32 FUN_020855bc(u32);
void FUN_020a1158(int);
}

static inline int is_bit(u32 v, u32 m) { return (v & m) ? 1 : 0; }
static inline int to_bool(u32 v) { return v ? 1 : 0; }

extern "C" void FUN_020514dc(struct Manager *manager, struct Packet *packet) {
    struct Payload *payload = &packet->payload;
    u32 owner = packet->payload.owner;
    int prior;
    int all;
    int i1;
    int i2;
    struct Group *other;
    u32 epoch;
    u32 key;
    int complete;
    int parts[2];
    struct Entry *entry;
    struct Group *group;
    struct Parent *parent;
    s8 oldMask;
    struct Entity *entity;
    struct Stats *stats;
    struct Player *player;
    struct Child *child;

    key = packet->key;
    epoch = packet->epoch;

    if (*manager->epochPtr != epoch) {
        return;
    }
    entry = FUN_020511f4(manager, key);
    if (!entry) {
        return;
    }

    group = &manager->groups[entry->groupIdx];
    parent = &manager->parents[group->parentIdx];

    prior = 0;
    if (entry->flags & 1) {
        prior = 1;
    }
    entry->flags |= 1;

    all = 1;
    for (i1 = 0; i1 < group->entryCount; i1++) {
        if (FUN_020510dc(&manager->entries[group->firstEntry + i1])) {
            all = 0;
            break;
        }
    }
    if (all) {
        parent->flag4 = -1;
        group->flag5 |= 1;
    }

    complete = 1;
    for (int i = 0; i < 2; i++) {
        parts[i] = 1;
    }
    for (i2 = 0; i2 < parent->groupCount; i2++) {
        other = &manager->groups[parent->firstGroup + i2];
        if (FUN_020514ac(other)) {
            complete = 0;
            parts[other->partIdx] = 0;
        }
    }
    if (complete) {
        parent->flag5 |= 1;
    }

    oldMask = parent->mask6;
    for (int i = 0; i < 2; i++) {
        if (parts[i]) {
            parent->mask6 |= (1 << i);
        }
    }
    if (parent->mask6 != oldMask) {
        FUN_0205120c(manager, epoch, group->parentIdx);
    }

    if (!prior) {
        entity = FUN_020352c0(FUN_020352a4(DAT_02108cf4, key));
        if (!entity || is_bit(entity->flags, 1)) {
            return;
        }

        FUN_0207f4fc(entity->sub64);

        {
            u32 kind = packet->kind;
            u32 mode = packet->mode;
            FUN_020368b0(entity, payload->byte9, kind, mode, owner == FUN_02084cc0(DAT_0211a51c));
        }

        if (!to_bool(packet->bit31)) {
            if (to_bool(packet->bit30)) {
                FUN_020366e4(entity);
            } else {
                FUN_020369c8(entity, packet->amount, 2, payload->byte9);
            }
        }

        stats = &entity->stats;
        player = DAT_02108d04;
        if (player && !FUN_0203ae60(player)) {
            int amount;
            if (FUN_020855bc(payload->owner) - 1 <= 1) {
                amount = stats->expVal;
            } else {
                amount = (int)(((long long)stats->expVal * 0xccd + 0x800) >> 12);
            }
            if (player->level < 100) {
                player->v37((s16)amount);
                FUN_020369c8(entity, amount, 8, payload->byte9);
            } else {
                FUN_020369c8(entity, 0, 6, payload->byte9);
            }
        }

        child = entity->child;
        child->flags |= 2;
        ((void (*)(struct Child *, struct Payload *))child->vtable[0x14 / 4])(child, payload);
        FUN_020a1158(**entity->unk14);
    }
}
