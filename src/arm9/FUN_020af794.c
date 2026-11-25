// FUN_020af794 @ 0x020af794 (0x28, thumb) - ported from FUN_02051498 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020af794 @ 0x02051498 (recorded 0x28, THUMB) — allocate, construct, then
 * populate: the factory entry point that builds one object of 0x110 bytes.
 *
 *   02051498  38b5     push  {r3, r4, r5, lr}
 *   0205149a  051c     adds  r5, r0, #0        ; r5 = arg0 (the "template")
 *   0205149c  1120     movs  r0, #0x11
 *   0205149e  0001     lsls  r0, r0, #4       ; r0 = 0x110  (272 bytes)
 *   020514a0  5af042f8 bl    0x020ab528        ; arity 1 (size) -> block
 *   020514a4  041c     adds  r4, r0, #0
 *   020514a6  02d0     beq   0x20af7aa        ; null -> skip the ctor
 *   020514a8  00f00af8 bl    0x020514c0        ; arity 1 (self)
 *   020514ac  041c     adds  r4, r0, #0
 *   020af7aa  002c     cmp   r4, #0
 *   020514b0  04d0     beq   0x20af7b8        ; still null -> skip the init
 *   020514b2  201c     adds  r0, r4, #0
 *   020514b4  291c     adds  r1, r5, #0
 *   020514b6  0022     movs  r2, #0
 *   020514b8  fcf7ccfe bl    0x0204e254        ; arity 3
 *   020af7b8  201c     adds  r0, r4, #0
 *   020514be  38bd     pop   {r3, r4, r5, pc}
 *
 * THUMB (rule C1): stride 2, 0xb5/0xbd, 32-bit Thumb BLs. Size 0x28 is the exact
 * true body — no trailing NOP, no literal pool (all three callees are direct
 * `bl`s, so nothing is pooled), so the recorded span needs no rule-C2 correction.
 *
 * SEMANTICS FROM THE BYTES. A three-stage null-tolerant factory, each stage
 * guarded separately and all three exits converging on the shared tail
 * `adds r0,r4,#0; pop`:
 *   1. allocate 0x110 bytes — the size is built with the `movs #0x11 / lsls #4`
 *      shift idiom, i.e. the source constant is literally 0x110;
 *   2. construct in place if the allocation succeeded (the ctor's return value is
 *      RE-READ into r4 at 0x020514ac, so it is an initialiser that may return a
 *      different pointer, not a void ctor);
 *   3. copy/initialise from the argument only if r4 is still non-null.
 * The return value is the (possibly re-pointed) block, so the function returns
 * the object or 0 on allocation failure — a standard "null object" factory.
 *
 * The two-stage null check is load-bearing: the `beq` at 0x020514a6 skips the
 * ctor when the ALLOCATION failed, and the separate `cmp r4,#0 / beq` at
 * 0x20af7aa re-tests after the ctor because the ctor can return null. That is
 * why the second test is a fresh `cmp` and not a reuse of the first flags — do
 * NOT try to merge the two guards into one `&&`; that would drop a word.
 *
 * ARITY (rule C8, from the callees' OWN bodies):
 *  - 0x020ab528: `push {r3,r4,r5,lr}; adds r5,r0,#0; blx 0x0202ec00` — takes the
 *    size in r0 and returns a block. Arity 1. (Banked sibling FUN_020a3828 also
 *    spells it as a one-argument allocator, with `s32` return.)
 *  - 0x020514c0: `push {r4,lr}; adds r4,r0,#0; bl 0x0204e1b8` then stamps vtable
 *    and class fields into r4 — an in-place initialiser taking `self`. Arity 1.
 *  - 0x0204e254: `push {r4,r5,r6,lr}; adds r5,r0,#0; adds r4,r1,#0` — consumes
 *    r0 and r1 only (it reads r4[+0x58], r4[+0x1c], r4[+0x60] from the SECOND
 *    argument), and never touches r2. The `movs r2,#0` is therefore a real third
 *    argument that the callee happens to ignore; it must stay in the source or
 *    the register setup collapses.
 *
 * Game logic, not CRT (rule C9): this is an object factory in the same
 * neighbourhood as the banked entity code, and none of the three callees is a
 * mem/str/compare family member.
 */
typedef unsigned int u32;

extern void *FUN_020ba894(u32 size);
extern void *FUN_020af7bc(void *self);
extern void FUN_020473e8(void *self, void *src, u32 flags);

void *FUN_020af794(void *src)
{
    void *p = FUN_020ba894(0x110);

    if (p != 0) {
        p = FUN_020af7bc(p);
    }
    if (p != 0) {
        FUN_020473e8(p, src, 0);
    }
    return p;
}
