// FUN_0201082c @ 0x0201082c (0x58, arm) - ported from FUN_0202aee4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0201082c @ 0x0202aee4 (0x58, ARM), verified 2.0/base. */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u8 pad[0x110];
    int bit0 : 1;
    int bit1 : 1;
    int rest : 30;
} S_2aee4;
extern void FUN_02010884(void *);
extern void FUN_020118e8(void *, int, u32);

void FUN_0201082c(u8 *self, u32 a1) {
    if (!((S_2aee4 *)self)->bit1) {
        FUN_02010884(self);
        return;
    }
    if (a1 == 0) {
        FUN_02010884(self);
        return;
    }
    FUN_020118e8(self + 0xe8, 0, a1);
    *(u32 *)(self + 0x110) |= 8;
    *(u32 *)(self + 0x150) = 0;
}
