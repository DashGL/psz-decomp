// FUN_020c03d0 @ 0x020c03d0 (0x38, thumb) - ported from FUN_020ad8e0 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Live abfb8 -> ad9bc -> acdd8 -> ad0c4 -> this helper. Rectangle passed
 * by value: low x/y and high x in r1-r3, high y on stack, then output.
 * Clamp low then high, even for reversed bounds. X writes precede loading
 * input Y, so partial overlap is observable. Batch277.
 */
typedef struct {int low_x,low_y,high_x,high_y;} Rectangle;
void FUN_020c03d0(const int *point,Rectangle bounds,int *out)
{
    out[0]=point[0];
    if(out[0]<bounds.low_x) out[0]=bounds.low_x;
    if(out[0]>bounds.high_x) out[0]=bounds.high_x;
    out[1]=point[1];
    if(out[1]<bounds.low_y) out[1]=bounds.low_y;
    if(out[1]>bounds.high_y) out[1]=bounds.high_y;
}
