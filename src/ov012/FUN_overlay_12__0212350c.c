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
extern Guard DAT_overlay_12__0213ecdc;
extern int DAT_overlay_12__0213d56c[3];
extern char DAT_overlay_12__0213d570[];
extern char DAT_overlay_12__0213ece8[];
extern void FUN_overlay_12__02122f30(void *);
#pragma thumb off
extern void FUN_0200c594(void *, void (*)(void *), void *);
#pragma thumb on
void *FUN_overlay_12__0212350c(Kb *self, int idx) {
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
    if ((DAT_overlay_12__0213ecdc.b & 1) == 0) {
        DAT_overlay_12__0213d56c[1] = 0;
        DAT_overlay_12__0213d56c[2] = 0;
        FUN_0200c594(DAT_overlay_12__0213d570, FUN_overlay_12__02122f30, DAT_overlay_12__0213ece8);
        DAT_overlay_12__0213ecdc.b |= 1;
    }
    return DAT_overlay_12__0213d570;
}
