// FUN_020bf014 @ 0x020bf014 (0x34, thumb) - ported from FUN_020ac59c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* change a combat slot's group and relink it if active.
 * ROM 020ac59c..020ac5cf (0x34), Thumb. Both byte loads are signed.
 * Compare the full incoming group against the sign-extended old byte;
 * only the store truncates it. There is no validation of the group index.
 * If unchanged do nothing; otherwise store even for an inactive slot.
 * For active slots, 020bf048 unlinks the +0x10/+0x14 neighbor pointers;
 * 020bef98 inserts the slot at the selected one of three list sentinels.
 * The latter receives the original full group, not the truncated byte.
 * Meaning of each of those three groups is ???. Evidence: ROM listings
 * and callee bodies in scratch/draft-coverage/batch1/; caller 020aba98.
 * Complete logic draft; compilation is not a gameplay validation.
 */
typedef unsigned int u32;
#define SLOT_ACTIVE_BYTE 0
#define SLOT_GROUP_BYTE 1
extern void FUN_020bf048(u32 table,signed char *slot);
extern void FUN_020bef98(u32 table,int group,signed char *slot);
void FUN_020bf014(u32 table,signed char *slot,int group)
{
    if (group != slot[SLOT_GROUP_BYTE]) {
        u32 active;
        slot[SLOT_GROUP_BYTE] = (signed char)group;
        active = !!slot[SLOT_ACTIVE_BYTE];
        if (active) {
            FUN_020bf048(table,slot);
            FUN_020bef98(table,group,slot);
        }
    }
}
