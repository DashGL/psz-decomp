// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;

typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
} NNSG3dResDict;

typedef struct {
    u32 pad0[3];
    NNSG3dResDict dict;
} NNSG3dResAnm;

typedef struct {
    u32 pad0[2];
    u32 ofsMat;
    u32 pad1[3];
    u8 numMat;
} NNSG3dResMdl;

typedef struct {
    u32 pad0[2];
    void *resAnm;
    void *funcAnm;
    u32 pad1[2];
    u8 pad2;
    u8 numMapData;
    u16 mapData[1];
} NNSG3dAnmObj;

extern void *DAT_020f6708;
extern void FUN_020654b4(int, void *, u32);
extern s32 FUN_0201d5fc(const void *, const void *);

static inline void *get_mat(const NNSG3dResMdl *mdl) {
    if (mdl && mdl->ofsMat != 0) {
        return (u8 *)mdl + mdl->ofsMat;
    }
    return 0;
}

static inline const void *get_name(const NNSG3dResDict *dict, u32 idx) {
    if (dict && idx < dict->numEntry) {
        const u8 *p = (const u8 *)dict + dict->ofsEntry;
        return p + *(const u16 *)(p + 2) + idx * 16;
    }
    return 0;
}

static inline s32 get_idx(const void *mat, const void *name) {
    if (mat) {
        return FUN_0201d5fc((const u8 *)mat + 4, name);
    }
    return -1;
}

void FUN_0201f758(NNSG3dAnmObj *pAnmObj, const NNSG3dResAnm *pResAnm, const NNSG3dResMdl *pResMdl) {
    u32 i;
    void *mat = get_mat(pResMdl);
    pAnmObj->funcAnm = DAT_020f6708;
    pAnmObj->numMapData = pResMdl->numMat;
    pAnmObj->resAnm = (void *)pResAnm;
    FUN_020654b4(0, &pAnmObj->mapData[0], (u32)pAnmObj->numMapData * 2);

    for (i = 0; i < pResAnm->dict.numEntry; ++i) {
        const void *name = get_name(&pResAnm->dict, i);
        s32 idx = get_idx(mat, name);
        if (idx >= 0) {
            pAnmObj->mapData[idx] = (u16)(i | 0x100);
        }
    }
}
