// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,p
extern void FUN_02003c8c(char *, char *);
extern int FUN_02003c70(char *);
extern void FUN_020d6928(char *, int, char *, int);
extern void FUN_020d68a4(char *, int, char *);
void FUN_020d6a30(char *a, char *b, char *c, int d) {
    char sp0[0x44];
    if (d >= 1 && d <= 0x41 && c[d - 1] == 0) {
        FUN_02003c8c(sp0, c);
        FUN_020d6928(a + 0x44, FUN_02003c70(a + 0x44), sp0, d - 1);
        FUN_020d68a4(sp0, d - 1, b + *(int *)(b + 0x578));
        *(int *)(b + 0x578) += FUN_02003c70(b + *(int *)(b + 0x578)) + 1;
    }
}
