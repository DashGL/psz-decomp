// flags: -O4,s -noThumb
typedef unsigned int u32;
extern u32 *DAT_021116a0;
extern void FUN_02000b9c(void *);
extern char DAT_02000c1c[];
extern u32 FUN_020562ac(void), FUN_020683d4(void);
extern void FUN_020673d4(void *, u32), FUN_02065774(void *, void *, u32), FUN_0206740c(void *, u32), FUN_02067430(void), FUN_02066a2c(void *), FUN_02066a94(void *), FUN_020683e8(u32);
extern int FUN_02056b88(void *, u32, u32);
#define W(o) (*(u32 *)(self + (o)))
#define VW(o) (*(volatile u32 *)(self + (o)))
void FUN_02055fc0(char *self) {
    u32 mode, limit;
    char *buffer;
    u32 command, tries, count, irq;
    void *userdata;
    void (*callback)(void *);
    command = W(44); mode = W(52); tries = W(48); limit = 256;
    FUN_02000b9c(DAT_02000c1c);
    if (command == 11) limit = FUN_020562ac();
    else if (command == 15) limit = DAT_021116a0[8];
    buffer = self + 288;
    do {
        count = W(36);
        if (limit < count) count = limit;
        (*(u32 **)self)[5] = count;
        if (VW(276) & 64) {
            VW(276) &= ~64u;
            **(u32 **)self = 7;
            break;
        }
        switch (mode) {
            case 0:
                FUN_020673d4(buffer, count);
                (*(u32 **)self)[3] = W(28);
                (*(void ***)self)[4] = buffer;
                break;
            case 1:
            case 2:
                FUN_02065774(*(void **)(self + 28), buffer, count);
                FUN_0206740c(buffer, count);
                FUN_02067430();
                (*(void ***)self)[3] = buffer;
                (*(u32 **)self)[4] = W(32);
                break;
            case 3:
                (*(u32 **)self)[3] = W(28);
                (*(u32 **)self)[4] = W(32);
                break;
        }
        if (!FUN_02056b88(self, command, tries)) break;
        if (mode == 2) {
            if (!FUN_02056b88(self, 9, 1)) break;
        } else if (mode == 0) {
            FUN_02065774(buffer, *(void **)(self + 32), count);
        }
        W(28) += count;
        W(32) += count;
        W(36) -= count;
    } while (W(36));
    callback = *(void (**)(void *))(self + 56);
    userdata = *(void **)(self + 60);
    irq = FUN_020683d4();
    W(276) &= ~76u;
    FUN_02066a2c(self + 268);
    if (W(276) & 16) FUN_02066a94(self + 68);
    FUN_020683e8(irq);
    if (callback) callback(userdata);
}
