// FUN_020bf6b0 @ 0x020bf6b0 (0x30, thumb) - ported from FUN_020acc08 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020bf6b0 @ 0x020acc08 (0x30, Thumb).
 * Axis-aligned-box setup: type 1 with the min and max corners.
 * Verified: dsi/1.1 -O4,s; every byte and relocation matches the ROM.
 */
typedef struct { int x,y; } Vec2;
extern void FUN_02034e8c(Vec2 *, const Vec2 *);
void FUN_020bf6b0(int *p, const Vec2 *center, int width, int height)
{
    Vec2 min, max;
    min = *center;
    max.x = min.x + width;
    max.y = min.y + height;
    p[0] = 1;
    FUN_02034e8c((Vec2 *)(p + 1), &min);
    FUN_02034e8c((Vec2 *)(p + 3), &max);
}
