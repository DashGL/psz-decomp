// FUN_020bc578 @ 0x020bc578 (0x26, thumb) - ported from FUN_020aa988 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
typedef unsigned char u8;
typedef unsigned int u32;

extern u32 FUN_020c13c8(u32 a0, u32 a1, u32 a2);
extern u32 FUN_020ba8bc(u32 cmd, u32 arg);

void FUN_020bc578(u32 p, u32 a1, u32 a2)
{
    u32 w;
    if (*(u32 *)((u8 *)p + 0x80) == 0) {
        return;
    }
    w = *(u32 *)((u8 *)p + 0x7c);
    if (w != 0) {
        *(u32 *)((u8 *)p + 0x70) = FUN_020c13c8(w, a1, a2);
    } else {
        *(u32 *)((u8 *)p + 0x70) = FUN_020ba8bc(a1, a2);
    }
}
