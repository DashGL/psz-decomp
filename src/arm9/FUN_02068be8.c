// FUN_02068be8 @ 0x02068be8 (0x38, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch30-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_02068be8 @ 0x02068be8 (0x38, arm)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02068b74(int, void *, int);
extern void FUN_020692a4(int);
extern void FUN_02069294(void);
extern int D_021185a4[];

int FUN_02068be8(int a) {
    int r = FUN_02068b74(a, (void *)FUN_02069294, 0);
    D_021185a4[0xb] = r;
    if (r == 0) {
        FUN_020692a4(r);
    }
    return D_021185a4[0xb];
}
