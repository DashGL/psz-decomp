// FUN_0205e1dc @ 0x0205e1dc (0x84, arm) - ported from FUN_0200fb44 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0205e1dc @ 0x0200fb44 (0x84, ARM) — BG map-base address resolver from
 * live display state: reads DISPCNT (0x04000000, volatile, twice: mode =
 * DISPCNT & 7, and block = (DISPCNT & 0x38000000) >> 27 << 16, the 64KB VRAM
 * block selector) plus BG3CNT (0x0400000E, volatile u16, one read kept for
 * both extractions: screen = (BG3CNT & 0x1f00) >> 8). Dense switch on mode
 * lowered as `addls pc, pc, ip, lsl #2` + 7-entry b-table: modes 0-2 (text)
 * -> block + 0x06000000 + (screen << 11); modes 3-5 -> if BG3CNT & 0x80
 * (affine/bitmap area select) then (screen << 14) + 0x06000000 else the text
 * formula (predicated lslne/addne/addeq/addeq pair); mode 6 and the >6
 * default return 0 as SEPARATE arms (mov r0,#0; bx lr at 0x205e250 and
 * 0x205e258 — a shared `case 6: default:` would merge them).
 *
 * MATCH LEVER: unsigned mask expression — `(u32)bg3cnt & 0x1f00) >> 8`
 * emits the target's `lsr r1, r0, #8`; the bare u16 expression promotes to
 * signed int and emits `asr` (the only differing instruction in the first
 * draft). Everything else (double volatile DISPCNT reload, switch table
 * shape, predicated bitmap arm, separate zero arms) fell out of the natural
 * spelling under the base flags.
 */
typedef unsigned int u32;
typedef unsigned short u16;

u32 FUN_0205e1dc(void) {
    u32 mode = *(volatile u32 *)0x04000000 & 7;
    u16 bg3cnt = *(volatile u16 *)0x0400000E;
    u32 block = (*(volatile u32 *)0x04000000 & 0x38000000) >> 0x1b << 0x10;
    u32 screen = ((u32)bg3cnt & 0x1f00) >> 8;
    switch (mode) {
    case 0:
    case 1:
    case 2:
        return block + 0x06000000 + (screen << 11);
    case 3:
    case 4:
    case 5:
        if (bg3cnt & 0x80)
            return (screen << 14) + 0x06000000;
        return block + 0x06000000 + (screen << 11);
    case 6:
        return 0;
    default:
        return 0;
    }
}
