// FUN_0201293c @ 0x0201293c (0x9c, arm) - ported from FUN_02017658 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/* FUN_0201293c @ 0x02017658, ARM, 0x9c. Resource-tag member loop (part of
 * the 'BEKB' resource-tag family, caller FUN_020175f4): fixup RMW
 * *(u32*)(obj+4) += (u32)obj, FUN_020128a8(obj) -> base, then for each
 * member i < obj[0] (u16, re-read per iteration): FUN_02012914(obj, i)
 * -> element, *(u32*)(element+4) += base. Then obj+0xc pointer fixups
 * (double store of obj+0xc around an element+4 RMW), the +0x14 fixup,
 * and FUN_020128c8(q).
 * Match mechanisms (2026-10-02, cells-rig finish after the rate-limit
 * fanout recovery): (1) for-loop with the increment IN THE HEADER
 * (for (i = 0; i < obj[0]; i = i + 1)) — the entry test folds to the
 * unsigned bls the target holds (if(count){do-while} emits beq; the
 * FUN_0201bfc0 popls lever at entry-fold granularity); (2) loop body
 * spells the load first: element = FUN_02012914(obj,i); *(...)+= base;
 * with the increment confined to the header = "rmw_load_first" in
 * scratch/cells_02017658.py; body-position increment recolors r1/r2.
 * All 9 dsi + all 10 CW2.0 builds (scratch/livepush_2026_10_02/
 * 17658_promote_all.log).
 */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;

extern u32 FUN_020128a8(u16 *obj);
extern u16 *FUN_02012914(u16 *obj, int index);
extern void FUN_020128c8(u16 *obj);

void FUN_0201293c(u16 *obj)
{
    u32 base;
    u32 p;
    u32 q;
    u16 *element;
    u16 i;

    *(u32 *)((u8 *)obj + 4) += (u32)obj;
    base = FUN_020128a8(obj);
    for (i = 0; i < obj[0]; i = i + 1) {
        element = FUN_02012914(obj, i);
        *(u32 *)((u8 *)element + 4) += base;
    }
    p = *(u32 *)((u8 *)obj + 0xc);
    if (p != 0) {
        p = p + (u32)obj;
        *(u32 *)((u8 *)obj + 0xc) = p;
        *(u32 *)((u8 *)p + 4) = *(u32 *)((u8 *)p + 4) + p;
        *(u32 *)((u8 *)obj + 0xc) = p;
    }
    q = *(u32 *)((u8 *)obj + 0x14);
    if (q == 0) {
        return;
    }
    q += (u32)obj;
    *(u32 *)((u8 *)obj + 0x14) = q;
    FUN_020128c8((u16 *)q);
}
