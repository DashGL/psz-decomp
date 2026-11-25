// FUN_020c4f70 @ 0x020c4f70 (0x28, thumb) - ported from FUN_020aa424 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: decode the game archive's rolling-byte XOR payload.
 * Banked020aa0bc reads a resource, invokes this in-place, then validates it.
 * Always read source byte0, even for count0; copy byte0 only when pointers
 * differ. Bytes1..count-1 XOR with byte0-derived key, then update key modulo
 * 256 using context byte+0x28. Reload step AFTER each output store, since
 * pointers may alias context. No null/length guard or overlap-safe buffering.
 * Seed/step format roles follow the algorithm; wider archive semantics ???.
 * Evidence: scratch/draft-coverage/batch12/020aa424-asm.txt and banked caller.
 */
typedef unsigned int u32;
#define ARCHIVE_KEY_STEP_OFF 0x28
void FUN_020c4f70(unsigned char *context,unsigned char *source,unsigned char *destination,u32 count)
{
    unsigned char key=source[0];
    u32 i;
    if (source!=destination) destination[0]=key;
    for (i=1;i<count;i++) {
        destination[i]=source[i]^key;
        key=(unsigned char)(key+context[ARCHIVE_KEY_STEP_OFF]);
    }
}
