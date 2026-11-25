// FUN_02030918 @ 0x02030918 (0x1e, thumb) - ported from FUN_020a2508 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: clear a game record buffer and reset selected index to-1.
 * Game state reset020a2654 calls this from banked0209ac7c. Word0 is buffer,
 * word1 capacity, word2 selection. Clear capacity*41 bytes if buffer exists,
 * preserving32-bit size arithmetic; then store sentinel even without buffer.
 * Record fields and domain identity are ???. SDK fill remains external.
 * Evidence: scratch/draft-coverage/batch17/020a2508-asm.txt and caller chain.
 */
typedef unsigned int u32;
#define GAME_RECORD_BYTES 41
extern void FUN_020656b8(u32,int,u32);
void FUN_02030918(u32 *container)
{
    if (container[0]) FUN_020656b8(container[0],0,container[1]*GAME_RECORD_BYTES);
    container[2]=~0u;
}
