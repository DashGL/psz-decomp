// FUN_020e8374 @ 0x020e8374 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020e8374 @ 0x020e8374 (0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020e05d8(int, int, int);
extern void FUN_02065510(int, void *, int);

struct Entry {
    int a;
    int b;
    int c;
};
extern struct Entry D_0211de84[];

void FUN_020e8374(void) {
    int i;
    for (i = 0; i < 0x9a; i++) {
        if (D_0211de84[i].b != 0) {
            FUN_020e05d8(4, D_0211de84[i].b, 0);
        }
    }
    FUN_02065510(0, D_0211de84, 0x738);
}
