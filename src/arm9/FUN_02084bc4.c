// FUN_02084bc4 @ 0x02084bc4 (0xc, thumb) - ported from FUN_0205d458 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_02084bc4 @ 0x0205d458 (recorded 0x0c, THUMB) — three-field "clear to -1"
 * setter on the object in r0.
 *
 * Bytes (00 21 / c9 43 / 41 60 / 81 60 / c1 60 / 70 47):
 *   0205d458: 00 21   movs r1, #0
 *   0205d45a: c9 43   mvns r1, r1        ; r1 = ~0 = 0xFFFFFFFF
 *   0205d45c: 41 60   str  r1, [r0, #4]
 *   0205d45e: 81 60   str  r1, [r0, #8]
 *   0205d460: c1 60   str  r1, [r0, #0xc]
 *   0205d462: 70 47   bx   lr
 *
 * Semantics from the bytes: materialise -1 once into r1 (MWCC's canonical
 * two-instruction constant idiom — note mvns, not mvn, which is the Thumb
 * spelling), then store that same value into three CONSECUTIVE 32-bit fields
 * at +4, +8, +0xc. Offset +0 is NOT touched, so the object has a header word
 * before the triple. Shape: a small helper that invalidates/clears three
 * counters or indices on an object — "set all three slots to -1".
 *
 * ARM/Thumb: THUMB. Not from the 4-aligned recorded size (0x0c is 4-aligned,
 * which the usual heuristic would read as ARM) — from the bytes. The function
 * is 6 instructions at a 2-byte stride and terminates in `bx lr` (0x4770), with
 * `movs`/`mvns` (0x2100/0x43c9) which have no ARM encoding. A 4-byte-stride
 * ARM read of the same bytes yields `bicmi`, `addvs`, `ldrbmi` garbage, which
 * is how this was correctly identified. No noThumb marker in this file; adding
 * one compiles ARM and inflates the body to 0x18.
 */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

void FUN_02084bc4(void *a) {
    *(u32 *)((u8 *)a + 0x4) = -1;
    *(u32 *)((u8 *)a + 0x8) = -1;
    *(u32 *)((u8 *)a + 0xc) = -1;
}
