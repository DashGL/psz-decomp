// FUN_0205cf10 @ 0x0205cf10 (0x28, arm) - ported from FUN_0200f188 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0205cf10 @ 0x0200f188 (0x28 = 10 ARM words, ARM) — halfword flag setter
 * on *(u16 *)arg0, driven by the SIGN of arg1.
 *
 * Bytes (10 words):
 *   0200f188: 00 00 51 e3   cmp   r1, #0
 *   0200f18c: 00 10 a0 03   moveq r1, #0
 *   0200f190: b0 10 c0 01   strheq r1, [r0]
 *   0200f194: 1e ff 2f 01   bxeq  lr
 *   0200f198: 01 19 81 c3   orrgt r1, r1, #0x4000
 *   0200f19c: b0 10 c0 c1   strhgt r1, [r0]
 *   0200f1a0: 00 10 61 d2   rsble r1, r1, #0
 *   0200f1a4: 02 19 81 d3   orrle r1, r1, #0x8000
 *   0200f1a8: b0 10 c0 d1   strhle r1, [r0]
 *   0200f1ac: 1e ff 2f e1   bx    lr
 *
 * Semantics re-derived from the target bytes:
 *  - arg1 is SIGNED and the compare is on r1, so the three-way split is
 *    ==0 / >0 / <0. There is no explicit branch after the >0 arm; control
 *    simply FALLS THROUGH into the <0 arm, which the compiler made legal by
 *    predicating every instruction there on LE. So the source is a plain
 *    if / else-if / else whose arms MWCC if-converts into predicated
 *    orr/strh triples — same shape as banked FUN_02013878.
 *  - the ==0 arm is not just `*p = 0`: MWCC emits `moveq r1,#0` before the
 *    predicated store, i.e. the constant is materialised into the SAME
 *    register the OR arms use. Writing `*p = 0;` reproduces that; writing
 *    `*p = arg1;` would not.
 *  - the >0 arm ORs 0x4000 into arg1 UNCHANGED and stores it.
 *  - the <0 arm NEGATES first (`rsble r1,r1,#0` = 0 - r1, predicated LE, so
 *    it only fires on the negative path) and then ORs 0x8000 into the
 *    NEGATED value. So the stored halfword carries |arg1| plus a sign bit:
 *    0x4000 = positive, 0x8000 = negative. That is the DSi REG_IME-style
 *    "flag = value | polarity" idiom; the read reloc names no symbol so no
 *    library name is licensed.
 *
 * 0x28 = exactly the ten words above; the following word at 0x0200f1b0 is
 * `ldrh r1,[r0] / and r1,r1,#0xc000`, a fresh function (a mask test on the
 * same kind of halfword register), so the recorded span is the TRUE size.
 */
typedef unsigned short u16;

void FUN_0205cf10(u16 *p, int v)
{
    if (v == 0) {
        *p = 0;
    } else if (v > 0) {
        *p = v | 0x4000;
    } else {
        *p = (-v) | 0x8000;
    }
}
