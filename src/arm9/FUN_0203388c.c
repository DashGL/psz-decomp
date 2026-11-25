// FUN_0203388c @ 0x0203388c (0x1c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_0203388c @ 0x0203388c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Decrement wrapping reference byte only when payload exists; call cleanup at zero, always return zero.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/0203388c.txt.
 */
extern void FUN_020338a8(void *);
int FUN_0203388c(unsigned char *self) {
    if(*(void **)(self+8)) { self[22]--; if(!self[22]) FUN_020338a8(self); }
    return 0;
}
