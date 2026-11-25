// FUN_0200f534 @ 0x0200f534 (0x84, arm) - ported from FUN_02029bc4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200f534 @ 0x02029bc4 (0x84, ARM) — five-way status dispatcher over
 * an object handle: resolve the object via FUN_0200eb88(p0) (0 -> status
 * 2); run the 5-arg FUN_0200f618(obj->hdr4(u16), p1, p2, p3, 0) and
 * early-return its nonzero value; then by p1 bit 0 either
 * FUN_0200f884(obj->f0, p2, p3) (0 -> status 6) or FUN_0200efe0(obj->f0);
 * on the fall-through paths store the last call's result through the
 * 5th parameter when non-null and return 0.
 *
 * Matched 2026-10-17 wave r2 (worker w1). Lever: the 5th-arg ZERO of
 * FUN_0200f618 — the `mov r0,#0; str r0,[sp]` pair right after the null
 * check is a STACK ARGUMENT STAGING STORE, not a dead local (a 4-arg
 * spelling of the call drops both words). Callee arity evidence: banked
 * sibling caller FUN_02029a94 (`FUN_0200f618(a, 0xff, b, 1, 0)`, and the
 * callee's own `sub sp,#8` + r1/r2/r3 parking). Everything else — frame,
 * movs r4,r0 flag-reuse null check, popne early return of the raw call
 * result, hoisted `ldr r0,[r4]` shared by both p1&1 arms, strne out-param
 * guard — fell out of the natural spelling at -O4,p on the first
 * 5-arg-correct draft.
 */
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
extern s32 FUN_0200eb88(s32);
extern s32 FUN_0200f618(s32, s32, s32, s32, s32);
extern s32 FUN_0200f884(s32, s32, s32);
extern s32 FUN_0200efe0(s32);

int FUN_0200f534(u32 p0, u32 p1, u32 p2, u32 p3, u32 *p4)
{
    u32 *obj = (u32 *)FUN_0200eb88(p0);
    s32 r;

    if (obj == 0)
        return 2;
    r = FUN_0200f618(*(u16 *)((char *)obj + 4), p1, p2, p3, 0);
    if (r != 0)
        return r;
    if (p1 & 1) {
        r = FUN_0200f884(*obj, p2, p3);
        if (r == 0)
            return 6;
    } else {
        r = FUN_0200efe0(*obj);
    }
    if (p4)
        *p4 = r;
    return 0;
}
