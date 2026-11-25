// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -noThumb
typedef struct {
    int f0;
} Sub_22c18;
typedef struct Node_22c18 {
    char pad[0x68];
    struct Node_22c18 *f68;
    char pad2[0x38];
    Sub_22c18 *fa4;
} Node_22c18;
typedef struct {
    int f0;
    int f4;
    Node_22c18 *f8;
} G_22c18;
extern G_22c18 DAT_021181a0;
extern int FUN_02022b64(int, int, Sub_22c18 *);
Sub_22c18 *FUN_02022c18(int a, int b) {
    Sub_22c18 *r4;
    Node_22c18 *r5 = DAT_021181a0.f8;
    while (r5 != 0) {
        r4 = r5->fa4;
        if (r4 != 0 && r4->f0 != 0 && FUN_02022b64(a, b, r4) != 0) {
            return r4;
        }
        r5 = r5->f68;
    }
    return 0;
}
