// FUN_020c2a30 @ 0x020c2a30 (0x28, thumb) - ported from FUN_020a90b4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c2a30 @ 0x020a90b4 (0x28, Thumb).
 * Resets selected state words and initializes the two embedded handle
 * groups. Preserves word zero and all fields not explicitly written.
 */
extern void FUN_02013438(int *);
extern void FUN_0201347c(int *);
void FUN_020c2a30(int *p)
{
    p[2] = 0;
    p[1] = 0;
    p[3] = 0;
    p[4] = 0;
    p[5] = 0;
    p[22] = 0;
    p[21] = 0;
    p[20] = 0;
    FUN_02013438(p + 6);
    FUN_0201347c(p + 15);
}
