// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

struct Dict {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy;
    u16 ofsEntry;
};

struct ResTexSRTAnm {
    u8 pad[8];
    struct Dict dict;
};

struct TexSRTData {
    u32 scaleS;
    u32 scaleSEx;
    u32 scaleT;
    u32 scaleTEx;
    u32 rot;
    u32 rotEx;
    u32 transS;
    u32 transSEx;
    u32 transT;
    u32 transTEx;
};

struct TexSRTResult {
    u32 flag;
    u32 pad[5];
    u32 scaleS;
    u32 scaleT;
    u16 cosR;
    u16 sinR;
    u32 transS;
    u32 transT;
};

extern u32 FUN_0201f334(const struct ResTexSRTAnm *, u32, u32, u32);
extern u32 FUN_0201f434(const struct ResTexSRTAnm *, u32, u32, u32);

static inline const struct TexSRTData *get_data(const struct Dict *dict, u32 idx) {
    if (dict && idx < dict->numEntry) {
        u32 table = (u32)dict + dict->ofsEntry;
        return (const struct TexSRTData *)(table + 4 + *(u16 *)table * idx);
    }
    return 0;
}

void FUN_0201f540(const struct ResTexSRTAnm *self, u32 index, u32 time, struct TexSRTResult *out) {
    const struct TexSRTData *p = get_data(&self->dict, index);
    u32 flags = out->flag;
    u32 x, y, z;

    x = FUN_0201f334(self, p->transS, p->transSEx, time);
    y = FUN_0201f334(self, p->transT, p->transTEx, time);
    if (x == 0 && y == 0) {
        flags |= 4;
    } else {
        out->transS = x;
        out->transT = y;
        flags &= ~4u;
    }

    z = FUN_0201f434(self, p->rot, p->rotEx, time);
    if (z == 0x10000000) {
        flags |= 2;
    } else {
        out->cosR = (u16)z;
        out->sinR = (u16)(z >> 16);
        flags &= ~2u;
    }

    x = FUN_0201f334(self, p->scaleS, p->scaleSEx, time);
    y = FUN_0201f334(self, p->scaleT, p->scaleTEx, time);
    if (x == 0x1000 && y == 0x1000) {
        flags |= 1;
    } else {
        out->scaleS = x;
        out->scaleT = y;
        flags &= ~1u;
    }

    out->flag = flags;
}
