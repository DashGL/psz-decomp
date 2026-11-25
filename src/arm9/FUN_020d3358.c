// FUN_020d3358 @ 0x020d3358 (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch38-manifest.json; original draft retained for referenced provenance.
// FUN_020d3358 @ 0x020d3358 (0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020d49b4(void *, unsigned int);

int FUN_020d3358(char *p, unsigned int a) {
    if (*(int *)(p + 0x90) == 0) {
        return 1;
    }
    if (a - *(unsigned int *)(p + 0x94) > 0x64 && FUN_020d49b4(p, a - *(unsigned int *)(p + 0x94)) == 0) {
        return 0;
    }
    return 1;
}
