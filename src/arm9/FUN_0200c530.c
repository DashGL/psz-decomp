// FUN_0200c530 @ 0x0200c530 (0x34, arm) - ported from FUN_0203dc88 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/** FUN_0200c530 @ 0x0203dc88 — destructor/dispatch shim (ARM). Recorded size 0x34
* IS the true size: the `pop {r3,r4,r5,pc}` at 0x0203dcb8 (+0x30) is this
* function's own epilogue; the neighbour FUN_0203dcbc (a bare `bx lr` marker)
* starts at 0x0203dcbc. Recorded-vs-true: identical. (I first drafted at 0x30
* and the resulting `sub`/`blx` fell one word past the end — that is what
* proved the trailing `pop` is ours.)
*
 *   0203dc88 e92d4038  stmdb sp!, {r3, r4, r5, lr}
 *   0203dc8c e1b05000  movs  r5, r0            ; r5 = a0 (flag-setting!)
 *   0203dc90 e1a04002  mov   r4, r2            ; r4 = a2
 *   0203dc94 e1a0c001  mov   ip, r1            ; ip = a1
 *   0203dc98 08bd8038  popeq {r3, r4, r5, pc}  ; if (Z) return  <-- a0 == 0
 *   0203dc9c e3530000  cmp   r3, #0
 *   0203dca0 0a000002  beq   0x200c558
 *   0203dca4 e5150410  ldr   r1, [r5, #-4]     ; r1 = *(a0 - 4)
 *   0203dca8 e1a0200c  mov   r2, ip            ; r2 = a1
 *   0203dcac ebffffba  bl    0x0203db9c
 *   0200c558 e0450004  sub   r0, r5, r4        ; r0 = a0 - a2
 *   0203dcb4 fa01b631  blx   0x020ab580        ; ARM->Thumb interworking call
 *   0203dcb8 e8bd8038  ldmia sp!, {r3, r4, r5, pc}  <- last word of the 0x34 span
 *
 * MODE — ARM, proven by the bytes and not by the 4-aligned size (rule C1): 4-byte stride, ARM-only
 * `stmdb sp!`/`ldmia sp!`, and `fa01b631` is an ARM BLX-immediate (a Thumb
 * decode of it yields nothing coherent). Capstone in Thumb mode on these bytes
 * returns NOTHING. The marker line carries the mode.
 *
 * THE FIRST EXIT IS NOT A NORMAL GUARD — READ IT CAREFULLY.
 * `movs r5, r0` (e1b0 = MOV with S) SETS THE FLAGS from a0, and the very next
 * instruction is `popEQ {r3,r4,r5,pc}` — a CONDITIONAL epilogue keyed on those
 * flags. That is `if (a0 == 0) return;`, with the copy-to-r5 doubling as the
 * test. It is not a second `cmp`, and it is not a caller's flags leaking in.
 * This is the arm-mode instance of the "flag-setting copy doubles as the test"
 * pattern; the `beq` after it tests a DIFFERENT value (r3, which nothing has
 * written since the prologue — r3 is a preserved callee-slot here, i.e. the
 * incoming 4th register, and the branch is over the a1 path).
 *
 * Two exits total (the conditional `popeq`, the tail `ldmia`), and each has its
 * own epilogue, so this is the FLAT guard shape (rule F3) — a guard-clause
 * early return plus the fall-through tail, not nested guards funnelling to a
 * single shared pop.
 *
 * Callees read from their OWN bodies (rule C8):
 *  - 0x0203db9c: ARM, 0x90 bytes, takes r0/r1 (it re-derives r2 from r0).
 *  - 0x020ab580: banked `src/arm9/FUN_020ba8b4.c`, a THUMB thunk
 *    `void FUN_020ba8b4(void *a0) { FUN_020ab4e0(a0); }` — an interworking
 *    import thunk that leaves the module. One argument. The ARM caller reaches
 *    it with `blx` immediate; the C spelling is a plain extern call and the
 *    linker re-encodes (never respell-grind BLX).
 *
 * CLASSIFICATION — game logic (census game). This is the destructor/dispatch
 * shim of the node family at 0x0203db9c: it clears a flag, optionally calls
 * the node free/release with the header word at a0-4 and a1, then subtracts a2
 * and hands the result to the module's free(). Its siblings
 * FUN_0203dcc0 / FUN_0203dcd4 / FUN_0203dcf0 are the same shape (banked), so
 * this is game bookkeeping and not CRT — a CRT destructor family would not
 * carry a caller-supplied `a2` subtraction into the free thunk.
 */
typedef unsigned int u32;

extern void FUN_0200c444(u32 a, u32 b, u32 c);
extern u32 FUN_020ba8b4(u32 a);

u32 FUN_0200c530(u32 a0, u32 a1, u32 a2, u32 a3) {
    if (a0 == 0) {
        return a0;
    }
    if (a3 != 0) {
        FUN_0200c444(a0, *(u32 *)(a0 - 4), a1);
    }
    return FUN_020ba8b4(a0 - a2);
}
