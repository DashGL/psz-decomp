// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
struct Sub {
    char pad[0x1c];
    int f1c;
    unsigned short f20;
};
struct Node {
    char pad[0xc];
    struct Sub *f0c;
};
extern int FUN_020cf7a8(void *, int, struct Node **);
extern void FUN_020d1b74(void *, const void *);
extern int FUN_020c83f4(int, unsigned short, int *);
extern int FUN_020c8454(int, unsigned short, int, int);
extern void FUN_020d1b58(void *, int, const void *);
extern void FUN_020cb778(void *, int, int);
extern const char DAT_020fde7c[];
extern const char DAT_020fdf40[];

int FUN_020cf1d0(int *param_1, int *param_2) {
    struct Node *node;
    int status;
    int r6 = *param_1;
    if (!FUN_020cf7a8(param_1, param_2[4], &node)) {
        FUN_020d1b74(param_1, DAT_020fde7c);
        return 3;
    }
    if (node->f0c != 0) {
        FUN_020c83f4(node->f0c->f1c, node->f0c->f20, &status);
        if ((status != 1 || status != 0) &&
            FUN_020c8454(node->f0c->f1c, node->f0c->f20, r6 + 0x220, 10000) != 5) {
            FUN_020d1b58(param_1, 5, DAT_020fdf40);
            FUN_020cb778(param_1, 3, 0);
            return 3;
        }
        param_2[2] = node->f0c->f1c;
        *(unsigned short *)(param_2 + 3) = node->f0c->f20;
    }
    *param_2 = 0x67;
    return 0;
}
