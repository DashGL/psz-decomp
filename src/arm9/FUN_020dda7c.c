// flags: -O4,s
typedef struct {
    int pad[2];
    char *ctx;
} G_dda7c;
extern G_dda7c DAT_0211dbd8;
extern void FUN_020ddd08(void);
#pragma thumb off
extern void FUN_02067184(void *);
extern int FUN_020669c8(void *);
extern void FUN_020666f8(void *, void (*)(void), void *, void *, int, int);
extern void FUN_02066a94(void *);
#pragma thumb reset
void FUN_020dda7c(void) {
    char *context;
    FUN_02067184(DAT_0211dbd8.ctx + 0x13d8);
    *(int *)(DAT_0211dbd8.ctx + 0x13f0) = 0;
    context = DAT_0211dbd8.ctx;
    if (*(int *)(context + 0x1384) != 0) {
        if (!FUN_020669c8(context + 0x1318)) {
            return;
        }
    }
    context = DAT_0211dbd8.ctx;
    FUN_020666f8(context + 0x1318, FUN_020ddd08, &DAT_0211dbd8.ctx, context + 0x1000, 0x1000, 16);
    FUN_02066a94(DAT_0211dbd8.ctx + 0x1318);
}
