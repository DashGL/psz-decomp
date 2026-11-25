// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef short s16;
typedef unsigned char u8;
typedef int fx32;

typedef struct NNSG3dMatAnmResult {
    u32 flag;
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
    u32 prmTexImage;
    u32 prmTexPltt;
    fx32 scaleS;
    fx32 scaleT;
    s16 sinR;
    s16 cosR;
    fx32 transS;
    fx32 transT;
    u16 origWidth;
    u16 origHeight;
    fx32 magW;
    fx32 magH;
} NNSG3dMatAnmResult;

typedef struct {
    u8 revision;
    u8 numEntry;
    u16 sizeDictBlk;
    u16 dummy_;
    u16 ofsEntry;
} NNSG3dResDict;

typedef struct {
    u16 sizeUnit;
    u16 ofsName;
} NNSG3dResDictEntryHeader;

typedef struct {
    u16 ofsTexPlttToMatList;
    u8 nMat;
    u8 dummy;
    NNSG3dResDict dict;
} NNSG3dResMat;

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
} NNSG3dResMatData;

typedef struct {
    u32 flag;
    void *resMdl;
    void *anmMat;
    void (*funcBlendMat)(NNSG3dMatAnmResult *, void *, u32);
    u32 pad[10];
    NNSG3dMatAnmResult *recMatAnm;
    u32 flagMatAnm[2];
} NNSG3dRenderObj;

typedef struct NNSG3dRS {
    u8 *c;
    NNSG3dRenderObj *pRenderObj;
    u32 flag;
    u32 pad1[4];
    void (*cbVecFunc)(struct NNSG3dRS *);
    u32 pad2[28];
    u8 cbVecTiming;
    u8 pad3[0x1c];
    u8 currentMat;
    u8 pad4[2];
    NNSG3dMatAnmResult *pMatAnmResult;
    u32 pad5[2];
    u32 isMatCached[2];
    u32 pad6[2];
    NNSG3dResMat *pResMat;
    u32 pad7[5];
    void (*funcJntScale)(NNSG3dMatAnmResult *);
    NNSG3dMatAnmResult tmpMatAnmResult;
} NNSG3dRS;

typedef struct {
    u32 pad[0x25];
    u32 prmMatColor0;
    u32 prmMatColor1;
    u32 prmPolygonAttr;
} NNSG3dGlb;

extern NNSG3dGlb UNK_0210571c;
extern u32 UNK_020ec044[];
extern NNSG3dMatAnmResult UNK_02105984[];
extern void FUN_0201c9d4(u32, const u32 *, u32);

static inline void *GetResDataByIdx(const NNSG3dResDict *dict, u32 idx) {
    if (dict) {
        if (idx < dict->numEntry) {
            const NNSG3dResDictEntryHeader *e = (const NNSG3dResDictEntryHeader *)((const u8 *)dict + dict->ofsEntry);
            return (void *)((const u8 *)e + 4 + e->sizeUnit * idx);
        }
    }
    return 0;
}

static inline NNSG3dResMatData *GetMatDataByIdx(const NNSG3dResMat *mat, u32 idx) {
    if (mat) {
        u32 *p = (u32 *)GetResDataByIdx(&mat->dict, idx);
        if (p) {
            return (NNSG3dResMatData *)((const u8 *)mat + *p);
        }
    }
    return 0;
}

static inline int CheckCallBack(NNSG3dRS *rs, int timing) {
    if (rs->cbVecFunc) {
        return rs->cbVecTiming;
    }
    return 0;
}

static inline int CallBackCheck_A(NNSG3dRS *rs, int *timing) {
    if (*timing == 1) {
        rs->flag &= ~0x40;
        rs->cbVecFunc(rs);
        *timing = CheckCallBack(rs, 1);
        return (int)(rs->flag & 0x40);
    }
    return 0;
}

static inline int CallBackCheck_B(NNSG3dRS *rs, int *timing) {
    if (*timing == 2) {
        rs->flag &= ~0x40;
        rs->cbVecFunc(rs);
        *timing = CheckCallBack(rs, 2);
        return (int)(rs->flag & 0x40);
    }
    return 0;
}

static inline void CallBackCheck_C(NNSG3dRS *rs, int timing) {
    if (timing == 3) {
        rs->flag &= ~0x40;
        rs->cbVecFunc(rs);
    }
}

