// FUN_020276a8 @ 0x020276a8 (0x30, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch23-manifest.json; original draft retained for referenced provenance.
// flags: -noThumb
// FUN_020276a8 @ 0x020276a8 (0x30, arm)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020241f4(void);
static inline void init(int *p) { *p = 1; }

int FUN_020276a8(int *p) {
    int ok;
    signed char c = *(signed char *)(p[1] + 0x73);
    init(&ok);
    if (c != 0 && c != 4) {
        ok = 0;
    }
    if (ok) {
        FUN_020241f4();
    }
    return 0;
}
