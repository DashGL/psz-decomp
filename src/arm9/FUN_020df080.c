// Verified 2026-11-13: full 244-byte body, pinned 2.0/sp2p3, exact bytes and every relocation; restored consumed arguments.
// flags: -O4,s
#pragma opt_common_subs off
#pragma opt_loop_invariants off
extern unsigned int FUN_02003c70(const char *);
#pragma thumb off
extern char *FUN_02003d54(char *, const char *, unsigned int);
#pragma thumb reset
extern char *FUN_02003fa8(const char *, const char *);
extern unsigned short FUN_02005898(const char *);
extern const char DAT_021005e4[];
extern const char DAT_021005ec[];
extern const char DAT_021005f8[];
extern const char DAT_021005fc[];

int FUN_020df080(void *a0, const char *a1) {
    char *r4 = 0;
    char *r0;
    char *r1;
    if (FUN_02003c70(a1) >= 0x100) {
        return 0;
    }
    FUN_02003d54((char *)a0 + 0x1024, a1, 0x100);
    if (FUN_02003c70(a1) != FUN_02003c70((char *)a0 + 0x1024)) {
        return 0;
    }
    if (FUN_02003fa8((char *)a0 + 0x1024, DAT_021005e4) != 0) {
        *(char **)((char *)a0 + 0x1124) = (char *)a0 + 0x102b;
        *(int *)((char *)a0 + 0x1130) = (int)r4;
        *(unsigned short *)((char *)a0 + 0x1134) = 0x50;
    } else {
        r0 = FUN_02003fa8((char *)a0 + 0x1024, DAT_021005ec);
        if (r0 == 0) {
            return 0;
        }
        *(char **)((char *)a0 + 0x1124) = r0 + 8;
        *(int *)((char *)a0 + 0x1130) = 1;
        *(unsigned short *)((char *)a0 + 0x1134) = 0x1bb;
    }
    r0 = FUN_02003fa8(*(char **)((char *)a0 + 0x1124), DAT_021005f8);
    if (r0 != 0) {
        r4 = r0 + 1;
        *r0 = 0;
    }
    r0 = FUN_02003fa8(*(char **)((char *)a0 + 0x1124), DAT_021005fc);
    if (r0 == 0) {
        r1 = 0;
    } else {
        *r0 = 0;
        r1 = r0 + 1;
    }
    *(char **)((char *)a0 + 0x1128) = r1;
    if (r4 != 0) {
        *(unsigned short *)((char *)a0 + 0x1134) = FUN_02005898(r4);
    }
    return 1;
}
