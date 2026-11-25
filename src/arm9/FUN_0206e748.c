// FUN_0206e748 @ 0x0206e748 (0x16, thumb) - ported from FUN_0204516c [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_0206e748 @ 0x0204516c (0x16 true, 0x18 recorded, Thumb) — validity
 * check on an object pointer: return (p != 0 && (*(u32 *)(p + 4) & 1)) ? p : 0.
 *
 * Bytes:
 *   cmp r0,#0 ; beq fail
 *   ldr r1,[r0,#4] ; movs r2,#1 ; tst r1,r2 ; bne test
 *   movs r2,#0
 *   test: cmp r2,#0 ; bne ret
 *   fail: movs r0,#0
 *   ret:  bx lr ; (0000 pad)
 *
 * The boolean is MATERIALIZED into r2 as 0/1 and then RE-TESTED with a bare
 * `cmp r2,#0`; plain `&&` contracts that away. The select is laid out
 * true-value-first (`movs r2,#1` in the fallthrough, `bne` jumping OVER the
 * `movs r2,#0`), which is the select-on-zero layout the lever catalogue
 * records for a spelled-out boolean rather than a bare truthiness test.
 *
 * Crucially the `p == 0` door branches STRAIGHT to the return-0 tail and
 * never touches the flag register, so the flag must NOT be pre-initialised
 * at function scope — doing that makes the `p == 0` door fall through the
 * flag test instead (measured, first cell: an extra `movs r3,#0` prologue
 * and a 0x18 body).
 *
 * Ghidra renders this as `if (p == 0 || (p[1] & 1) == 0) p = 0; return p;`,
 * semantically identical but with no mechanism for the r2 select.
 *
 * TRUE SIZE is 0x16, not the recorded 0x18: `bx lr` at 0x206e75c is the last
 * real instruction and the span's final halfword at 0x02045182 is the 2-byte
 * 0000 inter-function pad class.
 */
typedef unsigned int u32;
typedef unsigned char u8;

int FUN_0206e748(u32 *p)
{
    int f;

    if (p != 0) {
        f = (*(u32 *)((u8 *)p + 4) & 1) ? 1 : 0;
        if (f != 0) {
            return (int)p;
        }
    }
    return 0;
}
