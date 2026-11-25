// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int fx32;

typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 ofsTree;
    u16 ofsEntry;
} ResDict;

typedef struct {
    u16 sizeUnit;
    u16 ofsName;
} ResDictEntryHeader;

typedef struct {
    u16 ofsTexPlttInfo;
    u16 ofsDict;
    ResDict dict;
} ResMat;

typedef struct {
    u16 itemTag;
    u16 size;
    u32 diffAmb;
    u32 specEmi;
    u32 polyAttr;
    u32 polyAttrMask;
    u32 texImageParam;
    u32 texImageParamMask;
    u16 texPlttBase;
    u16 flag;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
} ResMatData;

typedef struct {
    u16 offset;
    u8 numIdx;
    u8 flag;
} ResDictTexToMatIdxData;

typedef struct {
    u32 texImageParam;
    u32 extraParam;
} ResDictTexData;

typedef struct {
    u32 vramKey;
    u16 sizeTex;
    u16 ofsDict;
    u16 flag;
    u16 pad;
    u32 ofsTex;
} ResTexInfo;

typedef struct {
    u32 header[2];
    ResTexInfo texInfo;
    ResTexInfo tex4x4Info;
} ResTex;

extern fx32 FUN_0205c520(fx32, fx32);

static inline void *GetResDataByIdx(const ResDict *dict, u32 idx) {
    if (dict) {
        if (idx < dict->numEntry) {
            const ResDictEntryHeader *hdr = (const ResDictEntryHeader *)((const u8 *)dict + dict->ofsEntry);
            return (void *)((const u8 *)hdr + 4 + hdr->sizeUnit * idx);
        }
    }
    return 0;
}

static inline ResMatData *GetMatDataByIdx(const ResMat *mat, u32 idx) {
    if (mat) {
        u32 *p = (u32 *)GetResDataByIdx(&mat->dict, idx);
        if (p) {
            return (ResMatData *)((u8 *)mat + *p);
        }
    }
    return 0;
}

void FUN_02018f0c(ResMat *mat, ResDictTexToMatIdxData *bindData, const ResTex *tex, const ResDictTexData *texData) {
    u32 vramOffset;
    u32 i;
    u8 *matIdxArray = (u8 *)mat + bindData->offset;

    if ((texData->texImageParam & 0x1c000000) != 0x14000000) {
        vramOffset = ((u16)tex->texInfo.vramKey) & ~0xe0000000u;
    } else {
        vramOffset = ((u16)tex->tex4x4Info.vramKey) & ~0xe0000000u;
    }

    for (i = 0; i < bindData->numIdx; ++i) {
        ResMatData *matData = GetMatDataByIdx(mat, matIdxArray[i]);
        u32 w, h;
        matData->texImageParam |= texData->texImageParam + vramOffset;
        w = texData->extraParam & 0x7ff;
        h = (texData->extraParam & (0x7ff << 11)) >> 11;
        if (w == matData->origWidth) {
            matData->magW = 4096;
        } else {
            matData->magW = FUN_0205c520(w << 12, matData->origWidth << 12);
        }
        if (h == matData->origHeight) {
            matData->magH = 4096;
        } else {
            matData->magH = FUN_0205c520(h << 12, matData->origHeight << 12);
        }
    }
    bindData->flag |= 1;
}
