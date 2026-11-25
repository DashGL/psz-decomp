// FUN_020bc548 @ 0x020bc548 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch10.json; original draft retained for referenced provenance.
// flags: -O4,s
// FUN_020bc548 @ 0x020bc548 (0x30, thumb)
// check: 2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020038ec(char *, int, const char *, ...);
extern int FUN_020ba288(char *);
extern const char D_020fc980[];

int FUN_020bc548(int *p, int a) {
    char buf[0x40];
    if (p[1] != 2) {
        return -1;
    }
    FUN_020038ec(buf, 0x40, D_020fc980, (char *)p + 0x74, a);
    return FUN_020ba288(buf);
}
