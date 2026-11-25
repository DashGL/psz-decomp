// FUN_0206b968 @ 0x0206b968 (0x2c, arm) - ported from FUN_02032c00 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0206b968 @ 0x02032c00 (0x2c, ARM).  Spin-wait leaf.
 *
 * 02032c00  e92d4070  push {r4,r5,r6,lr}
 * 02032c04  e1a06000  mov  r6,r0          ; self
 * 02032c08  e3a05008  mov  r5,#8          ; arg0 (loop-invariant, hoisted)
 * 02032c0c  e3a04000  mov  r4,#0          ; arg2 (loop-invariant, hoisted)
 * 0206b978  e1a00005  mov  r0,r5
 * 02032c14  e1a01006  mov  r1,r6
 * 02032c18  e1a02004  mov  r2,r4
 * 02032c1c  eb000000  bl   0x0202facc     ; FUN_020688c0(8, self, 0)
 * 02032c20  e3500000  cmp  r0,#0
 * 02032c24  1afffff9  bne  0x206b978     ; back edge to the CALL
 * 02032c28  e8bd8070  pop  {r4,r5,r6,pc}
 *
 * Reads: `while (FUN_020688c0(8, self, 0)) { }` - the loop has NO entry
 * test, the back edge targets the call itself, so it is the empty-body
 * rotation of a test-at-head while (do/while or `while(c);`).
 * FUN_020688c0 packs bits into a hardware register and returns 0 / -1,
 * so this is a poll-for-clear.  The two constant arguments live in
 * callee-saved r5/r4 rather than being rematerialised each pass.
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern int FUN_020688c0(u32 a0, void *a1, u32 a2);

void FUN_0206b968(void *self)
{
    while (FUN_020688c0(8, self, 0)) {
    }
}
