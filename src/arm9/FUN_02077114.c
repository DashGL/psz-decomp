// FUN_02077114 @ 0x02077114 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch03-manifest.json; original draft retained for referenced provenance.
// FUN_02077114 @ 0x02077114 (0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
extern void *FUN_02129ed4(void);
extern void FUN_0212a3cc(void *, int, int, int, int);
extern void FUN_0203041c(void *);

void FUN_02077114(unsigned char *p) {
    if (p[0x2e] != 0) {
        int *q = *(int **)(p + 4);
        int c = q[3];
        void *r = FUN_02129ed4();
        FUN_0212a3cc(r, q[1], c, 2, 0);
    }
    FUN_0203041c(p);
}
