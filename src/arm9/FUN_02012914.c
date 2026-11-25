// FUN_02012914 @ 0x02012914 (0x28, arm) - ported from FUN_02017630 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb -O4,p
/*
 * FUN_02012914 @ 0x02017630 (0x28, arm). Sprite-base offset calculator
 * called by banked FUN_020a8194 (n = FUN_02012914(node->f14, item[0])).
 * p = sprite def struct: +0 u16 limit (idx bound), +2 u16 mode flags,
 * +4 u32 base. idx >= limit -> 0 (if-converted hs pair, shared bx).
 * else base + (mode bit0 ? idx*16 : idx*8) — the target emits TWO
 * conditional adds (addne r0,r0,r1,lsl#4 / addeq r0,r0,r1,lsl#3), not a
 * selected shift. Live bp census 2026-09-17 tranche 1
 * (scratch/census_0917e_summary.json): 45.1 hits/s.
 * Matched dsi/1.1..1.6sp2 (all nine) + all ten 2.0 builds; the 1.2 family
 * emits a different guard/shift shape (4 words differ, all swept).
 */
typedef unsigned short u16;
typedef unsigned int u32;

int FUN_02012914(u32 *p, u32 idx)
{
    u16 limit;
    u16 mode;
    u32 base;

    limit = *(u16 *)p;
    if (idx >= limit) {
        return 0;
    }
    mode = *(u16 *)((char *)p + 2);
    base = *(u32 *)((char *)p + 4);
    if (mode & 1) {
        base += idx << 4;
    } else {
        base += idx << 3;
    }
    return base;
}
