// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,s
extern unsigned int FUN_02003c70(const char *);
extern int FUN_02003f38(const void *, const void *, int);
extern void FUN_020d9d58(void *, char *);
extern void FUN_020d9840(void *);
extern char *DAT_02100004;
extern int DAT_0211dba4;
void FUN_020d9280(char *a) {
    int r4 = *(int *)(a + 0x80);
    if (r4 > 0) {
        char *r7 = DAT_02100004;
        if ((unsigned int)r4 > FUN_02003c70(r7)) {
            char *p = *(char **)(a + 0x7c);
            char *r6 = DAT_02100004;
            if (FUN_02003f38(p, r6, FUN_02003c70(r6)) == 0) {
                FUN_020d9d58(a, p + FUN_02003c70(r7));
                (*(void (**)(void *, int, int, int))(a + 0x488))(a, 5, DAT_0211dba4, *(int *)(a + 0x494));
            }
        }
    }
    (*(void (**)(void *, int, int, int))(a + 0x488))(a, 4, DAT_0211dba4, *(int *)(a + 0x494));
    FUN_020d9840(a);
}
