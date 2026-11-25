// FUN_02074984 @ 0x02074984 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch04-manifest.json; original draft retained for referenced provenance.
// FUN_02074984 @ 0x02074984 (inventory code 0x20, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize key, set two bytes to six and packed quarter-value twelve, invalidate two words; return self.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02074984.txt.
 */
extern void FUN_02036094(void *), FUN_020360a4(void *,int,int,int);
void *FUN_02074984(unsigned int *self) {
    FUN_02036094(self); FUN_020360a4(self,6,6,12); self[1]=~0u; self[2]=~0u; return self;
}
