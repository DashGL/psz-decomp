// FUN_0208efd4 @ 0x0208efd4 (0x36, thumb) - ported from FUN_020a2870 [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1020 promotion): the inventory records this
 * span as 0x38, but the real body is 0x36 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x36.
 */
/* FUN_0208efd4 @ 0x020a2870 (0x38 rec, THUMB) — wave 1020 w3, iter 4.
 * Byte-derived shape: q = *(u32*)(base+(i<<2)); return if 0 (opq call may
 * mutate, slot content re-read after each call); deref test is the C9
 * nested double test (target: cmp + beq + beq both skipping to L1);
 * free1 via thunk FUN_020ba8c4; zero the deref through an inline re-read
 * of the slot; re-read slot content, guard, free2 via thunk FUN_020ba8ac;
 * final slot=0 is INSIDE that guard (target beq skips it to the pop).
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern void FUN_020ba8c4(void *p);
extern void FUN_020ba8ac(void *p);

void FUN_0208efd4(u32 *base, int i) {
    if (i < 0)      return;
    if (i >= 0x11)  return;
    u32 *p = (u32 *)((u8 *)base + (i << 2));
    u32 q = *p;
    if (q == 0) return;
    u32 d = *(u32 *)q;
    if (d != 0) {
        if (d != 0) {
            FUN_020ba8c4((void *)d);
            *(u32 *)(*(u32 *)((u8 *)base + (i << 2))) = 0;
        }
    }
    u32 r = *p;
    if (r != 0) {
        FUN_020ba8ac((void *)r);
        *p = 0;
    }
}
