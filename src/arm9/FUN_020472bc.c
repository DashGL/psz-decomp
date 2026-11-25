// FUN_020472bc @ 0x020472bc (0x10, thumb) - ported from FUN_0204e12c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_020472bc - List-removal driver (Thumb, recorded size 0x10). r4 = a0; ret = FUN_0204a580(); FUN_0204a628((List*)ret, (Node*)r4) — the first arg of the followup is the fetch-callee's return value passed through r0.
 *
 * verified: FUN_020472bc @ 0x0204e12c - mwcc-strict 1.1/dsi, arm946e; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct List List;
typedef struct Node Node;

extern int FUN_0204a580(void);
extern void FUN_0204a628(List *list, Node *node);

void FUN_020472bc(u32 a0, u32 a1)
{
    u32 r4 = a0;
    u32 ret;
    ret = (u32)FUN_0204a580();
    FUN_0204a628((List *)ret, (Node *)r4);
}
