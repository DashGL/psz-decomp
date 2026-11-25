// FUN_0201d37c @ 0x0201d37c (0x40, arm) - ported from FUN_02022ab8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_0201d37c @ 0x02022ab8 (true 0x40, recorded 0x40, ARM) — live
 * game-side child-slot iterator. Walks the byte count at self+0x18 and calls
 * FUN_0201d120(self, index, arg) once per slot. The count is RE-READ from
 * memory on every iteration (ldrb at +0x2c) — the target keeps no cached
 * copy, so the loop bound must be the field expression itself, not a local.
 * CODEGEN: the count byte lands in r0, the argument in r5, the object in r6
 * and the index in r4; the zero guard is `cmp r0,#0` + `popls` (unsigned
 * <=), so the count is an unsigned byte and the loop is the plain
 * `for (i=0; i<n; i++)` form (MWCC peels the first test into the pop).
 */
typedef unsigned int u32;
typedef unsigned char u8;

extern void FUN_0201d120(u32 self, u32 index, u32 arg);

void FUN_0201d37c(u32 self, u32 arg)
{
    u32 i;

    for (i = 0; i < *(u8 *)(self + 0x18); i++) {
        FUN_0201d120(self, i, arg);
    }
}
