// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

extern void *DAT_020f670c;
extern void FUN_020654b4(u8 data, void *dest, u32 size);
extern s32 FUN_0201d5fc(const void *dict, const void *name);

typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 ofsTree;
    u16 ofsEntry;
} Dict;

typedef struct {
    u16 sizeUnit;
    u16 ofsName;
} DictEntryHeader;

typedef struct {
    u8 name[16];
} ResName;

typedef struct {
    u8 pad[8];
    Dict dict;
} ResAnm;

typedef struct {
    u32 pad0;
    u32 pad1;
    u32 ofsMat;
    u8 pad2[12];
    u8 numMat;
} ResMdl;

typedef struct {
    u8 pad[4];
    Dict dict;
} ResMat;

typedef struct {
    u8 pad0[0xc];
    void *funcAnm;
    u8 pad1[9];
    u8 numMapData;
    u16 mapData[1];
} AnmObj;

static inline const ResName *GetResNameByIdx(const Dict *dict, u32 idx) {
    if (dict && idx < dict->numEntry) {
        DictEntryHeader *hdr = (DictEntryHeader *)((u8 *)dict + dict->ofsEntry);
        return (const ResName *)((u8 *)hdr + hdr->ofsName) + idx;
    }
    return 0;
}

static inline s32 GetMatIdxByName(const ResMat *mat, const ResName *name) {
    if (mat) {
        return FUN_0201d5fc(&mat->dict, name);
    }
    return -1;
}

void FUN_0201f170(AnmObj *pAnmObj, const ResAnm *pResAnm, const ResMdl *pResMdl) {
    u32 i;
    const ResMat *mat;
    if (pResMdl && pResMdl->ofsMat != 0) {
        mat = (const ResMat *)((const u8 *)pResMdl + pResMdl->ofsMat);
    } else {
        mat = 0;
    }

    pAnmObj->funcAnm = DAT_020f670c;
    pAnmObj->numMapData = pResMdl->numMat;
    FUN_020654b4(0, &pAnmObj->mapData[0], sizeof(u16) * pAnmObj->numMapData);

    for (i = 0; i < pResAnm->dict.numEntry; ++i) {
        const ResName *name = GetResNameByIdx(&pResAnm->dict, i);
        s32 idx = GetMatIdxByName(mat, name);
        if (idx >= 0) {
            pAnmObj->mapData[idx] = (u16)(i | 0x100);
        }
    }
}
