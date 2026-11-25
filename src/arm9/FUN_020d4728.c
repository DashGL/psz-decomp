// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x66, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    char pad[0x44];
    char *f44;
} Sub_d4728;
typedef struct {
    int f0[2];
    Sub_d4728 *f8;
    char pad[0x44];
    char f50[0x38];
    int f88;
    int f8c;
} S_d4728;
extern int FUN_020d4584(S_d4728 *, int, char *, int *);
extern void FUN_020d2b30(char *, void *, int);
extern int FUN_020d4640(S_d4728 *);
int FUN_020d4728(S_d4728 *a, void *b, void *c) {
    int sp0;
    if (FUN_020d4584(a, 2, a->f8->f44 + 0x47, &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    FUN_020d2b30(a->f50, b, 0x20);
    FUN_020d2b30(a->f50, c, 0x20);
    if (FUN_020d4640(a) == 0) {
        return 0;
    }
    a->f8c = a->f88;
    return 1;
}
