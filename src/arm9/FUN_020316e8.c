// FUN_020316e8 @ 0x020316e8 (0x1a, thumb) - ported from FUN_0205d554 [banked], verified via tools/match.py (word compare + verify_relocs).
/*
 * FUN_020316e8 @ 0x0205d554, Thumb, true size 0x1a (recorded 0x1c spans
 * the 2-byte inter-function pad — a4318/3e570 pad class; next fn
 * FUN_0205d570 at +0x1c).
 * Sign-extended 4-byte copy: dst[0..3] = src[0..3], each byte loaded
 * via ldrsb and stored via strb (mov r2,#N; ldrsb r2,[r1,r2] pairs;
 * byte 3 reuses r1). Ghidra's 4-word u32-copy view is WRONG — census
 * rule: the disasm is the structural spec, per the 80824 session.
 * Called by banked FUN_02080824 (slow-path id staging into the sp+0
 * buffer).
 * MATCHED: first draft, FULLY family-neutral — ALL 24 builds.
 * Reloc-free. Found via the fresh shortlist.
 */
typedef signed char s8;

void FUN_020316e8(s8 *dst, s8 *src) {
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
    dst[3] = src[3];
}
