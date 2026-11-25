// FUN_02034ba8 @ 0x02034ba8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_02034ba8 @ 0x02034ba8 (inventory code 0x34, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Install global self, allocate and initialize two owned objects of sizes 4 and 2b4.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/02034ba8.txt.
 */
extern void *FUN_020ba894(unsigned int),*FUN_02037a10(void *),*FUN_02035028(void *);
void *FUN_02034ba8(void **self) {
    void *object;
    self[0]=0; self[1]=0; *(void ***)0x02108cf0=self;
    object=FUN_020ba894(4); if(object) object=FUN_02037a10(object); self[0]=object;
    object=FUN_020ba894(0x2b4); if(object) object=FUN_02035028(object); self[1]=object;
    return self;
}
