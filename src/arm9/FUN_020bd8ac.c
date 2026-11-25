// FUN_020bd8ac @ 0x020bd8ac (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020bd8ac @ 0x020bd8ac (0x34, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020e1268(int, void *, int, void *, int);
extern void FUN_020bd800(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
extern void FUN_020bd830(void);

int FUN_020bd8ac(signed char *p, int a) {
    int r = 0;
    if (p[0x1c] == 4) {
        r = FUN_020e1268(a, (void *)FUN_020bd800, 0, (void *)FUN_020bd830, 0);
        if (r == 1) {
            p[0x1c] = 8;
        }
    }
    return r;
}
