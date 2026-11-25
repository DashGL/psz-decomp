// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
typedef struct {
    char pad[0x5a];
    unsigned char f5a;
    unsigned char f5b;
} Elem_28a24;
extern Elem_28a24 DAT_02108a88[];
extern int FUN_020683d4(void);
extern int FUN_020015ac(void *, void *, int);
extern void FUN_020683e8(int);
void FUN_02028a24(char *a) {
    int r5;
    int r6;
    Elem_28a24 *r7;
    r6 = FUN_020683d4();
    r7 = DAT_02108a88;
    for (r5 = 0; r5 < 4; r5++, r7++) {
        if (r7->f5a != 0) {
            if (FUN_020015ac(r7, a + 0x74, 0x20) == 0) {
                r7->f5a = 0;
                break;
            }
        }
    }
    FUN_020683e8(r6);
}
