// FUN_020c2438 @ 0x020c2438 (0x42, thumb) - ported from FUN_020a8ab8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* FUN_020c2438 @ 0x020a8ab8 (0x42 true body, recorded 0x44 = body + 2-byte
 * inter-function pad `0000`, Thumb) — eight-slot allocator: scan the slot
 * table's 8 records for the first whose index field (slot[2], offset 8)
 * still holds the -1 sentinel; claim it (slot[2] = i, slot[1] = third,
 * slot[3] = FUN_020c22a4(table, slot[0], third, first, second) with the
 * 5th arg `second` on the stack, slot[4..6] = 1) and return i; when the
 * table is full return -1 (movs r0,#0; mvns r0,r0).
 *
 * Matched 2026-10-17 wave r2 (worker w1). Levers:
 * - -O4,s: reproduces the target's register homes exactly — raw r0 kept
 *   as the `table` home (per-iteration `ldr r5,[r0]` reload of *table, no
 *   prologue hoist), `first` parked in callee-saved r6, `second` in r1
 *   (stored to [sp] at the call), `third` in r2, sentinel -1 in callee-
 *   saved r7 via `subs r7,r4,#1`. Under -O4,p the compiler parks table
 *   in r6, second in r7, first in ip, HOISTS the *table load into the
 *   prologue (15 words differ).
 * - INVENTORY MERGE ARTIFACT: recorded size 0x44 spans the 2-byte
 *   inter-function pad; the true body ends at the second pop (0x42) —
 *   match at 0x42 (matching-style.md function-size rule).
 */
typedef unsigned int u32;
extern u32 FUN_020c22a4(u32 ***, u32, u32, u32, u32);

int FUN_020c2438(u32 ***table, u32 first, u32 second, u32 third)
{
    int index;
    for (index = 0; index < 8; index++) {
        u32 *slot = (*table)[index];
        if (slot[2] == (u32)-1) {
            slot[2] = index;
            slot[1] = third;
            slot[3] = FUN_020c22a4(table, slot[0], third, first, second);
            slot[4] = 1;
            slot[5] = 1;
            slot[6] = 1;
            return index;
        }
    }
    return -1;
}
