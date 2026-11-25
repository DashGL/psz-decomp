// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
int FUN_02054c94(void *, void *, void *);
void FUN_overlay_15__02133d7c(int);

typedef void (*LogFn2)(int, const void *);

struct LogCtx2 {
    LogFn2 log;
    char *state;
};

extern struct LogCtx2 data_0213e8e0;

int FUN_overlay_15__02134740(void *arg0) {
    int res = FUN_02054c94(data_0213e8e0.state + 0x13e0, arg0, data_0213e8e0.state + 0x1c00);
    if (res == 7) {
        if (data_0213e8e0.log != 0) {
            data_0213e8e0.log(0x08000000, (const void *)0x0213c190);
        }
        return 0;
    } else if (res == 5) {
        if (data_0213e8e0.log != 0) {
            data_0213e8e0.log(0x08000000, (const void *)0x0213c1c0);
        }
        FUN_overlay_15__02133d7c(res);
        return 0;
    } else if (res != 0) {
        FUN_overlay_15__02133d7c(res);
        return 0;
    }
    return 1;
}
