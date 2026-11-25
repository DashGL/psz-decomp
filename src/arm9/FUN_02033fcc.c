// FUN_02033fcc @ 0x02033fcc (0x14, thumb) - ported from FUN_020a524c [draft], verified via tools/match.py (word compare + verify_relocs).
// flags: -O4,s
/* Draft: release the backing handle for a valid child-owner record.
 * Banked entity cleanup 0208b2ec/0208b334 pass manager and unsigned record ID.
 * Lookup consumes both inputs; 02033b68 receives the returned record;
 * its return is passed to 0201959c even when zero. Ghidra drops these inputs.
 * Resource ownership beyond this call chain is ???. SDK callees stay external.
 * Evidence: scratch/draft-coverage/batch8/020a524c-asm.txt and caller/callees.
 */
typedef unsigned int u32;
extern u32 FUN_02033c6c(u32,u32),FUN_02033b68(u32);
extern void FUN_0201959c(u32);
void FUN_02033fcc(u32 manager,u32 id)
{
    u32 record=FUN_02033c6c(manager,id);
    if (record) FUN_0201959c(FUN_02033b68(record));
}
