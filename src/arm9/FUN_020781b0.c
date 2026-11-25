// FUN_020781b0 @ 0x020781b0 (0x16, thumb) - ported from FUN_020a4270 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: signed ID range predicate for the third entity-position route.
 * Banked 0206927c dispatches accepted IDs to 0207ef2c. Domain name ???.
 * Inclusive bounds 0x204..0x283; return canonical 0/1.
 * Evidence: scratch/draft-coverage/batch28/020a4270-disassemble.txt.
 */
#define ENTITY_CLASS_FIRST 0x204
#define ENTITY_CLASS_LAST 0x283
int FUN_020781b0(int id)
{
    if (id>=ENTITY_CLASS_FIRST && id<=ENTITY_CLASS_LAST) return 1;
    return 0;
}
