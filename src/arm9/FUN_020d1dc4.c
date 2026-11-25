// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// flags: -O4,p
typedef struct {
    int f0;
    int f4;
} S_d1dc4;
extern char DAT_020fe678[];
extern char DAT_020fe66c[];
extern char DAT_020fe658[];
extern S_d1dc4 *FUN_020d1f70(int, int);
extern void FUN_02000edc(char *, char *, char *, int);
extern char *FUN_020d1f58(S_d1dc4 *);
extern int FUN_02003c70(char *);
extern char *FUN_020c7bcc(int);
extern void FUN_02003c8c(char *, char *);
extern void FUN_02003da4(char *, char *);
extern void FUN_020d1f0c(S_d1dc4 *, char *);
extern void FUN_020c7bec(char *);
char *FUN_020d1dc4(int a, int b, char *c) {
    S_d1dc4 *r4 = FUN_020d1f70(a, b);
    if (r4 == 0) {
        return 0;
    }
    if (r4->f4 != 2) {
        FUN_02000edc(DAT_020fe678, DAT_020fe66c, DAT_020fe658, 0xce);
    }
    char *r7 = FUN_020d1f58(r4);
    int len1 = FUN_02003c70(r7);
    char *r5 = FUN_020c7bcc(len1 + FUN_02003c70(c) + 1);
    FUN_02003c8c(r5, r7);
    FUN_02003da4(r5, c);
    FUN_020d1f0c(r4, r5);
    FUN_020c7bec(r5);
    return FUN_020d1f58(r4);
}
