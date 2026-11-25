// FUN_02055c24 @ 0x02055c24 (0x1c, arm) - ported from FUN_02007308 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02055c24 @ 0x02007308 (0x1c = 7 ARM words, ARM)
 *
 * Bytes: 10 40 2d e9 | 00 40 a0 e1 | 58 95 00 eb | 04 00 a0 e1 |
 *        01 10 a0 e3 | 1e 00 00 eb | 10 80 bd e8
 *   stmdb sp!,{r4,lr} ; mov r4,r0 ; bl 0x0202c878 ; mov r0,r4 ;
 *   mov r1,#1 ; bl 0x0200739c ; ldmia sp!,{r4,pc}
 *
 * ARM, verified from the encoding: the prologue is the 32-bit ARM
 * `stmdb sp!,{r4,lr}` = e92d4010 and the epilogue `ldmia sp!,{r4,pc}` =
 * e8bd8010. 0x1c = 28 bytes = exactly 7 words with no literal pool, so the
 * span is exact.
 *
 * Semantics from the bytes: the caller's pointer is parked in r4, handed
 * (still live in r0) to 0x0202c878, then re-loaded into r0 and passed as the
 * FIRST argument of 0x0200739c together with the constant 1.
 *
 * Callee arity read off the callees' OWN bodies:
 *  - 0x0202c878 is a 3-word dispatch thunk: `ldr ip,=A / ldr r1,=B /
 *    ldr r2,=C / bx ip`. It consumes r0 (never overwritten before the bx),
 *    so the call is a one-argument call and r0 must be the caller's pointer.
 *    The literal values B and C belong to that thunk's own pool; nothing here
 *    supplies them.
 *  - 0x0200739c parks r0 and r1 into r7 and r6 immediately (`mov r7,r0 /
 *    mov r6,r1`), i.e. exactly two arguments, matching (ptr, 1).
 *
 * r0 is left holding whatever 0x0200739c returned; the epilogue does not touch
 * it, so the function is modelled as void and the residual r0 is not spelled.
 */
typedef unsigned int u32;

extern void FUN_02066170(u32 p);
extern void FUN_0205597c(u32 p, u32 which);

void FUN_02055c24(u32 *p)
{
    FUN_02066170((u32)p);
    FUN_0205597c((u32)p, 1);
}
