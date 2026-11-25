// FUN_02046b54 @ 0x02046b54 (0x26, thumb) - ported from FUN_02070fd4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* Existing draft semantic repair: return0 only with nonnull child field14,flag8,and signed counter below resource threshold70e54; otherwise1. Threshold reads nested halfword shifted12. Both return instructions verified live. Goal55 scope check excludes this exact plumbing function from src and PORT PROGRESS. Gameplay untested. */
typedef unsigned int u32;
extern int FUN_020469d4(u32);
u32 FUN_02046b54(u32 *object) {
    u32 buffer = object[5];
    if (buffer && (object[1] & 8)) {
        int limit = FUN_020469d4(buffer);
        if (*(int *)object[5] < limit)
            return 0;
    }
    return 1;
}
