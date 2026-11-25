// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// flags: -O4,p

struct MsgE1A34 {
    int f0;
    int f4;
    char *str;
};

struct GlobalE1A34 {
    unsigned char pad0[0x24];
    int state;
    unsigned char pad28[0x38d - 0x28];
    volatile unsigned char substate;
};

extern const char DAT_02101718[];
extern const char DAT_02101720[];
extern struct GlobalE1A34 *DAT_0211dcbc;
extern int FUN_02003c70(const char *);
extern int FUN_020015ac(const char *, const char *, int);
extern char *FUN_02003f6c(const char *, int);
extern void *FUN_02003d54(void *, const void *, int);
extern long FUN_02005738(const char *, char **, int);
extern void FUN_020e49c0(void *, int, const char *);

void FUN_020e1a34(void *self, struct MsgE1A34 *msg) {
    char buf[12] = {0};
    char *p = msg->str;
    if (FUN_020015ac(p, DAT_02101718, FUN_02003c70(DAT_02101718)) == 0) {
        unsigned int len;
        p += FUN_02003c70(DAT_02101718);
        len = (unsigned int)(FUN_02003f6c(p, 0x76) - p);
        FUN_02003d54(buf, p, len);
        if (len <= 10 && FUN_02005738(buf, 0, 10) == 3) {
            p += len + 1;
            if (FUN_020015ac(p, DAT_02101720, FUN_02003c70(DAT_02101720)) == 0) {
                int st = DAT_0211dcbc->state;
                if (st == 5 || (st == 6 && (DAT_0211dcbc->substate == 2 || DAT_0211dcbc->substate == 3))) {
                    FUN_020e49c0(self, msg->f0, p + FUN_02003c70(DAT_02101720));
                }
            }
        }
    }
}
