// FUN_020c44e4 @ 0x020c44e4 (0x1c, thumb) - ported from FUN_020a6f04 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020c44e4 @ 0x020a6f04 (0x1c, THUMB) — live, census game_bridge.
 *
 * MODE: THUMB. Verified from RAW BYTES, not from the recorded size: the body
 * is 14 Thumb-sized encodings in a 0x1c window and begins `38 b5` = Thumb
 * `push {r3,r4,r5,lr}`. Census `thumb=True` agrees. No ARM marker here.
 *
 * Bytes (14 Thumb halfwords):
 *   020a6f04: 38 b5        push  {r3, r4, r5, lr}
 *   020a6f06: 05 1c        adds  r5, r0, #0     ; r5 = arg0
 *   020a6f08: 0c 1c        adds  r4, r1, #0     ; r4 = arg1
 *   020a6f0a: 20 1c        adds  r0, r4, #0     ; r0 = arg1
 *   020a6f0c: 29 1c        adds  r1, r5, #0     ; r1 = arg0
 *   020a6f0e: 02 22        movs  r2, #2         ; length = 2
 *   020a6f10: 6e f7 5c ed   blx   0x020159cc     ; callee #1
 *   020a6f14: a0 1c        adds  r0, r4, #2     ; r0 = arg1 + 2
 *   020a6f16: a9 1c        adds  r1, r5, #2     ; r1 = arg0 + 2
 *   020a6f18: 0e 22        movs  r2, #0xe       ; length = 14
 *   020a6f1a: 6e f7 5c ed   blx   0x020159cc     ; callee #1 again
 *   020a6f1e: 38 bd        pop   {r3, r4, r5, pc}
 *
 * Semantics: a 16-BYTE STRUCT COPY, done as TWO calls. Copy 2 bytes from arg0
 * to arg1, then copy the remaining 14 bytes from arg0+2 to arg1+2. Total 16
 * bytes, i.e. the whole object, but split 2 + 14 — the split is not a copy of
 * two separate fields, it is one 16-byte blob with a 2-byte head.
 *
 * The head/tail split is the tell that the 2-byte piece is a FIELD and the
 * 14-byte piece is the remainder of the same struct, i.e. the source was
 * closer to `dst->head = src->head; memcpy(&dst->rest, &src->rest, 14);`
 * than to two independent memcpys. Both calls go to the SAME callee, which
 * argues for one generic byte-mover used twice rather than a struct assign
 * (MWCC would emit ONE inline block copy for a 16-byte POD assign).
 *
 * CALLEE: 0x020159cc, 0x130 bytes. Its own body is a classic
 * memcpy/memmove-style word/halfword/byte ladder: an odd-destination
 * byte-swap prologue (`tst r1,#1` / `ldrh` / `orr r3,r12,r3,lsl #8`), then
 * `eor r12,r1,r0` to pick an alignment path, `bics r3,r2,#1` word chunks in a
 * `cmp r1,r12 / bcc` loop, then halfword and byte tails. Census classes it
 * `plumb_leaf` — it is the CRT/MSL byte-mover, NOT game logic.
 *
 * VERDICT NOTE (see REPORT.md): this 8-instruction wrapper is a struct copy
 * whose entire substance is "call memcpy twice". It is game-shaped only in the
 * sense that a game struct is what gets copied. Reported as a bridge, not
 * banked as a port target.
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern void FUN_02065774(u8 *dst, u8 *src, u32 len);

void FUN_020c44e4(u8 *arg0, u8 *arg1)
{
    FUN_02065774(arg1, arg0, 2);
    FUN_02065774(arg1 + 2, arg0 + 2, 14);
}
