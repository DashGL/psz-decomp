// FUN_0206af44 @ 0x0206af44 (0x1c, arm) - ported from FUN_0203216c [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0206af44 @ 0x0203216c (0x1c = 7 ARM words, ARM)
 *
 * Bytes: 10 40 2d e9 | 00 40 a0 e1 | ab ff ff eb | 04 00 a0 e1 |
 *        04 10 a0 e1 | 7f 00 00 eb | 10 80 bd e8
 *   stmdb sp!,{r4,lr} ; mov r4,r0 ; bl 0x02032028 ; mov r0,r4 ;
 *   mov r1,r4 ; bl 0x02032384 ; ldmia sp!,{r4,pc}
 *
 * ARM, verified from the encoding: 32-bit ARM prologue (e92d4010) and
 * epilogue (e8bd8010); 0x1c = 28 bytes = exactly 7 words, no literal pool.
 *
 * Semantics from the bytes: park the caller's pointer in r4, run 0x02032028
 * on it, then call 0x02032384 with the SAME pointer passed twice - once
 * reloaded from r4 into r0 and once copied into r1 (`mov r0,r4 / mov r1,r4`,
 * not `mov r1,r0`; the two forms are the same value but only one of them
 * compiles to these two words).
 *
 * Both callees work on a 4-element u16 array: 0x02032028 writes
 * `mov r1,#3 / strh r1,[r0,#6]` plus per-element stores at +0..+6, and
 * 0x02032384 reads/writes halfwords at [r0,#0..6] and [r1,#4..6]. So the
 * pointer is passed as one object and used as both arguments - it is NOT two
 * independent pointers, and the source must not spell it as two arguments
 * that merely happen to compare equal.
 *
 * Callee arity read off the callees' OWN bodies: 0x02032028 consumes r0 only
 * (one argument). 0x02032384 opens `ldr r2,[pool] / ldrh r2,[r2,#0x34]` and
 * uses BOTH r0 and r1 (`ldrh r3,[r1,#0] ... strh r3,[r0,#0]`), i.e. exactly
 * two arguments - an out-parameter and an in-parameter.
 *
 * r0 is left holding whatever 0x02032384 returned; the epilogue does not
 * touch it, so the function is modelled as void.
 */
typedef unsigned int u32;
typedef unsigned short u16;

extern void FUN_0206ae00(u16 *p);
extern void FUN_0206b15c(u16 *out, u16 *in);

void FUN_0206af44(u16 *p)
{
    FUN_0206ae00(p);
    FUN_0206b15c(p, p);
}