void FUN_0201a4ec(NNSG3dRS *rs, u32 opt, const NNSG3dResMatData *mat, u32 idxMat) {
    int timing;
    NNSG3dMatAnmResult *pMat;

    rs->currentMat = (u8)idxMat;
    rs->flag |= 8;
    rs->pMatAnmResult = &rs->tmpMatAnmResult;

    timing = CheckCallBack(rs, 0);
    if (!CallBackCheck_A(rs, &timing)) {
        NNSG3dMatAnmResult *rec = rs->pRenderObj->recMatAnm;
        if (rec && !(rs->flag & 0x80)) {
            pMat = rec + idxMat;
        } else {
            if ((opt == 0x20 || opt == 0x40) && (rs->isMatCached[idxMat >> 5] & (1U << (idxMat & 31)))) {
                if (rec) {
                    pMat = rec + idxMat;
                } else {
                    pMat = &UNK_02105984[idxMat];
                }
            } else {
                if (rec) {
                    rs->isMatCached[idxMat >> 5] |= 1U << (idxMat & 31);
                    pMat = rs->pRenderObj->recMatAnm + idxMat;
                } else if (opt == 0x40) {
                    rs->isMatCached[idxMat >> 5] |= 1U << (idxMat & 31);
                    pMat = &UNK_02105984[idxMat];
                } else {
                    pMat = &rs->tmpMatAnmResult;
                }

                pMat->flag = 0;

                if (GetMatDataByIdx(rs->pResMat, idxMat)->flag & 0x20) {
                    pMat->flag |= 0x20;
                }

                {
                    u32 mask = UNK_020ec044[(mat->flag >> 6) & 7];
                    pMat->prmMatColor0 = (UNK_0210571c.prmMatColor0 & ~mask) | (mat->diffAmb & mask);
                }
                {
                    u32 mask = UNK_020ec044[(mat->flag >> 9) & 7];
                    pMat->prmMatColor1 = (UNK_0210571c.prmMatColor1 & ~mask) | (mat->specEmi & mask);
                }
                pMat->prmPolygonAttr = (UNK_0210571c.prmPolygonAttr & ~mat->polyAttrMask) | (mat->polyAttr & mat->polyAttrMask);
                pMat->prmTexImage = mat->texImageParam;
                pMat->prmTexPltt = mat->texPlttBase;

                if (mat->flag & 1) {
                    const u8 *p = (const u8 *)mat + sizeof(NNSG3dResMatData);
                    if (!(mat->flag & 2)) {
                        pMat->scaleS = *(const fx32 *)p;
                        pMat->scaleT = *(const fx32 *)(p + 4);
                        p += 8;
                    } else {
                        pMat->flag |= 1;
                    }
                    if (!(mat->flag & 4)) {
                        pMat->sinR = *(const s16 *)p;
                        pMat->cosR = *(const s16 *)(p + 2);
                        p += 4;
                    } else {
                        pMat->flag |= 2;
                    }
                    if (!(mat->flag & 8)) {
                        pMat->transS = *(const fx32 *)p;
                        pMat->transT = *(const fx32 *)(p + 4);
                    } else {
                        pMat->flag |= 4;
                    }
                    pMat->flag |= 8;
                }

                if (rs->pRenderObj->anmMat && (rs->pRenderObj->flagMatAnm[idxMat >> 5] & (1U << (idxMat & 31)))) {
                    rs->pRenderObj->funcBlendMat(pMat, rs->pRenderObj->anmMat, idxMat);
                }

                if (pMat->flag & 0x18) {
                    pMat->origWidth = mat->origWidth;
                    pMat->origHeight = mat->origHeight;
                    pMat->magW = mat->magW;
                    pMat->magH = mat->magH;
                }
            }
        }
        rs->pMatAnmResult = pMat;
    }

    if (!CallBackCheck_B(rs, &timing)) {
        NNSG3dMatAnmResult *p = rs->pMatAnmResult;
        if (p->prmPolygonAttr & 0x1f0000) {
            if (p->flag & 0x20) {
                p->prmPolygonAttr &= ~0x1f0000;
            }
            rs->flag &= ~2;
            if (!(rs->flag & 0x100)) {
                u32 cmd[7];
                cmd[0] = 0x00293130;
                cmd[1] = p->prmMatColor0;
                cmd[2] = p->prmMatColor1;
                cmd[3] = p->prmPolygonAttr;
                cmd[4] = 0x00002b2a;
                cmd[5] = p->prmTexImage;
                cmd[6] = p->prmTexPltt;
                FUN_0201c9d4(cmd[0], &cmd[1], 6);

                if (p->flag & 0x18) {
                    rs->funcJntScale(p);
                }
            }
        } else {
            rs->flag |= 2;
        }
    }

    CallBackCheck_C(rs, timing);
}
