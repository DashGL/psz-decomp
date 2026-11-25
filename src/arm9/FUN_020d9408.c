// FUN_020d9408 @ 0x020d9408 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020d9408 @ 0x020d9408 (0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02003c70(const char *);
extern void FUN_020014d4(char *, const char *, int);
extern const char D_02100090[];

void FUN_020d9408(char **a, const char *b, int *c) {
    int len;
    if (b == 0) {
        b = D_02100090;
    }
    len = FUN_02003c70(b) + 1;
    FUN_020014d4(*a, b, len);
    *c += len;
    *a += len;
}
