// FUN_02077794 @ 0x02077794 (0x6c, thumb) - ported from FUN_0205f304 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_02077794 @ 0x0205f304 (0x6c, Thumb), verified dsi/1.1.
 * Initialize three44-byte game subrecords and clear owner132. Construct subrecord28, clear words0/4 and low7 flag bits via separate masks7/24/96, set sentinel words12/16 to minus1, clear words20/24 and reset subrecord28. Returns owner. Initialize outer index only after construction loop and inner index only after sentinel stores; declare inner index before entry pointer. This preserves separate sentinel materialization and exact register roles. Full6c ends at pop6a with no pool.
 * Goal55 batch28: full bytes and relocations verified against Mini ROM.
 * Gameplay untested; field roles beyond the contracts above remain unproven.
 */
typedef unsigned int u32;
extern void FUN_020c4434(u32), FUN_020c4560(u32);
u32 FUN_02077794(u32 object) {
    u32 cursor = object;
    int i;
    do {
        FUN_020c4434(cursor + 28);
        cursor += 44;
    } while (cursor < object + 132);
    i=0;
    *(u32 *)(object + 132) = 0;
    do {
        int j;
        u32 entry = object + i * 44;
        *(u32 *)entry = 0;
        *(u32 *)(entry + 4) = 0;
        *(u32 *)(entry + 8) &= ~7;
        *(u32 *)(entry + 8) &= ~24;
        *(u32 *)(entry + 8) &= ~96;
        *(u32 *)(entry + 12) = -1;
        *(u32 *)(entry + 16) = -1;
        j=0;
        do {
            *(u32 *)(entry + j * 4 + 20) = 0;
            j++;
        } while (j < 2);
        FUN_020c4560(entry + 28);
        i++;
    } while (i < 3);
    return object;
}
