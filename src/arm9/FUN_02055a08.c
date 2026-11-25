// flags: -O4,p -noThumb
#pragma opt_propagation off
extern void FUN_0206557c(int, void *, int);
extern void FUN_0206740c(void *, int);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_020666f8(void *, void *, int, void *, int, int);
extern void FUN_02066a94(void *);
extern void FUN_02068850(int, void *);
extern void FUN_02055b40(int);
extern int DAT_02111640[];
extern void FUN_02056b38(void);
extern int DAT_02111cc0[];
extern void FUN_02056b04(void);

struct CardCommon {
    void *cmd;
    int f04;
    volatile int lock_owner;
     int lock_ref;
    int f10;
    int f14;
    volatile int lock_target;
    int pad[10];
    int thread[49];
     int priority;
    int f10c;
    int f110;
    int f114;
    int f118;
    int f11c;
};
extern struct CardCommon DAT_021116a0;

static inline void MI_CpuClearFast(void *dest, int size) {
    FUN_0206557c(0, dest, size);
}

void FUN_02055a08(void) {
    struct CardCommon *s = &DAT_021116a0;
    s->lock_owner = -3; s->lock_ref = 0; s->lock_target = 0; s->cmd = DAT_02111640; MI_CpuClearFast(s->cmd, 0x60);
    FUN_0206740c(DAT_02111640, 0x60);
    s->f118 = -1;
    s->f11c = -1;
    if ((*(volatile unsigned short *)0x027ffc40 == 2 ? 1 : 0) == 0) {
        FUN_02065774((const void *)0x027ffe00, (void *)0x027ffa80, 0x160);
    }
    s->priority = 4;
    s->f14 = 0;
    s->f10 = 0;
    s->f110 = 0;
    s->f10c = 0;
    FUN_020666f8(s->thread, (void *)FUN_02056b38, 0, DAT_02111cc0, 0x400, s->priority);
    FUN_02066a94(s->thread);
    FUN_02068850(0xb, (void *)FUN_02056b04);
    if ((*(volatile unsigned short *)0x027ffc40 == 2 ? 1 : 0) == 0) {
        FUN_02055b40(1);
    }
}
