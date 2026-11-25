// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// Typed fields at actual ROM literal-pool bases retain base-relative member
// accesses and avoid address folding or field-pointer hoisting.
extern struct { char * field_0; } DAT_0211c85c;
// FUN_020c1b50 @ 0x020c1b50
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply stored indexed minimum to indexed context.
 * Evidence: scratch/coverage-root/batch3/020c1b50.txt.
 * Object identities remain provisional; return contracts follow register flow.
 */
extern void FUN_0200f240(void *,unsigned int);
void FUN_020c1b50(unsigned int index) {
    char *manager=DAT_0211c85c.field_0;
    FUN_0200f240((*(void ***)(manager+20))[index],(*(unsigned int **)(manager+28))[index]);
}
