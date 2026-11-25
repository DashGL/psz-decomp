// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
typedef void (*LogFn)(int, const void *, const void *);

struct LogCtx {
    LogFn log;
    char *state;
};

extern struct LogCtx data_0213e8e0;
extern const void *data_0213bf58[];

void FUN_overlay_15__02133d2c(int next_state) {
    if (data_0213e8e0.log != 0) {
        data_0213e8e0.log(0x08000000, (const void *)0x0213c038, data_0213bf58[*(int *)(data_0213e8e0.state + 0x40)]);
    }
    *(int *)(data_0213e8e0.state + 0x40) = next_state;
    if (data_0213e8e0.log != 0) {
        data_0213e8e0.log(0x08000000, (const void *)0x0213c040, data_0213bf58[*(int *)(data_0213e8e0.state + 0x40)]);
    }
}
