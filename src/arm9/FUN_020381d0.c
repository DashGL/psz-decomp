// FUN_020381d0 @ 0x020381d0 (0x24, thumb) - ported from FUN_0208b368 [banked], verified via tools/match.py (word compare + verify_relocs).
/* FUN_020381d0 @ 0x0208b368 (true 0x24, recorded 0x24, THUMB) — live
 * game-logic four-stage entity setup driver: unhook, release, seed the
 * template record, then register the object.
 *
 * Bytes (Thumb, stride 2):
 *   0208b368: 38b5     push {r3, r4, r5, lr}
 *   0208b36a: 051c     adds  r5, r0, #0       ; r5 = arg0
 *   0208b36c: 0c1c     adds  r4, r1, #0       ; r4 = arg1
 *   0208b36e: fff7bdff bl   0x0208b2ec
 *   0208b372: 281c     adds  r0, r5, #0
 *   0208b374: fff7deff bl   0x0208b334
 *   0208b378: 281c     adds  r0, r5, #0
 *   0208b37a: 2430     adds  r0, #0x24        ; arg0 + 0x24
 *   0208b37c: 211c     adds  r1, r4, #0       ; arg1
 *   0208b37e: f4f73ffd bl   0x0207fe00
 *   0208b382: 281c     adds  r0, r5, #0
 *   0208b384: 0021     movs r1, #0
 *   0208b386: 00f001f8 bl   0x0208b38c
 *   0208b38a: 38bd     pop  {r3, r4, r5, pc}
 *
 * The FIRST call (0x0208b2ec) is made with r0 = arg0 and r1 still holding
 * arg1 — the copies into r5/r4 happen first, so the callee is reached with
 * both original argument registers. Its own body only ever reads r0
 * (`adds r5, r0, #0`, then `adds r0, r5, #0x8c`), so it has 1 live arg; the
 * second register is incidental, not evidence of a 2-arg call.
 *
 * Arity read off each callee's OWN body:
 *   FUN_02038154 1 arg  (r0 only)
 *   FUN_0203819c 1 arg  (`adds r5, r0, #0` then works off r5)
 *   FUN_020381f4 2 args (`adds r2, r0, #0; adds r5, r1, #0`, then r5 is walked)
 *   FUN_02038238 2 args (`adds r5, r0, #0; adds r7, r1, #0`)
 * Recorded 0x24 == true 0x24 (the next entry, 0x0208b38c, opens `f8b5`).
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern void FUN_02038154(u32 *);
extern void FUN_0203819c(u32 *);
extern void FUN_020381f4(u32 *, u32 *);
extern void FUN_02038238(u32 *, u32);

void FUN_020381d0(u32 *self, u32 *tmpl)
{
    FUN_02038154(self);
    FUN_0203819c(self);
    FUN_020381f4((u32 *) ((u8 *) self + 0x24), tmpl);
    FUN_02038238(self, 0);
}
