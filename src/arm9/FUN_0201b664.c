// flags: -O4,p -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef short s16;
typedef int s32;
typedef long long s64;

typedef struct {
    s32 _00, _01, _02;
    s32 _10, _11, _12;
    s32 _20, _21, _22;
    s32 _30, _31, _32;
} MtxFx43;

typedef struct {
    s32 _00, _01, _02, _03;
    s32 _10, _11, _12, _13;
    s32 _20, _21, _22, _23;
    s32 _30, _31, _32, _33;
} MtxFx44;

typedef struct {
    s32 _00, _01, _02;
    s32 _10, _11, _12;
    s32 _20, _21, _22;
} MtxFx33;

typedef struct {
    MtxFx43 invM;
    MtxFx33 invN;
} EvpMtx;

typedef struct {
    MtxFx44 M;
    MtxFx33 N;
} EvpCache;

typedef struct {
    u32 pad[4];
    u32 ofsEvpMtx;
} ResMdl;

typedef struct {
    u32 pad;
    ResMdl *resMdl;
} RenderObj;

typedef struct {
    u8 *c;
    RenderObj *pRenderObj;
    u8 pad[0xbc];
    volatile u32 isEvpMtxCached[8];
} G3dRS;

extern EvpCache DAT_02106384[];
extern void FUN_0206557c(u32, void *, u32);
extern void FUN_0201c8a0(void);
extern void FUN_0205e56c(const MtxFx43 *);
extern int FUN_0205e8c4(MtxFx44 *);
extern void FUN_0205e588(const MtxFx33 *);
extern int FUN_0205e8f4(MtxFx33 *);
extern void FUN_0205e550(const void *);

void FUN_0201b664(G3dRS *rs)
{
    struct {
        MtxFx43 M;
        MtxFx33 N;
    } sum;
    EvpMtx *evpMtx = (EvpMtx *)((u8 *)rs->pRenderObj->resMdl + rs->pRenderObj->resMdl->ofsEvpMtx);
    u32 numMtx = rs->c[2];
    u32 i;
    s64 w = 0;
    u8 *p = rs->c + 3;
    MtxFx44 *pM;
    MtxFx33 *pN;

    FUN_0206557c(0, &sum, sizeof(sum));
    FUN_0201c8a0();

    *(volatile u32 *)0x04000440 = 0;
    *(volatile u32 *)0x0400044c = 1;
    *(volatile u32 *)0x04000454 = 0;
    *(volatile u32 *)0x04000440 = 2;

    for (i = 0; i < numMtx; i++) {
        u32 idxNode = p[1];
        s32 off = (s16)idxNode * (s16)sizeof(EvpCache);
        u32 isCached = rs->isEvpMtxCached[idxNode >> 5] & (1 << (idxNode & 31));
        pM = (MtxFx44 *)((u8 *)DAT_02106384 + off);

        if (!isCached) {
            rs->isEvpMtxCached[idxNode >> 5] |= (1 << (idxNode & 31));
            *(volatile u32 *)0x04000450 = p[0];
            *(volatile u32 *)0x04000440 = 1;
            FUN_0205e56c(&evpMtx[idxNode].invM);
        }

        if (i != 0) {
            sum.N._00 += (w * pN->_00) >> 12;
            sum.N._01 += (w * pN->_01) >> 12;
            sum.N._02 += (w * pN->_02) >> 12;
            sum.N._10 += (w * pN->_10) >> 12;
            sum.N._11 += (w * pN->_11) >> 12;
            sum.N._12 += (w * pN->_12) >> 12;
            sum.N._20 += (w * pN->_20) >> 12;
            sum.N._21 += (w * pN->_21) >> 12;
            sum.N._22 += (w * pN->_22) >> 12;
        }

        if (!isCached) {
            while (FUN_0205e8c4(pM)) {
            }
            *(volatile u32 *)0x04000440 = 2;
            FUN_0205e588(&evpMtx[idxNode].invN);
        }

        {
            s32 w32 = p[2] << 4;
            sum.M._00 += ((s64)w32 * pM->_00) >> 12;
            sum.M._01 += ((s64)w32 * pM->_01) >> 12;
            sum.M._02 += ((s64)w32 * pM->_02) >> 12;
            sum.M._10 += ((s64)w32 * pM->_10) >> 12;
            sum.M._11 += ((s64)w32 * pM->_11) >> 12;
            sum.M._12 += ((s64)w32 * pM->_12) >> 12;
            sum.M._20 += ((s64)w32 * pM->_20) >> 12;
            sum.M._21 += ((s64)w32 * pM->_21) >> 12;
            sum.M._22 += ((s64)w32 * pM->_22) >> 12;
            sum.M._30 += ((s64)w32 * pM->_30) >> 12;
            sum.M._31 += ((s64)w32 * pM->_31) >> 12;
            sum.M._32 += ((s64)w32 * pM->_32) >> 12;
            w = w32;
        }

        p += 3;
        pN = (MtxFx33 *)((u8 *)&DAT_02106384[0].N + off);
        if (!isCached) {
            while (FUN_0205e8f4(pN)) {
            }
        }
    }

    sum.N._00 += (w * pN->_00) >> 12;
    sum.N._01 += (w * pN->_01) >> 12;
    sum.N._02 += (w * pN->_02) >> 12;
    sum.N._10 += (w * pN->_10) >> 12;
    sum.N._11 += (w * pN->_11) >> 12;
    sum.N._12 += (w * pN->_12) >> 12;
    sum.N._20 += (w * pN->_20) >> 12;
    sum.N._21 += (w * pN->_21) >> 12;
    sum.N._22 += (w * pN->_22) >> 12;

    FUN_0205e550(&sum.N);
    *(volatile u32 *)0x04000440 = 1;
    FUN_0205e550(&sum.M);
    *(volatile u32 *)0x04000440 = 0;
    *(volatile u32 *)0x04000450 = 1;
    *(volatile u32 *)0x04000440 = 2;
    *(volatile u32 *)0x0400044c = rs->c[1];

    rs->c += (rs->c[2] + 1) * 3;
}
