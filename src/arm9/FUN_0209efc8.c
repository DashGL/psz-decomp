// FUN_0209efc8 @ 0x0209efc8 (0x4c, thumb) - ported from FUN_02040498 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_0209efc8 @ 0x02040498 (0x4c, Thumb), verified dsi/1.1.
 * Validate key through40218 and require40450 absence. Get entry count
 * from40434, scan signed halfword keys at object+12 with stride4; return1
 * only when the scan reaches count without a match. Guard failures and
 * scan match return0. Nesting the positive guards around a for/break loop
 * reproduces the separate failure returns and call/loop placement.
 * Return404e2 ends full4c, no pool or trailing alignment.
 * 2026-10-15: full byte/relocation match -O4,s. Gameplay untested.
 */
typedef unsigned int u32;
extern int FUN_0209ed38(short *), FUN_0209ef80(u32, short *);
extern u32 FUN_0209ef64(u32);
int FUN_0209efc8(u32 object, short *key) {
    u32 count, i;
    if (FUN_0209ed38(key) && !FUN_0209ef80(object, key)) {
    count = FUN_0209ef64(object);
    i = 0;
    for (; i < count; i++) {
        if (*key == *(short *)(object + i * 4 + 12)) break;
    }
    if (i == count)
        return 1;
    return 0;
    }
    return 0;
}
