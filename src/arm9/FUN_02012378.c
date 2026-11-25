// FUN_02012378 @ 0x02012378 (0x58, arm) - ported from FUN_02016eb8 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_02012378 - ring-buffer RELEASE (ARM, recorded size 0x58, body 0x54).
 * Twin of FUN_02016e5c on the free side: rewind ring[1] by the span,
 * align it down (~(align-1) & (tail - size)), underflow-guard vs ring[0]
 * (return 0), optional zero-fill of the released span (flag byte at
 * ring[-4], u8-cast test) via FUN_02065510, store, return the new tail.
 *
 * verified: FUN_02012378 @ 0x02016eb8 - mwcc-strict 1.1/dsi, arm946e,
 *           -O4,p -interworking -noThumb; byte match vs extracted/arm9.bin
 */
typedef unsigned char u8;
typedef unsigned int u32;

extern void FUN_02065510(u32 v, u32 dst, u32 n);

u32 FUN_02012378(u32 *ring, u32 size, u32 align)
{
    u32 *r4 = ring;
    u32 tail = r4[1];
    u32 a1 = align - 1;
    u32 rew = tail - size;                     /* sub r1, r3, r1 */
    u32 take = ~(a1) & rew;                    /* and r5, r2, r1 */
    if (take < r4[0]) {
        return 0;                              /* movlo/poplo */
    }
    u32 span = tail - take;                    /* sub r2, r3, r5 */
    u32 flagbyte = (u32)(u8)*(u32 *)((u8 *)r4 - 4);
    if (flagbyte & 1) {
        FUN_02065510(0, take, span);
    }
    r4[1] = take;                              /* str r5, [r4,#4] */
    return take;
}
