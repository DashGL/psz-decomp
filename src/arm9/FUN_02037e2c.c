// FUN_02037e2c @ 0x02037e2c (0x1a, thumb) - ported from FUN_020a5b18 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_02037e2c @ 0x020a5b18 (0x1a, Thumb), verified dsi/1.1.
 * Release the resource-manager chain at object+0x18, prefetching next at node+0 before each ab578 release; clear the head after traversal. Constructor a5b34 initializes this chain; the manager is used by camera manager a53d8. Plain while plus -O4,s rotates the test to the bottom; the previous for/break shape retains a top test under either profile. Return at a5b30 proves true 0x1a span; the following zero halfword is alignment before a5b34.
 * 2026-10-15: full words and relocation targets verified. Gameplay untested.
 */
typedef unsigned int u32;

extern void FUN_020ba8ac(void *a0);

void FUN_02037e2c(u32 *obj)
{
    u32 *r5 = (u32 *)obj[6];
    while (r5) {
        u32 *cur = r5;
        r5 = (u32 *)r5[0];
        FUN_020ba8ac(cur);
    }
    obj[6] = 0;
}
