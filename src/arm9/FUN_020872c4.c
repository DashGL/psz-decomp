// FUN_020872c4 @ 0x020872c4 (0x12, thumb) - ported from FUN_0209f48c [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x14, but the real body is 0x12 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x12.
 */
/* FUN_020872c4 @ 0x0209f48c (0x14, THUMB) — live game predicate: reads a
 * 32-bit field at +0x34 off the object in arg0 and returns 1 when that
 * value is in the INCLUSIVE range [1,5], 0 otherwise.
 *
 * Bytes: 40 6b 01 28 03 db 05 28 01 dc 01 20 70 47 00 20 70 47
 *   0209f48c: ldr  r0, [r0, #0x34]   ; v = obj->field_34
 *   0209f48e: cmp  r0, #1
 *   0209f490: blt  020872d2         ; v <  1  -> return 0
 *   0209f492: cmp  r0, #5
 *   0209f494: bgt  020872d2         ; v >  5  -> return 0
 *   0209f496: movs r0, #1           ; in range -> return 1
 *   0209f498: bx   lr
 *   020872d2: movs r0, #0           ; out of range -> return 0
 *   0209f4 9c: bx   lr
 *
 * MODE VERIFIED FROM THE BYTES, not from the 4-aligned recorded size. The
 * brief's "4-aligned size means ARM" heuristic is WRONG for this function:
 * the first halfword 0x406b is Thumb `ldr r0,[r0,#0x34]`, and an ARM decode
 * of the same bytes renders `stmdahs r1,{r6,r8,sb,fp,sp,lr}` — garbage. No
 * marker line, Thumb is correct here. Both exits are `movs` (Thumb) forms
 * and the body is all 16-bit encodings.
 *
 * Semantics: the two compares are SIGNED (blt/bgt), so field_34 is a
 * signed 32-bit quantity — a 5-way "state code" enumeration where 1..5 are
 * the live/valid states. Spelled as one range test rather than two
 * separate early-returns: MWCC folds `v >= 1 && v <= 5` into the target's
 * two cmp + two branch shape, with the single shared return tail.
 *
 * Arg0 is the object pointer; the callee never stores, so the whole
 * function is a pure read of one word. Return value is a materialized
 * 0/1 bool, not the field value itself.
 *
 * SIZE: the recorded span is 0x14 but the body is 0x12 — the last two bytes
 * of the span are the inter-function pad halfword `0000` (`movs r0,r0`)
 * before FUN_0209f4a0, not part of this function. Matched at the body size
 * 0x12 on all 24 builds; no version override needed.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed int s32;

u32 FUN_020872c4(void *obj) {
    s32 v = *(s32 *)((u8 *)obj + 0x34);
    return (v >= 1 && v <= 5) ? 1 : 0;
}
