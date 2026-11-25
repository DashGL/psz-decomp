// FUN_020167e4 @ 0x020167e4 (0x40, arm) - ported from FUN_0201c088 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_020167e4 @ 0x0201c088 (0x40, ARM), verified 2.0/base. */
typedef struct {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8;
    int fc;
    int pad[5];
    int f24;
    int f28;
    int f2c;
    int f30;
} S_0201c088;
extern void FUN_020654b4(int, void *, int);

void FUN_020167e4(int *a0) {
    FUN_020654b4(0, a0, 0x70);
    a0[0] = 0;
    a0[1] = 2;
    a0[2] = 0;
    a0[3] = 0;
    a0[9] = 0;
    a0[12] = 1;
    a0[10] = 0;
}
