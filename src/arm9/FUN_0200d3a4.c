// FUN_0200d3a4 @ 0x0200d3a4 (0x54, thumb) - ported from FUN_0205d864 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_0200d3a4 @ 0x0205d864 (0x54, Thumb), verified dsi/1.1.
 * Index/option state setter: require signed index0..12 and inactive word8=-1; store index,clear flag byte28. Option sets bit2 and bit1 except indices0/1/12. Return1 on update,else0. Explicit validation block keeps initial false value across two rejection branches and conditionally assigns true,matching ROM. No forced-inline helper or relocation slots remain. Full54 ends at final return,confirmed against recorded Mini extent.
 * Goal55 batch16: full bytes and relocations verified against Mini ROM.
 * Gameplay untested; field roles beyond the contracts above remain unproven.
 */
typedef unsigned int u32;
int FUN_0200d3a4(u32 object, int index, int option) {
    unsigned valid = 0;
    do {
        if (index <= -1) break;
        if (index >= 19) break;
        valid = 1;
    } while (0);
    if (!valid)
        return 0;
    if (*(int *)(object + 8) != -1)
        return 0;
    *(int *)(object + 8) = index;
    *(unsigned char *)(object + 28) = 0;
    if (option) {
        *(unsigned char *)(object + 28) |= 2;
        if (index != 1 && index != 0 && index != 12)
            *(unsigned char *)(object + 28) |= 1;
    }
    return 1;
}
