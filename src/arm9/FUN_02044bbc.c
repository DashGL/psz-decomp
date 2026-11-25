// FUN_02044bbc @ 0x02044bbc (0x18, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch01-manifest.json; original draft retained for referenced provenance.
// FUN_02044bbc @ 0x02044bbc (inventory code 0x18, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04.
 * Release stored handle through manager and mark it invalid; returns self.
 * Object/field identities remain provisional.
 * Evidence: extracted/arm9/arm9.bin at the named address; inventory code
 * extent above, literal pools resolved directly from PC-relative loads.
 */
extern void *FUN_020be450(void);
extern void FUN_020bed1c(void *, unsigned int);
void *FUN_02044bbc(unsigned int *self) {
    FUN_020bed1c(FUN_020be450(),*self);
    *self=~0u;
    return self;
}
