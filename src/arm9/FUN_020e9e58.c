// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x26, exact bytes and relocation targets; argument/return contract corrected.
// Explicit extra argument evidence: notes/reference/resume2-root-20261112/extra-input-020e9e58.json
// FUN_020e9e58 @ 0x020e9e58 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch58-manifest.json; original draft retained for referenced provenance.
// FUN_020e9e58 @ 0x020e9e58 (0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
extern unsigned char *FUN_020e9bd4(int);
extern void FUN_020e4ae4(int, int, int);

void FUN_020e9e58(int a,int b,int context) {
    unsigned char *p = FUN_020e9bd4(a);
    p[0x1d] = p[0x1e];
    switch (*(unsigned short *)(p + 0x22)) {
    case 2:
    case 3:
    case 4:
        FUN_020e4ae4(a, *(unsigned short *)(p + 0x22), b);
        break;
    }
}
