// FUN_0208652c @ 0x0208652c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch11.json; original draft retained for referenced provenance.
// FUN_0208652c @ 0x0208652c (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Copy eight-byte global slot to nonnull destination.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/0208652c.txt.
 */
extern void FUN_0204e5f4(void *,void *); void FUN_0208652c(void *dest,int index) { char *p=*(char **)0x0211a52c; if(p && dest && index>=0 && index<4) FUN_0204e5f4(dest,p+608+8*index); }
