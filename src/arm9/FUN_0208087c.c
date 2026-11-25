// FUN_0208087c @ 0x0208087c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_0208087c @ 0x0208087c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve signed slot then forward slot, value and option into record helper.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208087c.txt.
 */
extern void *FUN_02080898(int); extern void FUN_020808c4(void *,int,unsigned int,unsigned int);
void FUN_0208087c(int slot,unsigned int value,unsigned int option) { void *record=FUN_02080898(slot); if(record) FUN_020808c4(record,slot,value,option); }
