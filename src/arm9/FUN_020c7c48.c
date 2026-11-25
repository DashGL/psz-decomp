// FUN_020c7c48 @ 0x020c7c48 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020c7c48 @ 0x020c7c48 (0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020c7540(int, void *, int, int, void *, int);
extern unsigned long long FUN_020c7824(void);
extern int D_0211cf6c[];
extern int D_0211cf74[];
extern int D_0211cf7c[];

void FUN_020c7c48(void) {
    FUN_020c7540(D_0211cf6c[1], D_0211cf7c, D_0211cf6c[0x14], 0, D_0211cf74, 8);
    D_0211cf6c[0x15] = FUN_020c7824();
}
