// FUN_020cbafc @ 0x020cbafc (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch37-manifest.json; original draft retained for referenced provenance.
// FUN_020cbafc @ 0x020cbafc (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern unsigned int FUN_02003a78(void);
extern const signed char D_020fd604[];

void FUN_020cbafc(char *buf, int len) {
    int i;
    for (i = 0; i < len; i++) {
        buf[i] = D_020fd604[FUN_02003a78() % 0x3eu];
    }
    buf[i] = 0;
}
