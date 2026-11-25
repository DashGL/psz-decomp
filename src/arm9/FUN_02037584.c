// FUN_02037584 @ 0x02037584 (0x52, thumb) - ported from FUN_02059eb4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: classify record kind into numeric groups0..3 for020573b0.
 * Groups are exact ROM sets; domain labels remain ???. Unsigned subtract
 * implements bounded ranges without signed overflow. Evidence: batch72.
 */
typedef unsigned int u32;
int FUN_02037584(u32 kind)
{
    if (kind==0x3d || kind==0x3e || kind==0x3f || kind==0x41 || kind==0x42 || kind==0x44) return 3;
    if (kind==0x10 || kind-0x34<=4) return 2;
    if (kind==6 || kind==0xe || kind==0x14 || kind==0x1b || kind==0x20 || kind==0x22 || kind-0x32<=1) return 1;
    return 0;
}
