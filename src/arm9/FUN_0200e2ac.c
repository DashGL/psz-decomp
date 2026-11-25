// FUN_0200e2ac @ 0x0200e2ac (0x54, arm) - ported from FUN_020288dc [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200e2ac @ 0x020288dc (0x54, ARM), verified dsi/1.1. */
typedef unsigned char u8;
typedef unsigned int u32;
typedef struct {
    u8 pad[0x24];
    int flags : 1;
    int bit1 : 1;
    int rest : 30;
} S288dc;
extern void FUN_02069650(u32, int, int, int);
extern void FUN_0206beb8(void *);
extern void FUN_0206bed0(void *);

void FUN_0200e2ac(u8 *self) {
    FUN_02069650(*(u32 *)(self + 0x44), 0, 1 << *(u32 *)(self + 0x40), 0);
    if (((S288dc *)self)->bit1) {
        return;
    }
    FUN_0206beb8(self + 8);
    FUN_0206bed0(self + 0x14);
    *(u32 *)(self + 0x24) |= 2;
}
