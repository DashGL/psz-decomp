// FUN_02033c9c @ 0x02033c9c (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch18-manifest.json; original draft retained for referenced provenance.
// FUN_02033c9c @ 0x02033c9c (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Bounds-checked 16-byte record lookup; rejects null base and ffff index.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02033c9c.txt.
 */
void *FUN_02033c9c(char *self,unsigned int index) {
    char *base=*(char **)(self+12);
    if(base && index!=0xffff && index<*(unsigned short *)(self+20)) return base+16*index;
    return 0;
}
