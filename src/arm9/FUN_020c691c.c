// FUN_020c691c @ 0x020c691c (0x26, thumb) - ported from FUN_020a5cd8 [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: initialize game camera-manager component state.
 * Bankeda53d8 calls this during construction. Clear word2c in three
 * 30-byte records and words114/118/11c/120; other fields untouched.
 * Preserve unsigned address comparison and wrapping end calculation.
 * Field roles ???. Evidence:
 * scratch/draft-coverage/batch52/020a5cd8-disassemble.txt.
 */
typedef unsigned int u32;
void FUN_020c691c(u32 manager)
{
    u32 current=manager;
    do {*(u32 *)(current+0x2c)=0;current+=0x30;} while(current<manager+0x90);
    *(u32 *)(manager+0x114)=0;
    *(u32 *)(manager+0x118)=0;
    *(u32 *)(manager+0x11c)=0;
    *(u32 *)(manager+0x120)=0;
}
