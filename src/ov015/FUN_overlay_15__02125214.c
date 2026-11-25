// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
void FUN_overlay_15__021252f8(void *, void *);
void *FUN_overlay_15__02135f98(int, int);
int FUN_overlay_15__02127f40(void *, int, int, int);
int FUN_overlay_15__02125430(void);
void FUN_overlay_15__0213627c(void *, int, int, int, int, int, int, int);
void FUN_overlay_15__02136368(void *);

int FUN_overlay_15__02125214(int a, int b, int c) {
    void *obj;
    int res;

    if (*(unsigned char *)0x0213e78c != 0) {
        return 0;
    }
    FUN_overlay_15__021252f8((void *)0x0213a9b0, (void *)0x0205ee7c);
    *(volatile int *)0x04001010 = 0x01920000;
    obj = FUN_overlay_15__02135f98(1, 0);
    res = FUN_overlay_15__02127f40(*(void **)0x0213e818, a, b, c);
    FUN_overlay_15__0213627c(obj, 0x14, 0, 0xd8, 0x40, 2, FUN_overlay_15__02125430(), res);
    FUN_overlay_15__02136368(obj);
    *(unsigned char *)0x0213e78c = 1;
    return 1;
}
