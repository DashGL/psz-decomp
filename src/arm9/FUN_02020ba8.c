// flags: -O4,p -noThumb
typedef struct {
    unsigned int szFree;
    unsigned int szNrm;
    unsigned int sz4x4;
} Slot;

typedef struct {
    Slot s[4];
} SlotTable;

typedef struct {
    void *pFreeList;
} LnkVramMan;

typedef struct {
    LnkVramMan mgrNrm;
    LnkVramMan mgr4x4;
    void *pFreeList;
    unsigned int szNrm;
    unsigned int sz4x4;
    void *pWorkHead;
    unsigned int szWork;
} Mgr;

extern const SlotTable DAT_020ec13c;
extern Mgr DAT_02107024;
extern LnkVramMan UNK_02107024;
extern LnkVramMan DAT_02107028;
extern void *DAT_0210702c;
extern void FUN_02020728(LnkVramMan *);
extern void *FUN_02020734(void *, unsigned int);
extern int FUN_02020780(LnkVramMan *, void *, unsigned int, unsigned int);
extern void FUN_02020930(LnkVramMan *, void *);

static inline void InitSlot_(LnkVramMan *pMgr, void *pFree, unsigned int addr, unsigned int sz) {
    if (sz != 0) {
        FUN_02020780(pMgr, pFree, addr, sz);
    }
}

void FUN_02020ba8(void) {
    SlotTable t = DAT_020ec13c;
    unsigned int szNrm, sz4x4, szIdx, i, n;
    sz4x4 = DAT_02107024.sz4x4;
    szIdx = sz4x4 >> 1;
    szNrm = DAT_02107024.szNrm - (sz4x4 + szIdx);
    for (i = 0; i < 4; i++) {
        if (i == 0 || i == 2) {
            if (t.s[i].szFree != 0 && sz4x4 != 0) {
                n = t.s[i].szFree;
                if (n > sz4x4) {
                    n = sz4x4;
                }
                t.s[i].sz4x4 += n;
                sz4x4 -= n;
                t.s[i].szFree -= n;
            }
        }
    }

    t.s[1].szFree -= szIdx;

    for (i = 0; i < 4; i++) {
        if (t.s[i].szFree != 0 && szNrm != 0) {
            n = t.s[i].szFree;
            if (n > szNrm) {
                n = szNrm;
            }
            t.s[i].szNrm += n;
            szNrm -= n;
            t.s[i].szFree -= n;
        }
    }

    FUN_02020728(&UNK_02107024);
    FUN_02020728(&DAT_02107028);
    DAT_02107024.pFreeList = FUN_02020734(DAT_02107024.pWorkHead, DAT_02107024.szWork >> 4);

    InitSlot_(&DAT_02107028, &DAT_0210702c, 0, t.s[0].sz4x4);
    InitSlot_(&UNK_02107024, &DAT_0210702c, t.s[0].sz4x4, t.s[0].szNrm);
    InitSlot_(&DAT_02107028, &DAT_0210702c, 0x40000, t.s[2].sz4x4);
    InitSlot_(&UNK_02107024, &DAT_0210702c, 0x40000 + t.s[2].sz4x4, t.s[2].szNrm);
    InitSlot_(&UNK_02107024, &DAT_0210702c, 0x60000, t.s[3].szNrm);
    InitSlot_(&UNK_02107024, &DAT_0210702c, 0x20000 + szIdx, t.s[1].szNrm);

    FUN_02020930(&UNK_02107024, &DAT_0210702c);
    FUN_02020930(&DAT_02107028, &DAT_0210702c);
}
