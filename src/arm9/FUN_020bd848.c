// FUN_020bd848 @ 0x020bd848 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020bd848 @ 0x020bd848 (0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020e1208(int, void *, int, void *, int);
extern void FUN_020bd800(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_020bd830(void);

int FUN_020bd848(signed char *p) {
    int r = 0;
    if (p[0x1c] == 4) {
        r = FUN_020e1208(((unsigned char *)p)[0xf18], (void *)FUN_020bd800, 0, (void *)FUN_020bd830, 0);
        if (r == 1) {
            p[0x1c] = 6;
        }
    }
    return r;
}
