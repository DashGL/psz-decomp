// FUN_020352c0 @ 0x020352c0 (0x1a, thumb) - ported from FUN_02058194 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* select a nonnull entity carrying flag bit 2 in its +4 word.
 * ROM 02058194..020581ad (0x1a executable + 2-byte pad), Thumb.
 * Banked 02069300 uses the accepted entity for position lookup; 02051c18,
 * 020523d8 and 02054418 use the same selector. Broader class identity is ???.
 * Boolean materialization is explicit in the ROM, like bit-3 sibling 02073790.
 * Evidence: scratch/draft-coverage/batch3/02058194-asm.txt.
 */
typedef unsigned int u32;
typedef struct { void *table; u32 flags; } Entity;
#define ENTITY_FLAG_BIT2 4
Entity *FUN_020352c0(Entity *entity)
{
    if (entity) {
        u32 accepted=(entity->flags & ENTITY_FLAG_BIT2) ? 1 : 0;
        if (accepted)
            return entity;
    }
    return 0;
}
