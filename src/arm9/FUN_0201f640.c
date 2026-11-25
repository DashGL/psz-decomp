// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern u32 DAT_020f6704;
extern void FUN_020654b4(u32, void *, u32);
extern s32 FUN_0201d5fc(void *, void *);

typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 ofsUnit;
    u16 ofsEntry;
} Dict;

static inline void *get_name(const Dict *dict, u32 idx) {
    if (dict && idx < dict->numEntry) {
        u8 *entry = (u8 *)dict + dict->ofsEntry;
        u8 *names = entry + *(u16 *)(entry + 2);
        return names + idx * 16;
    }
    return 0;
}

void FUN_0201f640(u8 *anmObj, u8 *resAnm, u8 *resMdl) {
    u32 i;
    u8 *mat;
    if (resMdl && *(u32 *)(resMdl + 8)) {
        mat = resMdl + *(u32 *)(resMdl + 8);
    } else {
        mat = 0;
    }
    *(u32 *)(anmObj + 0xc) = DAT_020f6704;
    anmObj[0x19] = resMdl[0x18];
    FUN_020654b4(0, anmObj + 0x1a, (u32)anmObj[0x19] * 2);
    for (i = 0; i < resAnm[9]; ++i) {
        void *name = get_name((const Dict *)(resAnm + 8), i);
        s32 idx;
        if (mat) {
            idx = FUN_0201d5fc(mat + 4, name);
        } else {
            idx = -1;
        }
        if (idx >= 0) {
            *(u16 *)(anmObj + 0x1a + idx * 2) = (u16)(i | 0x100);
        }
    }
}
