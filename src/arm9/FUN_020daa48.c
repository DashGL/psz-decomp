// FUN_020daa48 @ 0x020daa48 (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020daa48 @ 0x020daa48 (0x2e, thumb)
// check: 2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
extern unsigned char FUN_020dad04(void);
extern void FUN_020dabc4(void);
extern void FUN_020db71c(unsigned char *);
extern void FUN_020dacb8(unsigned char);

int FUN_020daa48(void) {
    unsigned char c = FUN_020dad04();
    if (c == 0 || c == 0x12) {
        FUN_020dabc4();
        return 1;
    }
    FUN_020db71c(&c);
    FUN_020dacb8(c);
    return 0;
}
