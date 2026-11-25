// FUN_overlay_23__02197f9c @ 0x02197f9c (0x12, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch19.json; original draft retained for referenced provenance.
// FUN_overlay_23__02197f9c @ 0x02197f9c (code and checked extent 0x12, thumb)
// check: vers=2.0/sp2p3 target=0x12 candidate=0x12 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 23, 2026-11-04: allocate 0x54 bytes, construct on success,
 * return pointer or null. Constructor saves receiver, calls receiver-only
 * resident base 02037760 before reading other argument registers, and returns
 * its saved receiver. Full constructor disassembly retained with evidence.
 */
extern void *FUN_020ba894(unsigned int);
extern void *FUN_overlay_23__02198190(void *);
void *FUN_overlay_23__02197f9c(void) {
    void *object=FUN_020ba894(0x54);
    if(object) return FUN_overlay_23__02198190(object);
    return object;
}
