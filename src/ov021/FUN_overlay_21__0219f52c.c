// flags: -O4,s
extern void *DAT_02108cf4;
extern void *DAT_02108d04;
extern void FUN_overlay_21__021990dc(void *, int);
extern void *FUN_020352a4(void *, unsigned int);
extern void *FUN_02039200(void *);
extern int FUN_020866b4(unsigned int, void *);
extern void FUN_020946a0(void *);
extern void FUN_02080ae0(unsigned int, int);
extern unsigned int FUN_0208546c(void);
typedef void (*Action)(void *);
void FUN_overlay_21__0219f52c(unsigned int *self) {
    char *owner = (char *)self[2];
    void *sub = (void *)self[1];
    void *player;
    self[7] = *(unsigned int *)(owner + 0x8c);
    *(unsigned int *)(owner + 0xa4) = 0;
    FUN_overlay_21__021990dc(sub, 0);
    *(unsigned int *)(owner + 0xf8) = 0;
    player = FUN_02039200(FUN_020352a4(DAT_02108cf4, self[7]));
    if (player) {
        FUN_020866b4(self[7], self + 4);
        FUN_020946a0(player);
        FUN_02080ae0(self[7], 1);
        if (self[7] == FUN_0208546c()) {
            void *global = DAT_02108d04;
            ((Action)(*(unsigned int **)global)[45])(global);
        }
    }
    self[3] = 0;
    self[8] = 0;
}
