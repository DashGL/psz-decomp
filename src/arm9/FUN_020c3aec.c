// FUN_020c3aec @ 0x020c3aec (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_020c3aec @ 0x020c3aec (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Lazy singleton getter; rereads global after initializer.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern void FUN_020c3b04(void);
void *FUN_020c3aec(void) {
    if(!*(void **)0x0211ced4) FUN_020c3b04();
    return *(void **)0x0211ced4;
}
