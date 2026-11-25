// FUN_020b7fdc @ 0x020b7fdc (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch17.json; original draft retained for referenced provenance.
// FUN_020b7fdc @ 0x020b7fdc (0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern void *FUN_0208555c(int);
struct Entry {
    int (*fn)(void *, int);
    int arg;
};
extern struct Entry D_020f5a0c[];

int FUN_020b7fdc(int idx, int a) {
    void *r = FUN_0208555c(a);
    if (idx >= 0 && idx < 0x1b && D_020f5a0c[idx].fn != 0) {
        return D_020f5a0c[idx].fn(r, D_020f5a0c[idx].arg);
    }
    return 0;
}
