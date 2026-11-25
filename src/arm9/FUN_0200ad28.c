// FUN_0200ad28 @ 0x0200ad28 (0x50, arm) - ported from FUN_0203c3bc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_0200ad28 — line-reader loop (ARM, dsi/1.1, 0x50). Reads bytes via
 * FUN_0200ad04 into buf until count bytes or CR/LF; on CR/LF stores
 * i+1 to *countP. Return always 0. KEY SPELLING (32 rounds): the CR/LF
 * check breaks out of the bare while loop (i<count, peeled unsigned
 * bls door = count>0), everything else is one shared return 0.
 */
#include <nds/ndstypes.h>

extern char FUN_0200ad04(void);

int FUN_0200ad28(unsigned int param_1, char *param_2, unsigned int *param_3)
{
    unsigned int i;
    unsigned int count;
    int c;

    count = *param_3;
    i = 0;
    while (i < count) {
        c = FUN_0200ad04();
        param_2[i] = c;
        if ((c & 0xff) == 0xd || (c & 0xff) == 0xa) {
            *param_3 = i + 1;
            break;
        }
        i = i + 1;
    }
    return 0;
}
