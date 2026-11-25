// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x114, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef void *(*Alloc_02026e48)(int);
struct Node_02026e48 {
    struct Node_02026e48 *next;
    unsigned short len;
    unsigned short port;
    int ip;
    char data[1];
};
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern void FUN_02065774(const void *, void *, int);
extern void FUN_02066a2c(void *);
extern int *DAT_020f6968;
extern int DAT_021088e4[];

int FUN_02026e48(const void *arg0, unsigned int arg1, char *arg2) {
    char *sub = *(char **)(arg2 + 0x64);
    struct Node_02026e48 *node;
    int irq = FUN_020683d4();
    if (*(unsigned short *)(sub + 0x10a) >= *(unsigned short *)(sub + 0x108) + arg1) {
        node = ((Alloc_02026e48)DAT_020f6968[6])(arg1 + 0xc);
        if (node != 0) {
            *(unsigned short *)(sub + 0x108) += arg1;
            node->next = 0;
            node->len = arg1;
            node->port = *(unsigned short *)(arg2 + 0x18);
            node->ip = *(int *)(arg2 + 0x1c);
            FUN_02065774(arg0, node->data, arg1);
            if (*(struct Node_02026e48 * volatile *)(sub + 0x100) != 0) {
                (*(struct Node_02026e48 * volatile *)(sub + 0x100))->next = node;
            }
            *(struct Node_02026e48 * volatile *)(sub + 0x100) = node;
            if (*(struct Node_02026e48 * volatile *)(sub + 0x104) == 0) {
                *(struct Node_02026e48 * volatile *)(sub + 0x104) = node;
            }
        } else {
            DAT_021088e4[0] += 1;
        }
    } else {
        DAT_021088e4[1] += 1;
    }
    if (*(unsigned short *)(arg2 + 0x74) == 0) {
        *(unsigned short *)(arg2 + 0x74) = *(unsigned short *)(arg2 + 0xa);
    }
    *(unsigned short *)(arg2 + 0x18) = *(unsigned short *)(arg2 + 0x1a);
    *(int *)(arg2 + 0x1c) = *(int *)(arg2 + 0x20);
    FUN_02066a2c(sub + 0x10c);
    FUN_020683e8(irq);
    return 1;
}
