// FUN_020c3d34 @ 0x020c3d34 (0x22, thumb) - ported from FUN_020aaa80 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* NOTE (wave 1017 promotion): the inventory records this
 * span as 0x24, but the real body is 0x22 -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x22.
 */
/*
 * FUN_020c3d34 - record resolve-or-fail, returns s32 (Thumb).
 * Recorded size 0x24; true body 0x22 (trailing 2-byte inter-function pad
 * `movs r0,r0` at 0x20c3d52... actually at 0x020aaaa2; the next function's
 * prologue starts at 0x020aaaa4).
 *
 * 020aaa80  08b5       push {r3, lr}
 * 020aaa82  8cb0       sub  sp, #0x30         ; 0x30-byte out struct on stack
 * 020aaa84  0a1c       adds r2, r1, #0       ; arg1 = index
 * 020aaa86  00a9       add  r1, sp, #0       ; r1 = &out
 * 020aaa88  00f08af8   bl   0x020aaba0        ; FUN_020c3e54(arg0, &out, idx)
 * 020aaa8c  0028       cmp  r0, #0
 * 020aaa8e  04d0       beq  0x20c3d4e        ; failed -> return -1
 * 020aaa90  0298       ldr  r0, [sp, #8]      ; out.field_8
 * 020aaa92  0028       cmp  r0, #0
 * 020aaa94  03d1       bne  0x20c3d52        ; non-zero -> return it
 * 020aaa96  0198       ldr  r0, [sp, #4]      ; out.field_4
 * 020aaa98  01e0       b    0x20c3d52
 * 020c3d4e  0020       movs r0, #0
 * 020aaa9c  c043       mvns r0, r0           ; r0 = -1
 * 020c3d52  0cb0       add  sp, #0x30
 * 020aaaa0  08bd       pop  {r3, pc}
 *
 * Reads from the bytes: call FUN_020c3e54(arg0, &out, index) to LOOK UP a
 * record into a caller-provided 0x30-byte out struct (arity 3, read from the
 * callee's own body: it takes r0 = table/base pointer, r1 = destination
 * pointer, r2 = index; it range-checks index against [base->count] unsigned,
 * multiplies index by base->stride, memsets base+0x10 and memcpy's 0x30 bytes
 * out to r1, returning 1 on success / 0 on failure). On failure this returns
 * -1 (materialized as movs #0 + mvns, the repo's all-ones idiom).
 *
 * On success it returns out.field_8 when that is non-zero, otherwise
 * out.field_4 -- i.e. "the count if there is one, else the base offset",
 * with the non-zero test on the SECOND field. The two candidates are read
 * from the stack slots the callee filled, never through a pointer.
 *
 * Result register: the three arms must converge on ONE epilogue, with the -1
 * arm sitting immediately BEFORE it (the field_4 arm carries an
 * unconditional `b` over it). Measured dead ends:
 *   - `return -1;` first, then the field selects -> early returns, correct
 *     size but the epilogue is DUPLICATED into two blocks.
 *   - `s32 r = -1;` at declaration -> the initializer hoists above the call,
 *     so r is live across FUN_020c3e54 and gets a callee-saved slot
 *     (`push {r4,lr}`, `movs r4,#0`, `mov r0,r4` in the tail). Wrong.
 *   - `s32 r;` uninitialised, assigned in both arms -> keeps r in r0, but
 *     under the default optimization level the compiler lays the -1 block out
 *     AFTER the join and drops the `b`, so the body comes out 2 bytes long.
 * The size optimization level shares the tail door-into-shared-epilogue
 * exactly as the target does, so the marker below is load-bearing (repo lever
 * bank `o4p-early-return-teardown-copy`: the ",p duplicates early-return
 * epilogues / ,s shares the tail" axis).
 */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;

typedef struct {
    u32 field_0;
    u32 field_4;
    u32 field_8;
    u8 rest[0x24];
} LookupOut;

extern u32 FUN_020c3e54(void *base, LookupOut *out, u32 index);

s32 FUN_020c3d34(void *arg0, u32 index)
{
    LookupOut out;
    s32 r;

    if (FUN_020c3e54(arg0, &out, index) != 0) {
        if (out.field_8 != 0) {
            r = (s32)out.field_8;
        } else {
            r = (s32)out.field_4;
        }
    } else {
        r = -1;
    }
    return r;
}
