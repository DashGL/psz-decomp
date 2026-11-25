// flags: -O4,s
typedef struct {
    int active;
    int pad[5];
} Entry;
extern Entry DAT_0213bf70[];
extern void FUN_overlay_12__02131f88(void *);
int FUN_overlay_12__02136bec(char *self) {
    int close;
    void (*callback)(void);
    if (*(int *)(self + 96) > 0) return 0;
    close = *(int *)(self + 100);
    if (DAT_0213bf70[*(int *)(self + 80)].active) {
        if (*(int *)(self + 64) == 1) {
            *(int *)(self + 60) = 0;
            callback = *(void (**)(void))(self + 92);
            if (callback) callback();
        } else {
            *(int *)(self + 60) = *(int *)(self + 104);
            callback = *(void (**)(void))(self + 88);
            if (callback) callback();
        }
        if (close) FUN_overlay_12__02131f88(self);
        return 1;
    }
    return 0;
}
