// FUN_020be4f8 @ 0x020be4f8 (0x28, thumb) - ported from FUN_020aba98 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* apply slot-group selection to a valid, populated combat handle.
 * ROM 020aba98..020ababf, Thumb; evidence: scratch/draft-coverage/batch1/.
 * Banked 0204e770 and eight other entity routines call this after 020ac260.
 * 020bee50 validates the low-16 slot index (<100), rejects -1, and checks
 * the high-16 generation against slot+4. Slot+0xc is its bound payload.
 * 020bf014 stores group into slot byte+1 and relinks active slots on change.
 * Higher-level meaning of the group numbers is ???. Null or unpopulated
 * slots are ignored. The ROM materializes !payload before testing it.
 * This is game combat state, not a DS hardware/SDK interface. Census untouched.
 */
typedef unsigned int u32;
#define SLOT_PAYLOAD_OFF 12
extern u32 FUN_020bee50(u32 table,u32 handle);
extern void FUN_020bf014(u32 table,u32 slot,int group);
void FUN_020be4f8(u32 table,u32 handle,int group)
{
    u32 slot = FUN_020bee50(table,handle);
    if (slot) {
        u32 empty = !*(u32 *)(slot + SLOT_PAYLOAD_OFF);
        if (empty == 0)
            FUN_020bf014(table,slot,group);
    }
}
