// FUN_overlay_10__0211f3f8 @ 0x0211f3f8 (0xe, thumb) - ported from FUN_020bb010 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x10, but the real body is 0xe -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0xe.
 */
/* FUN_overlay_10__0211f3f8 @ 0x020bb010 (recorded 0x10, THUMB) — range-checked write of
 * the argument into field +0x10 of the object in r0.
 *
 * Bytes (00 29 / 03 db / 42 68 / 91 42 / 00 da / c1 60 / 70 47 / 00 00):
 *   020bb010: 00 29   cmp  r1, #0
 *   020bb012: 03 db   blt  0x211f404            ; arg < 0 -> skip
 *   020bb014: 42 68   ldr  r2, [r0, #8]          ; r2 = object->limit
 *   020bb016: 91 42   cmp  r1, r2
 *   020bb018: 00 da   bge  0x211f404            ; arg >= limit -> skip
 *   020bb01a: c1 60   str  r1, [r0, #0x10]        ; object->sel_a = arg
 *   0211f404: 70 47   bx   lr
 *   020bb01e: 00 00   (2-byte align padding; included in the recorded 0x10)
 *
 * Semantics from the bytes: a bounds-guarded setter. The argument is stored
 * ONLY when it lies in the half-open interval [0, limit), where `limit` is the
 * u32 at +8. The store target +0x10 is a DIFFERENT field from the limit at +8,
 * and +8 is untouched — so the object is {u32 hdr; u32 limit_a; u32 ?; u32
 * sel_a;}. Out-of-range writes are silently dropped (no error return): the
 * predicate is the whole function, r0 is never reloaded, and the fallthrough
 * is a bare `bx lr`. This is a "clamp-by-rejection" index setter, the shape a
 * menu/list cursor uses.
 *
 * ARM/Thumb: THUMB, from the bytes — 7 instructions at 2-byte stride ending in
 * `bx lr` (0x4770). Real code extent is 0x0e; the recorded 0x10 includes the
 * trailing 00 00 alignment pad, which is why the brief's 8-aligned-size rule
 * misfires here (0x10 is 8-aligned but the body is Thumb).
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;

void FUN_overlay_10__0211f3f8(void *a, s32 b) {
    if (b >= 0 && b < *(s32 *)((u8 *)a + 0x8)) {
        *(s32 *)((u8 *)a + 0x10) = b;
    }
}
