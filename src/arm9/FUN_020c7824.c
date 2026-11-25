// FUN_020c7824 @ 0x020c7824 (0x40, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020c7824 @ 0x020c7824 (0x40, thumb)
// check: 2.0/sp2p3 target=0x40 candidate=0x40 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_02067d94(void);
extern void FUN_02000edc(const void *, const void *, const void *, int);
extern unsigned long long FUN_02067e0c(void);
extern const char D_020fcd00[];
extern const char D_020fcd30[];
extern const char D_020fcce4[];

unsigned long long FUN_020c7824(void) {
    if (FUN_02067d94() != 1) {
        FUN_02000edc(D_020fcd00, D_020fcd30, D_020fcce4, 0x247);
    }
    return (FUN_02067e0c() << 6) / 0x82eaULL;
}
