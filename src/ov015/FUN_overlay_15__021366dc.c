// FUN_overlay_15__021366dc @ 0x021366dc (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch50.json; original draft retained for referenced provenance.
// FUN_overlay_15__021366dc @ 0x021366dc (code 0x26, pool extent 0x2c, thumb)
// check: vers=2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 15 reconstruction from extracted module bytes, 2026-11-04.
 * Disable interrupt, free nonempty owned pointer, restore mask and clear slot.
 * Field identities remain provisional.
 */
extern unsigned int FUN_02065e30(unsigned int);
extern unsigned int FUN_02065e00(unsigned int);
extern void FUN_020121dc(void *,void *);
void FUN_overlay_15__021366dc(void **slot) {unsigned int mask=FUN_02065e30(1);if(*slot) {FUN_020121dc(*(void **)0x0213e904,*slot);FUN_02065e00(mask);*slot=0;}}
