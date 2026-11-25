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
extern Guard DAT_overlay_18__02156620;
extern int DAT_overlay_18__02123aa4[3];
extern char DAT_overlay_18__02123aa8[];
extern char DAT_overlay_18__0215662c[];
extern void FUN_overlay_18__02120f70(void *);
#pragma thumb off
extern void FUN_0200c594(void *, void (*)(void *), void *);
#pragma thumb on
void *FUN_overlay_18__02121778(Kb *self, int idx) {
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
    if ((DAT_overlay_18__02156620.b & 1) == 0) {
        DAT_overlay_18__02123aa4[1] = 0;
        DAT_overlay_18__02123aa4[2] = 0;
        FUN_0200c594(DAT_overlay_18__02123aa8, FUN_overlay_18__02120f70, DAT_overlay_18__0215662c);
        DAT_overlay_18__02156620.b |= 1;
    }
    return DAT_overlay_18__02123aa8;
}
