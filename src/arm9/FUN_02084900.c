// FUN_02084900 @ 0x02084900 (0x42, thumb) - ported from FUN_0206c394 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* test whether an item header supports stacked quantities.
 * ROM 0206c394..0206c3d5 (0x42 executable + 2-byte pad), Thumb.
 * Category 3 requires a nonnull definition; its upper five halfword bits
 * are the stack limit, with zero meaning 99. Return whether limit>1.
 * Other categories accept category 4 only. The header is not mutated.
 * Limit semantics are established in banked 0206e378; banked 0206c4f0
 * uses this predicate before capacity checks. Broader category names are ???.
 * Evidence: scratch/draft-coverage/batch3/0206c394-asm.txt and banked callers.
 */
#define DEFINITION_CATEGORY 3
#define DIRECT_QUANTITY_CATEGORY 4
#define DEFAULT_STACK_LIMIT 99
typedef struct { unsigned short other:11,limit:5; } Definition;
extern int FUN_0203a820(unsigned char *item,int category);
extern Definition *FUN_02084638(unsigned char *item);
int FUN_02084900(unsigned char *item)
{
    if (FUN_0203a820(item,DEFINITION_CATEGORY)) {
        Definition *definition=FUN_02084638(item);
        if (definition) {
            int limit=definition->limit;
            if (!limit)
                limit=DEFAULT_STACK_LIMIT;
            if (limit>1)
                return 1;
            return 0;
        }
    } else if (FUN_0203a820(item,DIRECT_QUANTITY_CATEGORY)) {
        return 1;
    }
    return 0;
}
