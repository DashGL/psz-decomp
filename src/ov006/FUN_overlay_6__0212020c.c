// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02037ff0(void *, const Vec *);
extern void FUN_02038084(void *, unsigned short);
extern void FUN_020385b4(void *, int, int, int);
extern void FUN_02046b94(void *, int);
extern void FUN_0204b49c(void *, int);
extern void *FUN_0204225c(void *, int);
extern int FUN_02046bb8(void *);
extern int FUN_02046bc8(void *);
void FUN_overlay_6__0212020c(char *self, const int *config) {
    Vec p;
    int count;
    char *object, *part;
    void *track;
    if (!config || !*(void **)(self + 752)) return;
    FUN_02035408(&p, config[2], config[3], config[4]);
    FUN_02037ff0(*(void **)(self + 752), &p);
    FUN_02038084(*(void **)(self + 752), (unsigned short)(((long long)config[5] * 0x000000b60b60b60bLL + 0x0000080000000000LL) >> 44));
    *(int *)(self + 872) = config[0];
    *(int *)(self + 876) = config[1];
    FUN_020385b4(*(void **)(self + 752), *(int *)(self + 872), 0, 0);
    track = FUN_0204225c(*(void **)(*(char **)(self + 752) + 140), 0);
    if (track) { int cur = FUN_02046bb8(track); int want = *(volatile int *)(self + 876); if (cur != want) FUN_02046b94(track, want); }
    object = *(char **)(self + 880);
    if (object) {
        part = *(char **)(object + 20);
        if (part && *(void **)(part + 48)) {
            track = FUN_0204225c(*(void **)(part + 48), 0);
            if (track) {
                count = FUN_02046bc8(track);
                if (*(int *)(self + 872) >= 14) FUN_0204b49c(*(void **)(*(char **)(self + 880) + 20), count - 1);
                else FUN_0204b49c(*(void **)(*(char **)(self + 880) + 20), 0);
            }
        }
        part = *(char **)(*(char **)(self + 880) + 24);
        if (part && *(void **)(part + 48)) {
            track = FUN_0204225c(*(void **)(part + 48), 0);
            if (track) {
                count = FUN_02046bc8(track);
                if (*(int *)(self + 872) >= 14) FUN_0204b49c(*(void **)(*(char **)(self + 880) + 20), count - 1);
                else FUN_0204b49c(*(void **)(*(char **)(self + 880) + 20), 0);
            }
        }
    }
}
