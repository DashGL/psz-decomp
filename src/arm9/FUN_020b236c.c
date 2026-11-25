// FUN_020b236c @ 0x020b236c (0x14, thumb) - ported from FUN_020a366c [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020b236c @ 0x020a366c (0x14, THUMB) — index-clamped element copy into
 * the table embedded at +0x58 of arg0. For a SIGNED index below 2 it copies
 * table[index] to the object in arg2, and does NOTHING when index >= 2.
 *
 * Bytes: 08 b5 02 29 05 da 58 30 c9 00 40 18 11 1c ff f7 5b ff 08 bd
 *   020a366c: 08b5     push  {r3, lr}
 *   020a366e: 0229     cmp   r1, #2
 *   020a3670: 05da     bge   020b237e          ; index >= 2 -> skip entirely
 *   020a3672: 5830     adds  r0, #0x58         ; table base = arg0 + 0x58
 *   020a3674: c900     lsls  r1, r1, #3        ; byte offset = index * 8
 *   020a3676: 4018     adds  r0, r0, r1        ; r0 = &table[index]
 *   020a3678: 111c     adds  r1, r2, #0        ; r1 = arg2
 *   020a367a: fff75bff bl    020b2234          ; the 8-byte copy
 *   020b237e: 08bd     pop   {r3, pc}
 *
 * MODE — THUMB, and the 4-aligned 0x14 recorded size does NOT imply ARM.
 * First halfword 0xb508 is Thumb `push {r3,lr}`; the ARM decode of the same
 * bytes is `stmdbhs r2,{r3,r8,sl,ip,sp,pc}`, which cannot be a prologue. The
 * `bl` at +0x0e is a Thumb-2 BLX at a 2-mod-4 site. NO marker line.
 *
 * SEMANTICS: the clamp is a signed `bge` against the literal 2, so arg1 is a
 * SIGNED index and the table holds 2 entries of 8 bytes each — a fixed-size
 * pair, not a count-driven array. The stride is `lsls r1,r1,#3`, three, and
 * the element size 8 is exactly the record FUN_020b2234 copies, so the block
 * at arg0+0x58 is an array of that same 8-byte record type.
 *
 * The element address is spelled as explicit BYTE arithmetic
 * (`(u8 *)self + 0x58 + index * 8`), not as `rec_t *` plus a subscript. That
 * is deliberate and measured: the subscript form materializes the index into
 * a separate register first and costs 2 extra bytes (0x16 body vs the target's
 * 0x14), because MWCC folds the constant into the INDEX instead of the
 * displacement. Byte arithmetic keeps `adds r0,#0x58 / lsls / adds r0,r0,r1`
 * in the target's three-instruction shape.
 *
 * Note there is NO null check on arg0 or arg2 — arg0 is dereferenced straight
 * through, so the caller guarantees both are valid.
 *
 * CALLEE ARITY read off FUN_020b2234's OWN body, not Ghidra's decompile: it
 * loads from arg1 and stores to arg0, i.e. (dst, src). Here r0 = source table
 * element and r1 = the object from arg2, so arg2 is the DESTINATION and this
 * copies table[index] INTO arg2. The two extern prototypes must agree.
 *
 * Body is the full recorded 0x14: 10 halfwords, ending on `pop {r3,pc}`.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef signed short s16;

extern void FUN_020b2234(void *dst, void *src);

void FUN_020b236c(void *self, int index, void *dst) {
    if (index < 2) {
        FUN_020b2234((u8 *)self + 0x58 + index * 8, dst);
    }
}
