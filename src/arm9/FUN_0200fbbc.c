// FUN_0200fbbc @ 0x0200fbbc (0x30, arm) - ported from FUN_0202a24c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0200fbbc @ 0x0202a24c (0x30, ARM).  Three-stage range finaliser.
 * The RECORDED 0x30 is the true span: the body is twelve instructions
 * ending in the `pop {r3,r4,r5,pc}` at 0x0202a278, and 0x0202a27c is the
 * near-identical twin FUN_0202a2cc's entry (same prologue, only the three
 * callees differ).
 *
 * 0202a24c  e92d4038  push {r3,r4,r5,lr}
 * 0202a250  e1a04001  mov  r4,r1            ; arg1 (length)
 * 0202a254  e1a01002  mov  r1,r2            ; arg2
 * 0202a258  e1a05000  mov  r5,r0            ; arg0 (base)
 * 0202a25c  e1a02003  mov  r2,r3            ; arg3
 * 0202a260  eb000000  bl   0x0202a1cc       ; FUN_0200fb3c(base, arg2, arg3)
 * 0202a264  e1a00005  mov  r0,r5
 * 0202a268  e0815004  add  r1,r5,r4        ; base + length
 * 0202a26c  eb000000  bl   0x02030a18       ; FUN_02069810(base, end)
 * 0202a270  e1a00005  mov  r0,r5
 * 0202a274  eb000000  bl   0x02031618       ; FUN_0206a3f0(base)
 * 0202a278  e8bd8038  pop  {r3,r4,r5,pc}
 *
 * Reads: arg0 (base) and arg1 (length) are moved into callee-saved r5/r4
 * so the incoming argument registers can be re-ordered for the FIRST call
 * - that call takes (arg0, arg2, arg3) and SKIPS arg1.  Then the range is
 * closed with (base, base+length) and the block is handed to FUN_0206a3f0.
 * Arity read from each callee's own body (rule C8): FUN_0200fb3c uses
 * r0/r1/r2; FUN_02069810 takes two args plus two zero constants and
 * forwards four; FUN_0206a3f0 takes one.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_0200fb3c(void *base, void *a2, void *a3);
extern void FUN_02069810(void *base, void *end);
extern void FUN_0206a3f0(void *base);

void FUN_0200fbbc(void *base, u32 len, void *a2, void *a3)
{
    FUN_0200fb3c(base, a2, a3);
    FUN_02069810(base, (void *)(base + len));
    FUN_0206a3f0(base);
}
