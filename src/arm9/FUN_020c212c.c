// FUN_020c212c @ 0x020c212c (0x48, thumb) - ported from FUN_020a87b8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
typedef unsigned int u32;
extern u32 FUN_020ba894(u32), FUN_020c29bc(u32), FUN_020c3aec(void);
extern void FUN_020c2a58(u32), FUN_020c3c20(u32, int);
void FUN_020c212c(u32 **owner, int key) {
    int i = 0;
    do {
        u32 p = (*owner)[i];
        if (p != 0) {
            if (key == *(int *)(p + 4) && *(int *)(p + 8) >= 0)
                FUN_020c2a58(p);
        } else {
            p = FUN_020ba894(0x24);
            if (p)
                p = FUN_020c29bc(p);
            (*owner)[i] = p;
        }
        i++;
    } while (i < 8);
    FUN_020c3c20(FUN_020c3aec(), key);
}
