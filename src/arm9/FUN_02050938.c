// FUN_02050938 @ 0x02050938 (0x10, thumb) - ported from FUN_02072488 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: build owner descriptor from source byte14 and signed byte12.
 * Entity descriptor cache 719f4 reaches this from banked 71a84.
 * Output/context forwarded; source byte14 is unsigned, byte12 sign-extended.
 * Domain meanings ???. Evidence: scratch/draft-coverage/batch34/02072488-disassemble.txt.
 */
typedef unsigned int u32;
extern void FUN_02050948(unsigned char *,u32,int,int);
void FUN_02050938(unsigned char *out,u32 context,u32 source)
{
    FUN_02050948(out,context,*(unsigned char *)(source+0x14),*(signed char *)(source+0x12));
}
