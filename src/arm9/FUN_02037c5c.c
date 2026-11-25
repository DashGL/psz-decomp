// FUN_02037c5c @ 0x02037c5c (0x2a, thumb) - ported from FUN_020a594c [banked], verified via tools/match.py (word compare + verify_relocs).
/* NOTE (wave 1018 promotion): the inventory records this
 * span as 0x2c, but the real body is 0x2a -- the
 * recorded span over-runs it (trailing inter-function pad /
 * neighbour prologue). Matched at the TRUE size 0x2a.
 */
/* FUN_02037c5c @ 0x020a594c (0x2c, Thumb).  Element release step.
 * CALLEE of banked FUN_020a5790, a u16-counted dispatch loop that calls
 * it as (self, (u16)i) and ignores the result; that file proves the
 * argument order and that the index arrives as a u16.
 *
 * 020a594c  b5 08       push {r3,lr}
 * 020a594e  8a82       ldrh r2,[r0,#0x14]  ; count
 * 020a5950  4291       cmp  r1,r2
 * 020a5952  d20e       bhs  0x2037c82     ; idx >= count -> return 0
 * 020a5954  68c2       ldr  r2,[r0,#0xc]   ; base
 * 020a5956  0108       lsl  r0,r1,#4       ; idx * 16
 * 020a5958  1810       add  r0,r2,r0
 * 020a595a  6841       ldr  r1,[r0,#4]
 * 020a595c  2900       cmp  r1,#0
 * 020a595e  d001       beq  0x2037c74
 * 020a5960  2101       movs r1,#1
 * 020a5962  e000       b    0x2037c76
 * 02037c74  2100       movs r1,#0
 * 02037c76  2901       cmp  r1,#1
 * 020a5968  d103       bne  0x2037c82
 * 020a596a  f8f73dfd   bl   0x020a29e4     ; FUN_02050bc4(entry)
 * 020a596e  2001       movs r0,#1
 * 020a5970  bd08       pop  {r3,pc}
 * 02037c82  2000       movs r0,#0
 * 020a5974  bd08       pop  {r3,pc}
 *
 * Reads: `if (idx >= self->count) return 0; entry = self->base + idx*16;
 * flag = entry->f4 ? 1 : 0; if (flag != 1) return 0; FUN_02050bc4(entry);
 * return 1;`  The `movs r1,#1 / b / movs r1,#0` pair is MWCC's lowering
 * of a SELECTED VALUE, not a branch condition - it must be spelled as an
 * explicit ternary temp that is then compared against 1 separately.
 * `bhs` on the range test says the compare is UNSIGNED.
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern void FUN_02050bc4(void *entry);

int FUN_02037c5c(void *self, u16 idx)
{
    void *entry;
    u32 flag;

    if ((u32)idx < (u32)*(u16 *)((u8 *)self + 0x14)) {
        entry = (u8 *)*(u32 *)((u8 *)self + 0xc) + (u32)(idx * 16);
        flag = (*(u32 *)((u8 *)entry + 4) != 0) ? 1 : 0;
        if (flag == 1) {
            FUN_02050bc4(entry);
            return 1;
        }
    }
    return 0;
}
