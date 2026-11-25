// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -noThumb
struct G {
    char pad[0x1c];
    unsigned int f1c;
    unsigned int f20;
    unsigned int f24;
};

struct Req {
    int f0;
    int f4;
    unsigned int f8;
    char pad[0x14];
    char f20[1];
};

extern struct G DAT_021116a0;
extern void FUN_02065774(const void *, void *, unsigned int);

int FUN_02056410(struct Req *r0) {
    struct G *r4 = &DAT_021116a0;
    unsigned int aligned = r4->f1c & ~0x1ffU;
    if (aligned == r0->f8) {
        unsigned int rem_in_blk = r4->f1c - aligned;
        unsigned int chunk = 0x200 - rem_in_blk;
        if (chunk > r4->f24) {
            chunk = r4->f24;
        }
        FUN_02065774(r0->f20 + rem_in_blk, (void *)r4->f20, chunk);
        r4->f1c += chunk;
        r4->f20 += chunk;
        r4->f24 -= chunk;
    }
    return r4->f24 != 0 ? 1 : 0;
}
