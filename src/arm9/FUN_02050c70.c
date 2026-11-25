// FUN_02050c70 @ 0x02050c70 (0xc, thumb) - ported from FUN_020a2a8c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: install a nonnull resource pointer and clear its record flag byte.
 * Manager resource acquisition020a29bc passes a16-byte record and pointer;
 * banked020a58c0 establishes game resource-binding scope. Null input leaves
 * record untouched; otherwise write pointer+4 and byte+0xd=0. Flag role ???.
 * Evidence: scratch/draft-coverage/batch15/020a2a8c-asm.txt and caller chain.
 */
typedef unsigned int u32;
#define RESOURCE_POINTER_OFF 4
#define RESOURCE_FLAG_OFF 0xd
void FUN_02050c70(u32 record,u32 resource)
{
    if (resource) {
        *(u32 *)(record+RESOURCE_POINTER_OFF)=resource;
        *(unsigned char *)(record+RESOURCE_FLAG_OFF)=0;
    }
}
