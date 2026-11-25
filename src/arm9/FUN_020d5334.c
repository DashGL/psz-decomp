// FUN_020d5334 @ 0x020d5334 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch59-manifest.json; original draft retained for referenced provenance.
// FUN_020d5334 @ 0x020d5334 (0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020c7574(int, void *, int *);

unsigned short FUN_020d5334(int a) {
    struct {
        short x;
        unsigned short y;
        int z;
    } buf;
    int len = 8;
    if (FUN_020c7574(a, &buf, &len) == -1) {
        return 0;
    }
    return buf.y;
}
