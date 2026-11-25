// FUN_020d3288 @ 0x020d3288 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020d3288 @ 0x020d3288 (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020d4f50(int, int, unsigned short, int, int);
extern unsigned long long FUN_020c7824(void);

struct S {
    int a;
    unsigned short b;
    short pad;
    int c;
};

int FUN_020d3288(struct S *p, int x, int y) {
    if (FUN_020d4f50(p->c, p->a, p->b, x, y) == 0) {
        return 0;
    }
    *(int *)((char *)p + 0x88) = FUN_020c7824();
    return 1;
}
