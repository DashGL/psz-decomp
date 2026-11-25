// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;

typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
} NNSG3dResDict;

typedef struct {
    u16 sizeUnit;
    u16 numEntry;
} NNSG3dResDictEntryHeader;

typedef struct {
    u32 ofsMat;
    NNSG3dResDict dict;
} NNSG3dResMat;

typedef struct {
    NNSG3dResDict dict;
} NNSG3dResShp;

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
    s32 magW;
    s32 magH;
} NNSG3dResMatData;

typedef struct {
    u16 itemTag;
    u16 size;
    u32 flag;
    u32 ofsDL;
    u32 sizeDL;
} NNSG3dResShpData;

typedef struct {
    u32 size;
    u32 ofsSbc;
    u32 ofsMat;
    u32 ofsShp;
    u32 ofsEvpMtx;
    u8 sbcType;
    u8 scalingRule;
    u8 texMtxMode;
    u8 numNode;
    u8 numMat;
    u8 numShp;
    u8 firstUnusedMtxStackID;
    u8 dummy_;
    s32 posScale;
    s32 invPosScale;
} NNSG3dResMdl;

typedef struct {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmPolygonEmi;
    u32 prmTexImage;
    s32 scaleS;
    s32 scaleT;
    s16 sinR;
    s16 cosR;
    s32 transS;
    s32 transT;
    u16 origWidth;
    u16 origHeight;
    s32 magW;
    s32 magH;
} NNSG3dMatAnmResult;

typedef void (*NNSG3dFuncSendTexSRT)(const NNSG3dMatAnmResult *);
extern NNSG3dFuncSendTexSRT UNK_020f6784[];
extern void FUN_0201c9d4(u32, const void *, u32);
extern void FUN_0201c920(const void *, u32);


static inline void NNS_G3dGeScale(s32 x, s32 y, s32 z)
{
    s32 s[3];
    s[0] = x;
    s[1] = y;
    s[2] = z;
    FUN_0201c9d4(0x1b, s, 3);
}

static inline void *NNS_G3dGetResDataByIdx(const NNSG3dResDict *dict, u32 idx)
{
    NNSG3dResDictEntryHeader *hdr;
    if (dict && idx < dict->numEntry) {
        hdr = (NNSG3dResDictEntryHeader *)((u8 *)dict + dict->ofsEntry);
        return (u8 *)hdr + sizeof(NNSG3dResDictEntryHeader) + hdr->sizeUnit * idx;
    }
    return 0;
}

static inline NNSG3dResMat *NNS_G3dGetMat(const NNSG3dResMdl *mdl)
{
    if (mdl && mdl->ofsMat != 0) {
        return (NNSG3dResMat *)((u8 *)mdl + mdl->ofsMat);
    }
    return 0;
}

static inline NNSG3dResShp *NNS_G3dGetShp(const NNSG3dResMdl *mdl)
{
    if (mdl && mdl->ofsShp != 0) {
        return (NNSG3dResShp *)((u8 *)mdl + mdl->ofsShp);
    }
    return 0;
}

static inline NNSG3dResMatData *NNS_G3dGetMatDataByIdx(const NNSG3dResMat *mat, u32 idx)
{
    u32 *p;
    if (mat) {
        p = (u32 *)NNS_G3dGetResDataByIdx(&mat->dict, idx);
        if (p) {
            return (NNSG3dResMatData *)((u8 *)mat + *p);
        }
    }
    return 0;
}

static inline NNSG3dResShpData *NNS_G3dGetShpDataByIdx(const NNSG3dResShp *shp, u32 idx)
{
    u32 *p;
    if (shp) {
        p = (u32 *)NNS_G3dGetResDataByIdx(&shp->dict, idx);
        if (p) {
            return (NNSG3dResShpData *)((u8 *)shp + *p);
        }
    }
    return 0;
}

void FUN_0201c5fc(const NNSG3dResMdl *pResMdl, u32 matID, u32 shpID, int sendMat)
{
    u32 cmd[7];
    NNSG3dMatAnmResult anm;

    if (pResMdl->posScale != 4096) {
        NNS_G3dGeScale(pResMdl->posScale, pResMdl->posScale, pResMdl->posScale);
    }

    if (sendMat) {
        if (matID < pResMdl->numMat) {
            const NNSG3dResMatData *mat;
            mat = NNS_G3dGetMatDataByIdx(NNS_G3dGetMat(pResMdl), matID);
            if (!(mat->polyAttr & 0x001f0000)) {
                return;
            }
            cmd[0] = 0x00293130;
            cmd[1] = mat->diffAmb;
            cmd[2] = mat->specEmi;
            cmd[3] = mat->polyAttr;
            if (mat->flag & 0x20) {
                cmd[3] &= ~0x001f0000u;
            }
            cmd[4] = 0x00002b2a;
            cmd[5] = mat->texImageParam;
            cmd[6] = mat->texPlttBase;
            FUN_0201c9d4(cmd[0], &cmd[1], 6);

            if (mat->flag & 1) {
                const u8 *p;
                anm.flag = 8;
                anm.origWidth = mat->origWidth;
                anm.origHeight = mat->origHeight;
                anm.magW = mat->magW;
                anm.magH = mat->magH;
                p = (const u8 *)mat + sizeof(NNSG3dResMatData);

                if (!(mat->flag & 2)) {
                    anm.scaleS = *(const s32 *)p;
                    anm.scaleT = *(const s32 *)(p + 4);
                    p += 8;
                } else {
                    anm.flag |= 1;
                }

                if (!(mat->flag & 4)) {
                    anm.sinR = *(const s16 *)p;
                    anm.cosR = *(const s16 *)(p + 2);
                    p += 4;
                } else {
                    anm.flag |= 2;
                }

                if (!(mat->flag & 8)) {
                    anm.transS = *(const s32 *)p;
                    anm.transT = *(const s32 *)(p + 4);
                } else {
                    anm.flag |= 4;
                }

                if (UNK_020f6784[pResMdl->texMtxMode]) {
                    (*UNK_020f6784[pResMdl->texMtxMode])(&anm);
                }
            }
        }
    }

    if (shpID < pResMdl->numShp) {
        const NNSG3dResShpData *shp;
        shp = NNS_G3dGetShpDataByIdx(NNS_G3dGetShp(pResMdl), shpID);
        FUN_0201c920((const u8 *)shp + shp->ofsDL, shp->sizeDL);
    }

    if (pResMdl->invPosScale != 4096) {
        NNS_G3dGeScale(pResMdl->invPosScale, pResMdl->invPosScale, pResMdl->invPosScale);
    }
}
