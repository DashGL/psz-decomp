// FUN_02037750 @ 0x02037750 (0xa, thumb) - ported from FUN_0205912c [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;

int FUN_02037750(u32 obj) {
    return *(signed char *)(*(u32 *)(*(u32 *)(obj + 0x14)) + 0);
}
