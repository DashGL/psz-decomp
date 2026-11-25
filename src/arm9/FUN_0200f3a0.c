// FUN_0200f3a0 @ 0x0200f3a0 (0x20, arm) - ported from FUN_02029a30 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200f3a0 @ 0x02029a30 (0x20, ARM) — live, census game.
 *
 * MODE: ARM — the prologue `10 40 2d e9` is `stmdb sp!,{r4,lr}`, a 4-byte ARM
 * encoding, and the size 0x20 is 8 ARM words. Marker line present below.
 *
 * Bytes (8 instructions = 0x20):
 *   02029a30: 10 40 2d e9   stmdb sp!, {r4, lr}
 *   02029a34: 91 1d 00 eb   bl    0x02031080
 *   02029a38: 00 40 a0 e1   mov   r4, r0          ; stash the result
 *   02029a3c: 01 00 a0 e3   mov   r0, #1
 *   02029a40: 04 1d 00 eb   bl    0x02030e58      ; called with the literal 1
 *   02029a44: 04 00 a0 e1   mov   r0, r4          ; restore the stashed result
 *   02029a48: 71 1d 00 eb   bl    0x02031014
 *   02029a4c: 10 80 bd e8   ldmia sp!, {r4, pc}
 *
 * Semantics: `x = FUN_02069e58(); FUN_02069c30(1); FUN_02069dec(x);` — get a
 * handle, do a one-shot operation on it, then release it. The stashed value
 * only crosses the middle call, so r4 is a plain spill.
 *
 * A NOTE ON A TOOLING HAZARD, because it nearly cost this target: Ghidra's
 * disassembly of the THIRD call renders it `bl 0x020316b0`, but decoding the
 * BL immediate by hand from the bytes gives
 *     02029a48: 71 1d 00 eb  ->  0x02031014
 * and the census `faithful_callees` field independently lists 0x02031014.
 * 0x020316b0 does not exist in the symbol table at all. The ARM BL offset is a
 * WORD count, so decoding it as a byte count lands in the wrong function —
 * which is exactly the trap here. Always cross-check a decoded BL target
 * against config/arm9/symbols.txt.
 *
 * CALLEE ARITY (trap 5): 0x02031080 takes no arguments (its body immediately
 * calls 0x0202ec00 and then reads a global). 0x02030e58 reads r0 as its only
 * argument (`mov r10,r0` at entry, then `tst r10,#1` / `tst r10,#2` on it) —
 * the literal 1 here is a FLAG argument, not a count. 0x02031014 likewise
 * takes the single r0.
 *
 * All three callees sit in the SDK/heap-manager cluster: 0x02030e58's body
 * reaches 0x0202d8d8 (a 0x1800-byte block clear), 0x0202facc and 0x02030c88
 * (an 8-deep free-list walk) behind 0x0202ec00/0x0202ec14 critical sections,
 * and the census marks its siblings `game_leaf` while the two section
 * primitives 0x0202ec00/0x0202ec14 are already banked. See REPORT.md for the
 * REJECT classification call.
 */
typedef unsigned int u32;

extern u32 FUN_02069e58(void);
extern u32 FUN_02069c30(u32 flags);
extern void FUN_02069dec(u32 handle);

void FUN_0200f3a0(void)
{
    u32 handle;

    handle = FUN_02069e58();
    FUN_02069c30(1);
    FUN_02069dec(handle);
}
