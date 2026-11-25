// FUN_020bc51c @ 0x020bc51c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// flags: -O4,s
// FUN_020bc51c @ 0x020bc51c (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern void FUN_020038ec(char *, int, const char *, ...);
extern int FUN_02012770(char *);
extern const char D_020fc978[];

int FUN_020bc51c(int *p, int a) {
    char buf[0x40];
    if (p[1] != 2) {
        return 0;
    }
    FUN_020038ec(buf, 0x40, D_020fc978, (char *)p + 0x74, a);
    return FUN_02012770(buf);
}
