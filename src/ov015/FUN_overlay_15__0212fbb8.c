typedef struct {
    unsigned char sel;
    unsigned char pad[3];
    unsigned char *ptr;
} PanelState_0212fbb8;
extern PanelState_0212fbb8 DAT_0213e88c;
extern void FUN_overlay_15__02131064(void *, int, int);
extern void FUN_overlay_15__0213590c(void *, int, int, int);
extern int FUN_overlay_15__02131ba0(int);
void FUN_overlay_15__0212fbb8(void) {
    unsigned char first[4] = {3, 4, 5, 7};
    unsigned char second[4] = {10, 9, 11, 6};
    int selection = DAT_0213e88c.sel;
    if ((unsigned int)selection <= 3) {
        int palette = first[selection];
        FUN_overlay_15__02131064(*(void **)DAT_0213e88c.ptr, palette, palette);
        selection = DAT_0213e88c.sel;
        if (selection != 3) {
            int status = FUN_overlay_15__02131ba0(selection);
            if (status > 2) {
                status = 3;
            }
            FUN_overlay_15__0213590c(*(void **)(DAT_0213e88c.ptr + 4 + DAT_0213e88c.sel * 4), -1, 0, second[status]);
        }
    }
}
