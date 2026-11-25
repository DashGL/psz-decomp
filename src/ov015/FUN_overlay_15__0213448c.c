// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
void FUN_02068728(void);
void FUN_overlay_15__02133d2c(int);
unsigned short FUN_overlay_15__021344dc(unsigned short);

typedef void (*LogFn)(int, const void *, int);

struct LogCtx {
    LogFn log;
    char *state;
};

extern struct LogCtx data_0213e8e0;

int FUN_overlay_15__0213448c(void) {
    if (*(int *)(data_0213e8e0.state + 0x40) != 7) {
        FUN_02068728();
    }
    FUN_overlay_15__02133d2c(1);
    *(unsigned short *)(data_0213e8e0.state + 0x5c) = FUN_overlay_15__021344dc(*(unsigned short *)(data_0213e8e0.state + 0x60));
    if (data_0213e8e0.log != 0) {
        data_0213e8e0.log(0x08000000, (const void *)0x0213c15c, *(unsigned short *)(data_0213e8e0.state + 0x5c));
    }
    return *(unsigned short *)(data_0213e8e0.state + 0x5c);
}
