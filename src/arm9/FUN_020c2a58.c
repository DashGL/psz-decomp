// FUN_020c2a58 @ 0x020c2a58 (0x50, thumb) - ported from FUN_020a90dc [banked], verified via tools/match.py (word compare + verify_relocs).
typedef unsigned int u32;

extern u32 FUN_020c3aec(void);
extern void FUN_020c3c48(u32 mgr, u32 h);
extern void FUN_02001540(u32 a, u32 b, u32 c);
extern void FUN_020c2a30(u32 base);

void FUN_020c2a58(u32 *p) {
    u32 h;
    if ((p[2] != -1) && (p[1] != 3)) {
        h = p[3];
        if (h != 0) {
            FUN_020c3c48(FUN_020c3aec(), h);
        }
        FUN_02001540(*(u32 *)*p, 0, 0x1000);
        FUN_020c2a30(*p);
    }
    p[2] = -1;
    p[1] = 3;
    p[5] = 0;
    p[4] = 0;
    p[6] = 0;
    p[8] = 0;
    p[7] = 0;
}
