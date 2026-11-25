// flags: -O4,p -noThumb
// near: 139 byte diffs (1 bad relocs); codegen register coloring / instruction scheduling
extern void FUN_02027974(void *);
extern void FUN_02066a2c(void *);
extern int FUN_020683d4(void);
extern void FUN_02027f14(void *);
extern void FUN_02027f74(void *);
extern void FUN_020683e8(int);
extern int *DAT_020f6968;

void FUN_02027874(unsigned char *arg0) {
    int irq;

    if (arg0 == 0) {
        return;
    }
    *(unsigned short *)(arg0 + 0x70) = 0;
    int is_stream = 1;
    if (*(signed char *)(arg0 + 0x73) != 0 && *(signed char *)(arg0 + 0x73) != 4) is_stream = 0;
    if (is_stream) {
        FUN_02027974(*(void **)(arg0 + 0x68));
        FUN_02027974(*(void **)(arg0 + 0x64));
    } else if (*(signed char *)(arg0 + 0x73) == 1) {
        void **cur = *(void ***)(*(unsigned char **)(arg0 + 0x64) + 0x104);
        while (cur != 0) {
            void **next = (void **)*cur;
            ((void (*)(void *))DAT_020f6968[7])(cur);
            cur = next;
        }
        *(unsigned short *)(*(unsigned char **)(arg0 + 0x64) + 0x108) = 0;
        *(int *)(*(unsigned char **)(arg0 + 0x64) + 0x100) = 0;
        *(int *)(*(unsigned char **)(arg0 + 0x64) + 0x104) = 0;
        FUN_02066a2c(*(unsigned char **)(arg0 + 0x64) + 0x10c);
        FUN_02027974(*(void **)(arg0 + 0x64));
    } else if (*(signed char *)(arg0 + 0x73) == 2) {
        FUN_02027974(*(void **)(arg0 + 0x68));
    }
    irq = FUN_020683d4();
    FUN_02027f14(arg0);
    FUN_02027f74(arg0);
    ((void (*)(void *))DAT_020f6968[7])(arg0);
    FUN_020683e8(irq);
}
