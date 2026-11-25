// FUN_0204b450 @ 0x0204b450 (0x4a, thumb) - ported from FUN_02064434 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: clear bit 2 in selected effect attachment slots.
 * Banked effect constructor 02054418 and initializer 02053c9c call this.
 * Only unsigned state+0xac <=1 acts. Owner+0x30 absent sets flag18 at
 * +0xe4; otherwise signed index<5 selects one slot, index>=5 selects all
 * five. Negative indices are forwarded to the slot getter, which rejects
 * them. Nonnull slots have flag2 cleared. Other flag meanings are ???.
 * Evidence: scratch/draft-coverage/batch5/02064434-asm.txt and callees.
 */
typedef unsigned int u32;
#define EFFECT_STATE_OFF 0xac
#define EFFECT_OWNER_OFF 0x30
#define EFFECT_FLAGS_OFF 0xe4
#define OWNER_ABSENT_FLAG (1u<<18)
#define ATTACHMENT_COUNT 5
extern u32 FUN_0204225c(u32,int);
extern void FUN_02046bec(u32);
void FUN_0204b450(u32 effect,int index)
{
    if (*(u32 *)(effect+EFFECT_STATE_OFF)<=1) {
        u32 owner=*(u32 *)(effect+EFFECT_OWNER_OFF);
        if (owner) {
            int end,first=0;
            end=ATTACHMENT_COUNT;
            if (index<ATTACHMENT_COUNT) { first=index;end=index+1; }
            for (;first<end;first++) {
                u32 slot=FUN_0204225c(owner,first);
                if (slot) FUN_02046bec(slot);
            }
            return;
        }
        *(u32 *)(effect+EFFECT_FLAGS_OFF)|=OWNER_ABSENT_FLAG;
    }
}
