// FUN_0201d764 @ 0x0201d764 (0x10, arm) - ported from FUN_02022ea0 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p -enum int -lang c99 -char signed -interworking -noThumb -proc arm946e -gccext,on -msgstyle gcc
/*
 * FUN_0201d764 @ 0x02022ea0, ARM (-noThumb), true size 0x10.
 * Offset-record resolver: off = *(u16 *)(p+0xc);
 * return p + *(int *)(p + off).
 * MODE DETECTION: word 0xe1d010bc is ARM (ldrh r1,[r0,#0xc] with
 * 0xe-prefixed cond+op fields) — funcs.mode_of can misclassify ARM
 * bodies whose low halfwords mimic Thumb literal-load shapes (b968
 * skill note); the shortlist table prints decimal sizes.
 * Load-width discipline (census-first rule): the offset field read is
 * ldrh — u8 spelling emits ldrb (ndiff=1 word at +0x00/+0x02), u32
 * spelling emits plain ldr. Ghidra's ushort read was correct.
 * Called by banked FUN_02070c9c.
 * MATCHED: v3 (u16), FULLY family-neutral — ALL 24 builds. Reloc-free.
 * Found via the fresh shortlist.
 */
typedef unsigned short u16;
typedef int s32;

s32 FUN_0201d764(s32 p) {
    u16 off;
    off = *(u16 *)(p + 0xc);
    return p + *(s32 *)(p + off);
}
