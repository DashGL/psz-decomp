// flags: -O4,s
typedef struct {
    short a[89];
} Offsets_9e0f0;
extern const Offsets_9e0f0 DAT_020f49c0;
extern int FUN_020c3d34(void *, int);
extern void FUN_020c3dcc(void *, int, void *, void (*)(void *));
extern void FUN_0209e164(void *);

void *FUN_0209e0f0(char *s, int group, int index) {
    if (*(void **)(s + 8)) {
        int key = (group << 8) | index;
        if (*(int *)(s + 12) == key) {
            if (!*(int *)(s + 112)) {
                return s + 16;
            }
        } else {
            Offsets_9e0f0 offsets;
            int base;
            *(int *)(s + 112) = 0;
            offsets = DAT_020f49c0;
            base = offsets.a[group];
            if (FUN_020c3d34(*(void **)(s + 8), index + base) > 0) {
                FUN_020c3dcc(*(void **)(s + 8), index + base, s + 16, FUN_0209e164);
                *(int *)(s + 12) = key;
                *(int *)(s + 112) = 1;
            }
        }
    }
    return 0;
}
