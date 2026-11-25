// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets; argument/return contract corrected.
// Dedicated third argument preparation: notes/reference/resume2-upper-20261112/multiarg-proof.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct { int f0; int (*f4)(void); } State;
extern State D_02111f00;
extern void FUN_02056d6c(void);
extern void FUN_02068728(void);
void FUN_02056d08(int a, int b, int unused) {
    if ((b & 0x3f) == 0x11) {
        if (D_02111f00.f0 == 0) {
            int r = 1;
            D_02111f00.f0 = 1;
            if (D_02111f00.f4 != 0) {
                r = D_02111f00.f4();
            }
            if (r != 0) {
                FUN_02056d6c();
            }
        }
    } else {
        FUN_02068728();
    }
}
