// FUN_0208efa8 @ 0x0208efa8 (0x2c, thumb) - ported from FUN_020a2844 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s -nointerworking
/* FUN_0208efa8 @ 0x020a2844 (0x2c, Thumb) — MATCHED dsi/1.1.
 * Game resource table-of-tables lookup, used by 02041444 and 020a3804.
 * Reject signed outer indices outside 0..16. Dereference tbl[idx] to obtain
 * the selected resource base; return zero if that resource base is null.
 * Read q[j] as a byte offset, add k*4, fetch the word at that address,
 * then return resource_base + fetched_offset + 8. The outer table entry
 * itself is dereferenced without a null guard; j/k are not range checked.
 * Both offsets and resulting address use wrapping 32-bit arithmetic.
 *
 * -O4,s -nointerworking recovers the leaf push {r4,lr}/pop {r4,pc} frame.
 * A shared failure label retains two signed bounds checks and the final
 * failure epilogue. Parenthesize q[j]+k*4 before adding the base, and add
 * 8 to the fetched offset before the final base addition: both evaluation
 * groupings reproduce the ROM's register/address chain. Full 44-byte extent,
 * no calls or literal pool; 21 compiler builds match. Fresh listing and
 * complete comparison: scratch/goal80j/a2844-all.log, 2026-10-20.
 * Numeric table meanings remain unproven. No emulator playtest.
 */
typedef unsigned int u32;
u32 FUN_0208efa8(u32 **tbl, int idx,int j,int k){
 u32 *q;if(idx<0 || idx>=17) goto fail;
 q=(u32 *)*tbl[idx];
 if(!q)return 0;
 return (u32)q + (*(u32 *)((u32)q+(q[j]+k*4))+8);
 fail:return 0;
}
