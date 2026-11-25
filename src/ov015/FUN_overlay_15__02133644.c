// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
extern void FUN_02059cd4(void *);
extern int FUN_02059fb4(void *, const void *);
extern int FUN_02059ffc(void *);
extern int FUN_020612ac(void *);
extern int FUN_0206132c(void *, void *, int);
extern int FUN_0206181c(void *, void *);

extern unsigned char *data_0213e8dc;

int FUN_overlay_15__02133644(const void **arg0) {
    unsigned char file[0x48];
    void *fp;
    int ok = 0;

    if (*arg0 == 0) {
        fp = 0;
    } else {
        FUN_02059cd4(file);
        if (!FUN_02059fb4(file, *arg0)) {
            return 0;
        }
        fp = file;
    }
    if (FUN_020612ac(fp)) {
        *(void **)(data_0213e8dc + 0x1b144) = data_0213e8dc + 0x2c;
        if (*(void **)(data_0213e8dc + 0x1b144) != 0) {
            if (FUN_0206132c(fp, *(void **)(data_0213e8dc + 0x1b144), 0x10000)) {
                if (FUN_0206181c(arg0, *(void **)(data_0213e8dc + 0x1b144))) {
                    ok = 1;
                }
            }
        }
    }
    if (fp == file) {
        FUN_02059ffc(file);
    }
    return ok;
}
