// flags: -O4,s
typedef struct {
    int pad0;
    void *arr[4];
    int cur;
} Page;
typedef struct {
    int pad0[3];
    Page pages[2];
    unsigned char pad1[0x58];
    int flag94;
    int page_idx;
} Kb;
typedef struct {
    int pad0;
    int a;
    int b;
} Guard;
extern Guard DAT_overlay_10__02122d60;
extern int DAT_overlay_10__02122460[3];
extern char DAT_overlay_10__02122464[];
extern char DAT_overlay_10__02122d6c[];
extern void FUN_overlay_10__0211e8e4(void *);
#pragma thumb off
extern void FUN_0200c594(void *, void (*)(void *), void *);
#pragma thumb on
void *FUN_overlay_10__0211ef48(Kb *self, int idx) {
    void *res = 0;
    if (self->flag94 == 0) {
        int pi = self->page_idx;
        if (pi >= 0 && pi < 2) {
            Page *pg = &self->pages[pi];
            if (idx >= 0 && idx < 4) {
                res = pg->arr[idx];
            } else {
                int c = pg->cur;
                res = (c >= 0 && c < 4) ? pg->arr[c] : 0;
            }
        }
    }
    if (res != 0) return res;
    if ((DAT_overlay_10__02122d60.b & 1) == 0) {
        DAT_overlay_10__02122460[1] = 0;
        DAT_overlay_10__02122460[2] = 0;
        FUN_0200c594(DAT_overlay_10__02122464, FUN_overlay_10__0211e8e4, DAT_overlay_10__02122d6c);
        DAT_overlay_10__02122d60.b |= 1;
    }
    return DAT_overlay_10__02122464;
}
