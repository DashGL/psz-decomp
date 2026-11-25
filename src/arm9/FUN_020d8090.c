// FUN_020d8090 @ 0x020d8090 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch36-manifest.json; original draft retained for referenced provenance.
// FUN_020d8090 @ 0x020d8090 (0x3c, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
extern int FUN_020c70b8(int, int, int, void *, void *, void *);
extern int D_0211dba0[];
extern void FUN_020d8078(void);
extern void FUN_020d806c(void);
extern void FUN_020d8084(void);

int FUN_020d8090(void) {
    if (D_0211dba0[2] == 0) {
        D_0211dba0[2] = FUN_020c70b8(8, 0x64, 2, (void *)FUN_020d806c, (void *)FUN_020d8078, (void *)FUN_020d8084);
    }
    return D_0211dba0[2];
}
