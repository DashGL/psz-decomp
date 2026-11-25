// FUN_0200f240 @ 0x0200f240 (0xd4, arm) - ported from FUN_020298d0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200f240 @ 0x020298d0 (0xd4, ARM) — drain-until-index node dispatch pass.
 * Sibling of FUN_0200f0d0: walks the node bucket attached at self+4 and calls
 * every node's installed function-pointer handler, re-fetching from the top
 * until the container's u16 count at self+0xc reaches idx. idx==0 delegates
 * wholesale to FUN_0200f0d0. After draining: FUN_02012504(*self, idx);
 * if any handler ran (done), FUN_0200f3a0(); then
 * FUN_020124b4(*self, count) and FUN_0200f364(self).
 *
 * MATCH SHAPE (register/zero-home plan read off the listing):
 *   - the walk variable n IS the zero home: `mov r8,#0` is the first instr
 *     after push; n re-homes into r8 (movs r8,r0) inside the fetch loop and
 *     its exit value is 0 again, so the outer loop head copies it (mov r5,r8)
 *     as the bucket-fetch seed. done's init is the copy `mov r7,r8`; done=1
 *     is the copy `mov r7,r4` off a materialized 1.
 *   - the bucket-fetch seed pair: handle = FUN_02011b38(self+1, 0) seeds with
 *     a literal 0 rematerialized through r5; the walk fetch
 *     n = FUN_02011b38(handle, n) seeds with n (r8) — for-init and increment
 *     are the SAME call spelling.
 *   - idx keeps its entry flag-setting move (movs sb,r1) — the idx==0 guard
 *     branches straight off those flags.
 *   - handler = 4-register indirect call (ldr ip,[n,#0xc]; blx ip) with args
 *     n+0x20, n[2], n[4], n[5]; count re-read from self+0xc every outer pass.
 *
 * MATCH LEVER (wave-r2): decl order handle/done/n + init order n-then-done +
 * seed mix (first fetch literal 0, walk fetch seeded with n). The parked
 * w1021 spelling (literal 0 in BOTH fetches) forced done to double as the
 * zero home and spilled a second zero to fp (10-reg push, ndiff=14).
 * Matches under dsi/1.1 AND 2.0/base (parked header's "wrong family" was a
 * property of the old spelling, not the function).
 */
typedef unsigned int u32;
typedef unsigned short u16;

typedef void (*NodeFn)(u32, u32, u32, u32);

extern u32 FUN_02011b38(u32 *unit, u32 seed);
extern void FUN_02011ac0(u32 *unit, u32 handle);
extern void FUN_02012504(u32 sheet, u32 n);
extern void FUN_020124b4(u32 sheet, u16 count);
extern void FUN_0200f0d0(u32 self);
extern void FUN_0200f364(u32 *self);
extern void FUN_0200f3a0(void);

void FUN_0200f240(u32 *self, int idx)
{
    u32 handle;
    u32 done;
    u32 n;

    n = 0;
    done = 0;
    if (idx == 0) {
        FUN_0200f0d0(self);
        return;
    }
    while (idx < *(u16 *)(self + 3)) {
        handle = FUN_02011b38(self + 1, 0);
        for (n = FUN_02011b38(handle, n); n != 0; n = FUN_02011b38(handle, n)) {
            if (*(u32 *)(n + 0xc) != 0) {
                ((NodeFn)*(u32 *)(n + 0xc))(n + 0x20, *(u32 *)(n + 8), *(u32 *)(n + 0x10), *(u32 *)(n + 0x14));
                done = 1;
            }
        }
        FUN_02011ac0(self + 1, handle);
    }
    FUN_02012504(*self, idx);
    if (done != 0) {
        FUN_0200f3a0();
    }
    FUN_020124b4(*self, *(u16 *)(self + 3));
    FUN_0200f364(self);
}
