// FUN_02066300 @ 0x02066300 (0x78, arm) - ported from FUN_0202c9e4 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_02066300 @ 0x0202c9e4 (0x78, ARM mode) — sorted doubly-linked-list
 * insert by the u32 sort key at node+0x70; head at list[0], tail at
 * list[1], prev at +0x7c, next at +0x80.
 *
 * Semantics re-derived from the target bytes. Load-bearing points the
 * decompile gets RIGHT here and the byte order pins:
 *  - The walk is a for-loop whose CONTINUATION test sits at +0x14/+0x18
 *    (`cmp ip,#0` / `beq`) and whose body test at +0x24/+0x28 (`cmp r3,r2`
 *    / `bls` back to +0x08). `bls` = UNSIGNED lower-or-same, so +0x70 is a
 *    u32 key, and the walk continues while key <= newkey.
 *  - The early return is `cmp ip,r1` / `bxeq lr` at +0x08/+0x0c — the node
 *    -identity test, NOT a key test. It runs on the SECOND and later
 *    iterations only: +0x00 loads list[0] and +0x04 `b +0x10` jumps STRAIT
 *    into the continuation test, so the head node is never identity-checked.
 *    The plain `for (i = list[0]; i != 0 && key(i) <= key(n); i = next(i))
 *    { if (i == n) return; }` shape reproduces this exactly.
 *  - BLOCK ORDER is the whole residual and it is load-bearing: the target
 *    emits `cmp ip,#0` / `bne +0x58`, i.e. it branches OVER the tail-append
 *    block, which sits INLINE at +0x34..+0x54. So the source must test
 *    `if (iVar2 == 0) { ...tail append...; return; }` FIRST and let the
 *    mid-splice fall out at the end. Writing it the decompile's order (the
 *    `if (iVar2 != 0)` mid-splice first) produces a byte-identical
 *    instruction SET but the two blocks swapped — recorded as cell 1,
 *    16/30 words differing on dsi/1.1 purely from that ordering.
 *  - Both splice arms share the identical 5-instruction head/prev fixup:
 *    `cmp r2,#0` / `streq r1,[r0]` / `strne r1,[r2,#0x80]` — a conditional
 *    store PAIR, so both arms must be spelled `if (prev == 0) *list = n;
 *    else *(u32*)(prev+0x80) = n;` in that if/else order.
 *  - The tail arm's `mov r2,#0` at +0x48 reuses the SAME register that held
 *    `param_1[1]`, i.e. `*(u32 *)(param_2+0x80) = 0;` written with a
 *    literal 0 — not a separate zero variable.
 *
 * MATCHED: ALL 24 tracked builds, byte-exact at 0x78, no reloc slots in the
 * body (all accesses are register-offset), relocs clean. No version marker;
 * dsi canonical. ARM mode is declared by the no-Thumb marker line below.
 *  * R29 (2026-10-07, readable benchmark under the R27 priority): readable
 * form promoted. The listing + Ghidra decompile arbitrated nothing new
 * (the twin's shape notes were already machine-true); the readable
 * keeps the twin's raw u32* memory model with role names (list, node,
 * cur, prev) -- typing Node into a struct is a MEASURED REJECT (4
 * spellings: the typed node lets the scheduler hoist the next=0
 * constant early, the register flow shifts; the raw casts + cur's
 * triple role [cursor, tail, zero] ARE the machine's register plan).
 * The s1 condition folds (cur != 0 -> cur, == 0 -> !cur) matched free.
 * Waivers: E1/E2 on the node accesses citing that grid.
 *
 * R30 (structure decode, family census): the node/queue roles are now
 * DECoded, not guessed. Queue record: +0x00 head, +0x04 tail. Node
 * fields used here: +0x70 = the u32 the queue sorts on (written by the
 * set-value-and-requeue API FUN_0202d100, initialized to 0x10 by ctor
 * FUN_0202cc84; ALSO a link slot in OTHER containers, e.g. the splice
 * leaf FUN_02019b54 -- per-container meanings), +0x78 = the node's
 * handle naming its queue record (WRITTEN-ONLY across the family --
 * adopt writes it, teardown clears it; taxon: stored value/handle,
 * not an intrusive link), +0x7c/+0x80 = prev/
 * next within THIS queue (pop-head FUN_0202ca5c agrees). Family: c9e4
 * insert / ca5c pop / cfdc adopt / d02c drain / d094 masked state
 * write (+0x64) / d100 value-set / cc84 ctor. The readable spells
 * these as NODE_* defines + a typed Queue (matches).
 *
 * R31 (2026-10-07, reader feedback round): the readable now spellS the
 * node slots through accessor macros (node_value/prev/next) that
 * expand to the raw u32-word expression -- source-level structure
 * with the raw-pointer codegen preserved (MATCH first-try). Two
 * verdicts banked:
 *  - the R29 'cur triple role' was a BASE-STATE artifact: splitting
 *    tail out of cur (u32 tail = queue->tail under the accessor
 *    spelling) MATCHES. The triple-role note was wrong under the
 *    accessor model. (Another standing note falsified on re-measure.)
 *  - the typed-Node reject stands (R29's 4 spellings); a Node struct
 *    would change what the scheduler may assume, unlike macros.
 * The +0x78 owner-handle decode stays here (family fact), not in the
 * readable body -- this function never touches it.
 */

typedef unsigned int u32;

void FUN_02066300(u32 *param_1, u32 param_2)
{
    u32 iVar2;
    u32 iVar1;
    for (iVar2 = *param_1; (iVar2 != 0 && *(u32 *)(iVar2 + 0x70) <= *(u32 *)(param_2 + 0x70));
         iVar2 = *(u32 *)(iVar2 + 0x80)) {
        if (iVar2 == param_2) {
            return;
        }
    }
    if (iVar2 == 0) {
        iVar2 = param_1[1];
        if (iVar2 == 0) {
            *param_1 = param_2;
        } else {
            *(u32 *)(iVar2 + 0x80) = param_2;
        }
        *(u32 *)(param_2 + 0x7c) = iVar2;
        *(u32 *)(param_2 + 0x80) = 0;
        param_1[1] = param_2;
        return;
    }
    iVar1 = *(u32 *)(iVar2 + 0x7c);
    if (iVar1 == 0) {
        *param_1 = param_2;
    } else {
        *(u32 *)(iVar1 + 0x80) = param_2;
    }
    *(u32 *)(param_2 + 0x7c) = iVar1;
    *(u32 *)(param_2 + 0x80) = iVar2;
    *(u32 *)(iVar2 + 0x7c) = param_2;
    return;
}
