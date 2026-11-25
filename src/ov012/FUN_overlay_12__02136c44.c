// flags: -O4,p
typedef struct { int a, b, c, d, e, f; } Entry;
extern const Entry DAT_0213bf74[];
extern void FUN_overlay_12__02131f88(void *);
int FUN_overlay_12__02136c44(char *self) {
    int close; if (*(int *)(self + 96) > 0) return 0; close = *(int *)(self + 100); if (DAT_0213bf74[*(int *)(self + 80)].a) { void (*cb)(void) = *(void (**)(void))(self + 92); if (cb) cb(); if (close) FUN_overlay_12__02131f88(self); return 1; } return 0;
}
