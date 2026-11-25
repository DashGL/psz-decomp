// FUN_02037aa0 @ 0x02037aa0 (0x1e, thumb) - ported from FUN_020a5790 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* NOTE (wave 1015 promotion): the inventory records this
 * span as 0x20, but the real body is 0x1e -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x1e.
 */
/*
 * FUN_02037aa0 - u16-counted dispatch loop (Thumb). Recorded size 0x20;
 * true body 0x1e (2-byte inter-function pad `movs r0,r0` at 0x020a57ae).
 *
 * 020a5790  38b5       push {r3, r4, r5, lr}
 * 020a5792  051c       adds r5, r0, #0
 * 020a5794  0024       movs r4, #0
 * 020a5796  05e0       b     0x2037ab4     ; jump to the loop test
 * 02037aa8  2104       lsls  r1, r4, #0x10 ; i & 0xffff
 * 020a579a  281c       adds  r0, r5, #0
 * 020a579c  090c       lsrs  r1, r1, #0x10
 * 020a579e  00f0d5f8   bl    0x020a594c     ; fn(self, (u16)i)
 * 020a57a2  641c       adds  r4, r4, #1
 * 02037ab4  a88a       ldrh  r0, [r5, #0x14]
 * 020a57a6  8442       cmp   r4, r0
 * 020a57a8  f6db       blt   0x2037aa8
 * 020a57aa  0020       movs  r0, #0
 * 020a57ac  38bd       pop   {r3, r4, r5, pc}
 *
 * Reads from the bytes: int fn(void *self) { int i = 0;
 * while (i < (int)*(u16 *)((u8*)self + 0x14)) { FUN_02037c5c(self, (u16)i); i++; }
 * return 0; }
 *
 * The lsl/lsr pair is MWCC's truncation of the int counter to the callee's
 * u16 parameter, and `blt` (not `bls`) says the counter is a signed int.
 * The bound is re-read from the struct on EVERY test (no cached local).
 * There is NO entry guard - the prologue branches straight to the test -
 * so the loop is the plain `while` form: a `for` header makes MWCC emit an
 * extra `ldrh/cmp r0,#0/ble` pre-test that the target does not have.
 */
typedef unsigned char u8;
typedef unsigned short u16;

extern void FUN_02037c5c(void *self, u16 idx);

int FUN_02037aa0(void *self)
{
    int i = 0;

    while (i < (int)*(u16 *)((u8 *)self + 0x14)) {
        FUN_02037c5c(self, (u16)i);
        i++;
    }
    return 0;
}
