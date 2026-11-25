// FUN_0206d45c @ 0x0206d45c (0x1e, thumb) - ported from FUN_020a1b94 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* test a valid descriptor for word1==3.
 * ROM 020a1b94..020a1bb1 (0x1e executable + two-byte pad), Thumb.
 * Pass the descriptor in r0 to 0206d1fc; Ghidra drops that input. Return 0
 * if invalid, otherwise the equality result. No mutation or extra checks.
 * Banked effect constructor 0204e674 and entity routines 020547d4/02064b58
 * use this predicate. Higher-level identity of selector 3 is ???.
 * Evidence: scratch/draft-coverage/batch4/020a1b94-asm.txt and validator.
 */
typedef unsigned int u32;
typedef struct { u32 selectors[5]; } Descriptor;
extern int FUN_0206d1fc(Descriptor *descriptor);
int FUN_0206d45c(Descriptor *descriptor)
{
    if (FUN_0206d1fc(descriptor)) {
        if (descriptor->selectors[1]==3) return 1;
        return 0;
    }
    return 0;
}
