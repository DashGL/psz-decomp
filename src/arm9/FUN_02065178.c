// FUN_02065178 @ 0x02065178 (0x54, arm) - ported from FUN_02015374 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_02065178 — DMA cache-sync gate (ARM, recorded size 0x54).
 * Args: (channel, addr, count, dir). channel 0 only (popne early-out);
 * dir selects the end address: 0 -> addr+count (out-of-line add block),
 * 0x800000 -> addr-count (predicated subeq, if-converted inline),
 * anything else keeps addr (b over the add block). Then the 4-way
 * region test on the src/end 0xff000000 banks (== 0x04000000 or
 * >= 0x08000000: ITCM/main-RAM-ish) gating FUN_02068728(endbank, end,
 * count) — a flush/invalidate-style helper keyed on a static global.
 * KEY SPELLING: the dir update is a SWITCH (case 0 / case 0x800000),
 * not if/else — every if/else-if form if-converts BOTH arms (addeq in
 * line, 0x50); the switch emits the target's beq-to-out-of-line-add +
 * b-join (0x54). Matches 19/24 versions (1.2 family restructures);
 * banked on canonical dsi/1.1.
 * Caller: FUN_02014e88 (DMA blit core) arms each transfer with this.
 */
typedef unsigned int u32;

extern void FUN_02068728(u32 bank, u32 end, u32 count);

void FUN_02065178(u32 channel, u32 addr, u32 count, u32 dir) {
    if (channel != 0) {
        return;
    }
    u32 srcbank = addr & 0xff000000;
    switch (dir) {
    case 0:
        addr += count;
        break;
    case 0x800000:
        addr -= count;
        break;
    }
    u32 endbank = addr & 0xff000000;
    if (srcbank == 0x04000000 || srcbank >= 0x08000000
        || endbank == 0x04000000 || endbank >= 0x08000000) {
        FUN_02068728(endbank, addr, count);
    }
}
