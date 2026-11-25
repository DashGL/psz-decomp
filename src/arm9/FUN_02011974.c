// FUN_02011974 @ 0x02011974 (0x18, arm) - ported from FUN_020164b4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02011974 @ 0x020164b4 (0x18, ARM) — live leaf initializer: zero two
 * u32 fields at +0x00/+0x04, zero the u16 field at +0x08, and store the
 * caller's second argument (truncated to u16) into the u16 field at +0x0a.
 * Returns void; `bx lr` with no epilogue move.
 *
 * Semantics re-derived from the TARGET BYTES, not the Ghidra decompile. The
 * field offsets were read off the ARM store DISPLACEMENTS and divided by the
 * element size myself (BRIEF 5.5), and the element-size trap was CHECKED and
 * found not to apply here: the target uses r0 directly as the base for all
 * four accesses (`str r2,[r0]` / `str r2,[r0,#4]` / `strh r2,[r0,#8]` /
 * `strh r1,[r0,#0xa]`), so there is no hoisted scaled base to shift an
 * apparent offset — 8 really is byte 8, not field 8. Both halfword fields get
 * their own `*(u16 *)` cast at their own byte offset, which is what makes the
 * shared `mov r2,#0` zero-materialization cover the +0x08 halfword.
 *
 * TRUE SIZE is 0x18 as recorded: the function is a frameless leaf ending on
 * `bx lr` at +0x14 (not `pop {..,pc}`), and there is no literal pool, so
 * there is no shorter span to test (BRIEF 5.6's 2-byte-pad case does not
 * apply).
 *
 * MATCHED: all 24 builds (9 dsi/* + 5 1.2/* + 10 2.0/*), byte-exact at 0x18,
 * no relocations in the function at all. No version override needed;
 * dsi canonical. The `-noThumb` mode marker is what selects ARM codegen here
 * (never pass it as an extra CLI flag).
 *
 * Caller-side extern spelling already banked at src/arm9/FUN_020299b0.c is
 * `extern void FUN_02011974(void *, int);` — consistent with this definition
 * (void return, two args).
 */
typedef unsigned int u32;
typedef unsigned char u8;
typedef unsigned short u16;

void FUN_02011974(u32 *obj, u16 param_2)
{
    obj[0] = 0;
    obj[1] = 0;
    *(u16 *)(obj + 2) = 0;
    *(u16 *)((u8 *)obj + 10) = param_2;
}
