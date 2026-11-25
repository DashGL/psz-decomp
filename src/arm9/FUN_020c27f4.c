// FUN_020c27f4 @ 0x020c27f4 (0x3a, thumb) - ported from FUN_020a8e80 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_020c27f4 @ 0x020a8e80 (0x3a, Thumb), verified dsi/1.1.
 * Resource-owner cleanup: set owner+0x50 to one, then release and clear three resource slots. Both null branches for each slot target the instruction after its clear; placing the clear inside the second guard reproduces those exact branch destinations. Calls retain the ab5b0 veneer rather than naming its underlying callee. Return a8eb8 ends the full 0x3a body; two trailing alignment bytes are excluded.
 * 2026-10-15: full words and relocation targets verified. Gameplay untested.
 */
typedef unsigned int u32;
extern void FUN_020ba8c4(u32);
void FUN_020c27f4(u32 object, u32 *resources)
{
    *(u32 *)(object + 0x50) = 1;
    if (resources[0]) {
        if (resources[0]) { FUN_020ba8c4(resources[0]);
        resources[0] = 0; }
    }
    if (resources[1]) {
        if (resources[1]) { FUN_020ba8c4(resources[1]);
        resources[1] = 0; }
    }
    if (resources[2]) {
        if (resources[2]) { FUN_020ba8c4(resources[2]);
        resources[2] = 0; }
    }
}
