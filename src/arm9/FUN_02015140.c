// flags: -O4,p -noThumb
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

typedef struct {
    u32 fmt;
    u32 bExtendedPlt;
    u32 szByte;
    void *pRawData;
} PlttData;

typedef struct {
    u16 numPalette;
    u16 pad;
    u16 *pPlttIdxTbl;
} PlttCompInfo;

extern void FUN_0206740c(void *startAddr, u32 nBytes);
extern void FUN_0205f41c(void);
extern void FUN_0205f4bc(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void FUN_0205f52c(void);
extern void FUN_0205f66c(void);
extern void FUN_0205f684(const void *pSrc, u32 destSlotAddr, u32 szByte);
extern void FUN_0205f6e8(void);

void FUN_02015140(int type, const PlttData *pPlttData, const PlttCompInfo *pPlttC) {
    const u8 *pSrc;
    u32 offset = (u32)type * 0x2000;
    void (*beginLoad)(void);
    void (*endLoad)(void);
    void (*load)(const void *, u32, u32);

    FUN_0206740c(pPlttData->pRawData, pPlttData->szByte);

    if (type <= 3) {
        beginLoad = FUN_0205f41c;
        load = FUN_0205f4bc;
        endLoad = FUN_0205f52c;
    } else {
        beginLoad = FUN_0205f66c;
        load = FUN_0205f684;
        endLoad = FUN_0205f6e8;
        offset -= 0x8000;
    }

    if (pPlttC != 0) {
        int i;
        u16 idx;
        u32 szPltt;
        int num;
        switch (pPlttData->fmt) {
        case 3:
            szPltt = 0x20;
            break;
        case 4:
            szPltt = 0x200;
            break;
        default:
            szPltt = 0;
            break;
        }
        num = pPlttC->numPalette;
        for (i = 0; i < num; i++) {
            idx = pPlttC->pPlttIdxTbl[i];
            pSrc = (const u8 *)pPlttData->pRawData;
            beginLoad();
            load(pSrc + szPltt * i, offset + szPltt * idx, szPltt);
            endLoad();
        }
    } else {
        beginLoad();
        load(pPlttData->pRawData, offset, pPlttData->szByte);
        endLoad();
    }
}
