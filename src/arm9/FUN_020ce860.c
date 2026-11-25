// FUN_020ce860 @ 0x020ce860 (0x7c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch34-manifest.json; original draft retained for referenced provenance.
// Forward the original response string to every concrete request handler.
// check: 2.0/sp2p3 target=0x7c candidate=0x7c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,p
typedef struct {
    int f0;
    int f4[6];
    int f1c;
} S_ce860;
extern char DAT_020fde48[];
extern char DAT_020fde00[];
extern char DAT_020fddd8[];
extern int FUN_020cc474(void *, S_ce860 *, const char *);
extern int FUN_020cf644(void *, S_ce860 *, const char *);
extern int FUN_020cf7d8(void *, S_ce860 *, const char *);
extern int FUN_020ccf44(void *, S_ce860 *, const char *);
extern int FUN_020d170c(void *, S_ce860 *, const char *);
extern int FUN_020d17a4(void *, S_ce860 *, const char *);
extern void FUN_02000edc(char *, char *, char *, int);
int FUN_020ce860(void *a, S_ce860 *b, const char *response) {
    int r4 = 0;
    switch (b->f0) {
    case 0:
        r4 = FUN_020cc474(a, b, response);
        break;
    case 1:
        r4 = FUN_020cf644(a, b, response);
        break;
    case 5:
        r4 = FUN_020cf7d8(a, b, response);
        break;
    case 2:
        r4 = FUN_020ccf44(a, b, response);
        break;
    case 4:
        r4 = FUN_020d170c(a, b, response);
        break;
    case 6:
        r4 = FUN_020d17a4(a, b, response);
        break;
    default:
        FUN_02000edc(DAT_020fde48, DAT_020fde00, DAT_020fddd8, 0x166);
        break;
    }
    if (r4 != 0) {
        b->f1c = r4;
    }
    return r4;
}
