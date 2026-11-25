// FUN_02093b2c @ 0x02093b2c (0x22, thumb) - ported from FUN_020a3804 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1017 promotion): the inventory records this
 * span as 0x24, but the real body is 0x22 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x22.
 */
/*
 * FUN_02093b2c - gated two-level table lookup, returns u32 (Thumb).
 * Recorded size 0x24; true body 0x22 (trailing 2-byte inter-function pad
 * `movs r0,r0` at 0x020a3826; the next function starts at 0x020a3828).
 *
 * 020a3804  70b5       push {r4, r5, r6, lr}
 * 020a3806  051c       adds r5, r0, #0        ; r5 = self (live across the gate)
 * 020a3808  0c1c       adds r4, r1, #0        ; r4 = arg1 (live across the gate)
 * 020a380a  161c       adds r6, r2, #0        ; r6 = arg2 (live across the gate)
 * 020a380c  fff77af8   bl   0x020a2904        ; r0 = FUN_0208f068()  (base)
 * 020a3810  0021       movs r1, #0            ; res = 0
 * 020a3812  0028       cmp  r0, #0            ; base != NULL ?
 * 020a3814  05d0       beq  0x2093b4a        ; NULL -> res stays 0
 * 020a3816  6968       ldr  r1, [r5, #4]      ; arg1 = self->tab
 * 020a3818  221c       adds r2, r4, #0        ; arg2 = arg1 of this function
 * 020a381a  331c       adds r3, r6, #0        ; arg3 = arg2 of this function
 * 020a381c  fff712f8   bl   0x020a2844        ; r0 = r1 = base (still live!)
 * 020a3820  011c       adds r1, r0, #0        ; res = result
 * 02093b4a  081c       adds r0, r1, #0        ; return res
 * 020a3824  70bd       pop  {r4, r5, r6, pc}
 *
 * Reads from the bytes: the gate result is NOT consumed by the test -- it is
 * still in r0 at the second call, so it is the FIRST argument there. r1/r2/r3
 * are set to (self->tab, arg1, arg2). So the shape is
 *
 *     base = GLOBAL_BASE;  res = 0;  if (base) res = LOOKUP(base, self->tab, a, b);
 *
 * The gate itself is a two-instruction global dereference
 * (ldr r0,[pc,#4]; ldr r0,[r0]; bx lr) that ignores every argument, hence it is
 * declared void-parameter here; arg0 is live across it anyway so r0 still
 * holds `self` at the call site.
 *
 * FUN_0208efa8 (arity read from its OWN body, per C8): r0 = u32 *rows,
 * r1 = signed index range-checked into [0,0x11), r2 and r3 = two sub-indices;
 * it returns rows[idx][r2] + r3 -> row base + 8, or NULL. So it is a
 * (base, table, sub, sub) lookup and the wrapper flattens the pointer to u32.
 *
 * self/arg1/arg2 are all live across the gate call, hence exactly three
 * callee-saved registers and no stack traffic.
 */
typedef unsigned int u32;
typedef signed int s32;

typedef struct {
    u32 count;   /* +0, unused here */
    u32 *tab;    /* +4 */
} RecHdr;

extern u32 *FUN_0208f068(void);
extern u32 *FUN_0208efa8(u32 *base, u32 *tab, u32 a, u32 b);

u32 FUN_02093b2c(RecHdr *self, u32 a, u32 b)
{
    u32 *base = FUN_0208f068();
    u32 res = 0;

    if (base != 0) {
        res = (u32)FUN_0208efa8(base, self->tab, a, b);
    }
    return res;
}
