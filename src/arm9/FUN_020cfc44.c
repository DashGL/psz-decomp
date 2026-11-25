// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x138, exact bytes and relocation targets.
// flags: -O4,p
extern const char DAT_020fe1ac[];
extern void FUN_020d1b74(void *, const char *);
extern int FUN_020cfb7c(void *, char **, int);
extern void FUN_020d183c(char *, const char *, int);
extern void FUN_020c77f0(char *);
extern int FUN_020cfbf0(void *, char *, void *, void *, int);

int FUN_020cfc44(void *self, const char *s1, const char *s2, const char *s3,
                 const char *s4, const char *s5, int a6, int a7, void *a8, void *a9, int a10) {
    char *node;
    int res;

    if ((s1 == 0 || *s1 == 0) &&
        (s3 == 0 || *s3 == 0) &&
        (s4 == 0 || *s4 == 0) &&
        (s5 == 0 || *s5 == 0) &&
        a6 == 0 &&
        (s2 == 0 || *s2 == 0)) {
        FUN_020d1b74(self, DAT_020fe1ac);
        return 2;
    }
    res = FUN_020cfb7c(self, &node, 1);
    if (res != 0) {
        return res;
    }
    if (s1 == 0) {
        node[0x28] = 0;
    } else {
        FUN_020d183c(node + 0x28, s1, 0x1f);
    }
    if (s2 == 0) {
        node[0x47] = 0;
    } else {
        FUN_020d183c(node + 0x47, s2, 0x15);
    }
    if (s3 == 0) {
        node[0x5c] = 0;
    } else {
        FUN_020d183c(node + 0x5c, s3, 0x33);
    }
    FUN_020c77f0(node + 0x5c);
    if (s4 == 0) {
        node[0x8f] = 0;
    } else {
        FUN_020d183c(node + 0x8f, s4, 0x1f);
    }
    if (s5 == 0) {
        node[0xae] = 0;
    } else {
        FUN_020d183c(node + 0xae, s5, 0x1f);
    }
    *(int *)(node + 0x134) = a6;
    if (a7 < 0) {
        a7 = 0;
    }
    *(int *)(node + 0x138) = a7;
    res = FUN_020cfbf0(self, node, a8, a9, a10);
    if (res != 0) {
        return res;
    }
    return 0;
}
