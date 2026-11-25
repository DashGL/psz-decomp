// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets; argument/return contract corrected.
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe4, exact bytes and relocation targets.
extern void *FUN_020c7bcc(int);
extern void FUN_02001540(void *, int, int);
extern int FUN_020cf5fc(void **);
extern void FUN_020c7bec(void *);
extern int FUN_020c9344(void **);
extern void FUN_020c92e4(void **);
extern void FUN_020c781c(void);
extern unsigned long long FUN_020c7824(void);
extern void FUN_02003aac(int);

int FUN_020c9200(void **a0, int a1, int a2, int a3) {
    void *sp04;
    int i;
    *a0 = 0;
    sp04 = FUN_020c7bcc(0x634);
    if (sp04 == 0) {
        return 1;
    }
    FUN_02001540(sp04, 0, 0x634);
    *(unsigned char *)sp04 = 0;
    *(int *)((char *)sp04 + 0x5b8) = 0;
    *(int *)((char *)sp04 + 0x100) = 1;
    *(int *)((char *)sp04 + 0x104) = 0;
    *(int *)((char *)sp04 + 0x108) = 0;
    *(int *)((char *)sp04 + 0x10c) = 0;
    *(int *)((char *)sp04 + 0x608) = a1;
    *(int *)((char *)sp04 + 0x60c) = a2;
    *(int *)((char *)sp04 + 0x1a4) = a3;
    if (FUN_020cf5fc(&sp04) == 0) {
        FUN_020c7bec(sp04);
        sp04 = 0;
        return 1;
    }
    *(int *)((char *)sp04 + 0x5c0) = 0;
    for (i = 0; i < 9; i++) {
        *(int *)((char *)sp04 + i * 8 + 0x1a8) = 0;
        *(int *)((char *)sp04 + i * 8 + 0x1ac) = 0;
    }
    i = FUN_020c9344(&sp04);
    if (i != 0) {
        FUN_020c92e4(&sp04);
        return i;
    }
    FUN_020c781c();
    FUN_02003aac((int)FUN_020c7824());
    *a0 = sp04;
    return 0;
}
