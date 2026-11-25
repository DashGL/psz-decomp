// flags: -O4,p
struct ScanEntry { unsigned char pad[192]; };
struct OutEntry { unsigned char pad[84]; };
struct OutList { int count; struct OutEntry entries[1]; };
extern struct {
    void *(*allocate)(unsigned int);
    void *event;
    void *reserved;
    void (*release)(void *);
} data_0213d0a0;
extern unsigned int data_0213d0c0[];
extern int FUN_overlay_15__021211d0(const void *, const void *, int, unsigned int);
extern void FUN_02067fd8(void *);
extern void FUN_02068114(void *, long long, void (*)(unsigned int), unsigned int);
extern void FUN_overlay_15__02120960(unsigned int);
extern int FUN_02066fc8(void *, unsigned int *, int);
extern int FUN_overlay_15__0212118c(void *, int);
extern int FUN_overlay_15__021212c0(void);
extern void FUN_overlay_15__0212088c(const void *, void *);
extern void FUN_020681f0(void *);

int FUN_overlay_15__02120b08(void **out) {
    unsigned int alarm[11];
    unsigned int message;
    volatile int result = -1;
    volatile int running = 1;
    int stopped = 0;
    int count = 0;
    int repeats = 0;
    struct ScanEntry *p;
    void *buffer;
    struct OutList *allocation;
    int i;

    if (!data_0213d0a0.allocate || !data_0213d0a0.release) {
        return -1;
    }
    p = (struct ScanEntry *)data_0213d0a0.allocate(0x3000);
    if (!p) {
        return -1;
    }
    buffer = p;
    if (!FUN_overlay_15__021211d0(0, 0, 0, 0x30bffe)) {
        goto release;
    }
    FUN_02067fd8(alarm);
    FUN_02068114(alarm, 0x3fec42LL, FUN_overlay_15__02120960, 19);
    do {
        FUN_02066fc8(data_0213d0c0, &message, 1);
        switch (message) {
        case 19:
            if (!stopped) {
                if (repeats) {
                    count = FUN_overlay_15__0212118c(p, 64);
                }
                if (!FUN_overlay_15__021212c0()) {
                    goto cleanup;
                }
                stopped = 1;
            }
            break;
        case 5:
            if (!stopped) {
                if (repeats < 8) {
                    repeats++;
                } else {
                    count = FUN_overlay_15__0212118c(p, 64);
                    if (!FUN_overlay_15__021212c0()) {
                        goto cleanup;
                    }
                    stopped = 1;
                }
            }
            break;
        case 10:
            running = 0;
            result = 0;
            break;
        case 4:
        case 8:
        case 18:
            break;
        case 0:
        case 1:
        case 2:
        case 3:
        case 6:
        case 7:
        case 9:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 17:
        default:
            goto cleanup;
        }
    } while (running);
    if (count) {
        allocation = (struct OutList *)data_0213d0a0.allocate((count - 1) * 84 + 88);
        if (!allocation) {
            goto cleanup;
        }
    } else {
        allocation = (struct OutList *)data_0213d0a0.allocate(88);
        if (!allocation) {
            goto cleanup;
        }
    }
    *out = allocation;
    allocation->count = count;
    for (i = 0; i < count; i++) {
        FUN_overlay_15__0212088c(p++, &allocation->entries[i]);
    }
cleanup:
    FUN_020681f0(alarm);
    while (FUN_02066fc8(data_0213d0c0, &message, 0) == 1) {
    }
release:
    data_0213d0a0.release(buffer);
    return result;
}
