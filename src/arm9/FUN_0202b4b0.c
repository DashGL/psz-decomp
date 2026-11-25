// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x144, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Sub2b4b0 {
    char pad00[0x455];
    unsigned char f455;
    unsigned char f456;
    char pad457[0x3cd];
    char *f824;
    unsigned int f828;
    unsigned int f82c;
};

struct Obj2b4b0 {
    char pad00[0xc];
    struct Sub2b4b0 *f0c;
    char pad10[0x34];
    unsigned int f44;
};

extern char *(*DAT_02107068)(unsigned int);

extern unsigned char *FUN_0202430c(unsigned int *, struct Obj2b4b0 *);
extern void FUN_02065774(const void *, void *, unsigned int);
extern void FUN_020243ec(unsigned int, struct Obj2b4b0 *);
extern void FUN_0202a6cc(struct Sub2b4b0 *, char *);

void FUN_0202b4b0(struct Obj2b4b0 *s) {
    struct Sub2b4b0 *sub = s->f0c;
    unsigned int avail;
    unsigned char *src;
    int done;

    if (sub->f824 == 0) {
        unsigned char *hdr;
        if (s->f44 < 5) {
            return;
        }
        hdr = FUN_0202430c(&avail, s);
        avail = (hdr[3] << 8) + hdr[4] + 5;
        if (avail > 0x4805) {
            sub->f455 = 9;
            return;
        }
        sub->f824 = DAT_02107068(avail);
        if (sub->f824 == 0) {
            sub->f455 = 9;
            return;
        }
        sub->f828 = avail;
        sub->f82c = 0;
        sub->f456 = 0;
    } else {
        if (s->f44 == 0) {
            return;
        }
    }
    src = FUN_0202430c(&avail, s);
    if (avail >= sub->f828 - sub->f82c) {
        avail = sub->f828 - sub->f82c;
        done = 1;
    } else {
        done = 0;
    }
    FUN_02065774(src, sub->f824 + sub->f82c, avail);
    FUN_020243ec(avail, s);
    if (done) {
        FUN_0202a6cc(sub, sub->f824);
        if (sub->f456 == 0) {
            sub->f824 = 0;
        }
    } else {
        sub->f82c += avail;
    }
}
