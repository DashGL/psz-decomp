// FUN_02037ac0 @ 0x02037ac0 (0x1a, thumb) - ported from FUN_020a57b0 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x1c, but the real body is 0x1a -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x1a.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

extern void *FUN_02037dd4(void *owner);

void FUN_02037ac0(void *owner, u16 value)
{
    u32 *node;
    u32 slot;

    node = (u32 *)FUN_02037dd4(owner);
    if (node == 0) {
        return;
    }
    slot = node[0x64 / 4];
    node[0x64 / 4] = slot + 1;
    *(u16 *)((u8 *)node + slot * 4 + 6) = value;
}
