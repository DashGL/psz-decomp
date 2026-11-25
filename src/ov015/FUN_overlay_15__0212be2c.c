// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
int FUN_overlay_15__02133040(void);
void FUN_overlay_15__02127de4(const void *);
void FUN_overlay_15__02127e24(int *, int *);

typedef void (*CbFn)(void *);

struct CbPair {
    CbFn fn[2];
};

struct Data0213a318 {
    int pad[4];
    struct CbPair cbs;
};

extern struct Data0213a318 data_0213a318;
extern char *data_0213e860;

void FUN_overlay_15__0212be2c(void) {
    struct CbPair cbs = data_0213a318.cbs;
    int idx;

    if (FUN_overlay_15__02133040() == 0) {
        char *p = data_0213e860;
        if ((unsigned char)p[0x2a] == 0) {
            **(unsigned int **)(p + 4) &= 0xc1fffcffu;
            FUN_overlay_15__02127de4((const void *)0x0212b9ed);
            return;
        }
        FUN_overlay_15__02127e24(&idx, 0);
        cbs.fn[idx](data_0213e860 + 8);
        FUN_overlay_15__02127de4((const void *)0x0212bc55);
    }
}
