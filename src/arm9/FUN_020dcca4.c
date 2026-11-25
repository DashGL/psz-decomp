// FUN_020dcca4 @ 0x020dcca4 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020dcca4 @ 0x020dcca4 (0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02053dbc(int);
extern char *D_0211dbc8;

int FUN_020dcca4(int a) {
    int r;
    if (a == 0) {
        return -1;
    }
    *(int *)(D_0211dbc8 + 0x1a90) = 3;
    D_0211dbc8 = 0;
    r = FUN_02053dbc(a);
    if (r == 2) {
        r = 0;
    }
    return r;
}
