// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x114, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_02003c70(const char *);
extern int FUN_020dee90(void *, const char *, const void *, int);
extern int FUN_020de318(void *, void *);
extern int FUN_020de4e8(void *, void *, int);
extern int FUN_02005920(const void *);
extern int DAT_0211dbd8[];
extern int DAT_0211dbe4[];
extern int DAT_0211dc00[];

int FUN_020de1bc(void *arg0, const char *arg1, const void *arg2) {
    char buf[0x94];

    if (*(unsigned long long *)&DAT_0211dbd8[3] == 0ULL) {
        if (FUN_020dee90(arg0, "action", "acctcreate", FUN_02003c70("acctcreate")) != 0) {
            return 8;
        }
    } else {
        if (FUN_020dee90(arg0, "action", "login", FUN_02003c70("login")) != 0) {
            return 8;
        }
        if (FUN_020dee90(arg0, "gsbrcd", arg1, FUN_02003c70(arg1)) != 0) {
            return 8;
        }
    }
    if (!FUN_020de318(buf, DAT_0211dbe4)) {
        return 5;
    }
    if (!FUN_020de4e8(arg0, buf, DAT_0211dc00[0])) {
        return 8;
    }
    if (DAT_0211dbd8[1] == 1) {
        if (FUN_020dee90(arg0, "iswfc", "Y", FUN_02003c70("Y")) != 0) {
            return 8;
        }
    }
    if (FUN_02005920(arg2) != 0) {
        if (FUN_020dee90(arg0, "ingamesn", arg2, FUN_02005920(arg2) * 2) != 0) {
            return 8;
        }
    }
    return 0;
}
