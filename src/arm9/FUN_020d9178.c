// Verified 2026-11-13: full264-byte body, pinned2.0/sp2p3, exactbytes andeveryrelocation; restoredconsumedarguments.
// FUN_020d9178 @ 0x020d9178 (0x108, thumb)
extern void FUN_02000edc(const char *, const char *, const char *, int);
extern void FUN_020d90ac(void *);
extern void FUN_020d8090(void *);
extern void FUN_02003c8c(char *, const char *);
extern void FUN_020d9d58(void *, unsigned int);
extern unsigned long long FUN_020c7824(void);
extern void FUN_02003aac(int);
extern void FUN_020c781c(void);

extern const char DAT_021000b0[];
extern const char DAT_021000a0[];
extern const char DAT_02100038[];
extern const char DAT_021000c0[];
struct S1 { unsigned char c; };
extern struct S1 DAT_02100090;
extern int DAT_0211cf6c;

void FUN_020d9178(void *a0, const char *a1, const char *a2, const char *a3, int a4, int a5, int a6, int a7) {
    if (a0 == 0) {
        FUN_02000edc(DAT_021000b0, DAT_021000a0, DAT_02100038, 0x166);
    }
    if (a5 != 0 || DAT_0211cf6c == 1) {
        *(int *)a0 = 1;
        FUN_020d90ac(a0);
        FUN_020d8090(a0);
        FUN_02003c8c((char *)a0 + 0xc, a1);
        FUN_02003c8c((char *)a0 + 0x30, a2);
        FUN_02003c8c((char *)a0 + 0x54, a3);
        *(int *)((char *)a0 + 0x488) = a6;
        *(int *)((char *)a0 + 0x48c) = 0;
        if (a6 == 0) {
            FUN_02000edc(DAT_021000c0, DAT_021000a0, DAT_02100038, 0x17c);
        }
        *(int *)((char *)a0 + 0x494) = a7;
        *(int *)((char *)a0 + 0x6a4) = 0;
        *(int *)((char *)a0 + 0x6b4) = -1;
        *(int *)((char *)a0 + 0x7c) = 0;
        *(int *)((char *)a0 + 0x80) = 0;
        *(int *)((char *)a0 + 8) = 0;
        *(int *)((char *)a0 + 0x484) = -1;
        *(int *)((char *)a0 + 0x480) = 0;
        *(int *)((char *)a0 + 0x6a8) = 0;
        *(int *)((char *)a0 + 0x6bc) = a4;
        *(struct S1 *)((char *)a0 + 0x498) = DAT_02100090;
        *(struct S1 *)((char *)a0 + 0x59c) = DAT_02100090;
        FUN_020d9d58(a0, (unsigned int)&DAT_02100090);
        *(int *)((char *)a0 + 0x7d4) = 0;
        *(unsigned short *)((char *)a0 + 0x7d0) = 0x80;
        FUN_02003aac((int)FUN_020c7824());
        FUN_020c781c();
    }
}
