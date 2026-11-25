// FUN_0200f008 @ 0x0200f008 (0x1c, arm) - ported from FUN_02029698 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -noThumb
/*
 * FUN_0200f008 — entity-table field setter (ARM, dsi/1.1).
 * Write side of FUN_02029670, same table: tbl = ctx->0x84 where
 * ctx = DAT_02102874 (global). tbl[idx].f14 = v; stride 0x10, offset 0x14.
 * No bounds check — caller supplies a valid idx. True size 0x1c incl. the
 * 4-byte pool literal.
 */
extern unsigned int DAT_02102874;

void FUN_0200f008(unsigned int idx, int value)
{
    unsigned int ctx = DAT_02102874;
    unsigned int tbl = *(unsigned int *)(ctx + 0x84);
    *(int *)(tbl + idx * 0x10 + 0x14) = value;
}
