// FUN_0204a628 @ 0x0204a628 (0x14, thumb) - ported from FUN_02063674 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_0204a628 - List-removal followup (Thumb, recorded size 0x14). r4 = a1; FUN_0204a5d0((List*)a0, (Node*)a1); if (a1 != 0) FUN_0204adbc(a1).
 *
 * verified: FUN_0204a628 @ 0x02063674 - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct List List;
typedef struct Node Node;

extern u32 FUN_0204a5d0(List *list, Node *node);
extern void FUN_0204adbc(u32 p);

void FUN_0204a628(u32 a0, u32 a1)
{
    u32 r4 = a1;
    FUN_0204a5d0((List *)a0, (Node *)r4);
    if (r4 != 0) {
        FUN_0204adbc(r4);
    }
}
