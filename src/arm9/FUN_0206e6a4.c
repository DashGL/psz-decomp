// FUN_0206e6a4 @ 0x0206e6a4 (0x1c, thumb) - ported from FUN_02070908 [banked], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,p
/* FUN_0206e6a4 @ 0x02070908, Thumb, complete28-byte recursive cleanup.
 * Recursively process object+4 when nonnull, then reload that pointer.
 * If still nonnull, invoke its vtable slot+4 WITH that pointer in r0.
 * The old argumentless callback declaration let the compiler overwrite
 * r0 with the function address. That was a receiver-contract defect,
 * not merely an interchangeable dispatch-register choice.
 * Table/child domain names remain unknown. No gameplay claim.
 * Evidence: scratch/draft-coverage/batch146/.
 */
typedef unsigned int u32;
typedef void (*fn_t)(void *);

struct Desc {
    fn_t *tbl; /* +0 — table POINTER, not slot 0 */
};

struct Obj {
    u32 unk0;        /* +0 */
    struct Desc *f4; /* +4 — lazily-built descriptor */
};

void FUN_0206e6a4(struct Obj *p)
{
    if (p->f4 != 0) {
        FUN_0206e6a4((struct Obj *)p->f4);
        if (p->f4 != 0) {
            fn_t *t = p->f4->tbl;
            t[1](p->f4);
        }
    }
}
