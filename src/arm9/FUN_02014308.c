// FUN_02014308 @ 0x02014308 (0x10, arm) - ported from FUN_02019b54 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02014308 @ 0x02019b54 (0x10, ARM) — linked-list splice leaf: copy the
 * successor out of the source node's +0x70 link, write it into the new node's
 * +0x30 link, then hang the new node off the source's +0x70 slot.
 *
 * Bytes: 70 20 90 e5 / 30 20 81 e5 / 70 10 80 e5 / 1e ff 2f e1
 *   ldr r2, [r0, #0x70] ; str r2, [r1, #0x30] ; str r1, [r0, #0x70] ; bx lr
 *
 * Semantics verified against the DISASSEMBLY, not the decompile. The decompile
 * agrees on both stores and on arity 2; it is right that r2 is a scratch copy
 * of the loaded word rather than a re-load, which is what the bytes show. The
 * order is load, store-to-new, store-to-old — the classic unlink/insert tail,
 * and the tail link of the new node must be written BEFORE the source's link is
 * repointed, so the two statements cannot be reordered.
 *
 * Both displacements (0x70, 0x30) are inside the ARM scaled-offset immediate
 * range, so plain pointer arithmetic is what the target emits — no materialised
 * base add is needed or wanted here.
 *
 * MATCHED 19/24 BUILDS: all 9 canonical dsi/* plus all nine 2.0/*. The five
 * missing are the whole 1.2/* family, which fails to COMPILE this source (see
 * the fault lines) rather than emitting different bytes - the known
 * compiler-family split, not a defect. No version override needed.
 */
typedef unsigned int u32;
typedef unsigned char u8;

void FUN_02014308(u32 *old_node, u32 *new_node)
{
    *(u32 *)((u8 *) new_node + 0x30) = *(u32 *)((u8 *) old_node + 0x70);
    *(u32 *)((u8 *) old_node + 0x70) = new_node;
}
