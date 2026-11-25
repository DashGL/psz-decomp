// FUN_02042540 @ 0x02042540 (0x20, thumb) - ported from FUN_02070528 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/*
 * FUN_02042540 - indexed handler dispatch (Thumb). Recorded size 0x20; true
 * body 0x20 (no pool, no pad - next function starts exactly at 0x02070548).
 *
 * 02070528  08b5       push {r3, lr}
 * 0207052a  0022       movs r2, #0
 * 0207052c  d243       mvns r2, r2          ; r2 = -1
 * 0207052e  9142       cmp  r1, r2
 * 02070530  09dd       ble  0x204255e
 * 02070532  0529       cmp  r1, #5
 * 02070534  07da       bge  0x204255e
 * 02070536  8900       lsls r1, r1, #2
 * 02070538  4018       adds r0, r0, r1
 * 0207053a  d830       adds r0, #0xcc
 * 0207053c  0068       ldr  r0, [r0]
 * 0207053e  0028       cmp  r0, #0
 * 02070540  01d0       beq  0x204255e
 * 02070542  00f08dfd   bl   0x02071060
 * 0204255e  08bd       pop  {r3, pc}
 *
 * Reads from the bytes: void fn(u32 base, int idx) that fires the entry
 * stored at base + idx*4 + 0xcc for idx in [0,5), and does nothing for any
 * other idx or for a null entry. Sibling of the banked FUN_0207049c, which
 * has the identical shape but calls FUN_02071038 and is recorded 0x24.
 * No return value: the tail is a bare `pop {r3,pc}`, so the callee's result is
 * discarded and this function is void.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_02046be0(u32 entry);

void FUN_02042540(u32 base, int idx)
{
    if (idx > -1) {
        if (idx < 5) {
            u32 entry = *(u32 *)((u8 *)base + (idx << 2) + 0xcc);
            if (entry != 0) {
                FUN_02046be0(entry);
            }
        }
    }
}
