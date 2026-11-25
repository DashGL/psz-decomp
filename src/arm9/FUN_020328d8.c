// FUN_020328d8 @ 0x020328d8 (0x14, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch19-manifest.json; original draft retained for referenced provenance.
// FUN_020328d8 @ 0x020328d8 (inventory code 0x14, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 1.
 * Initialize base then clear halfword +14 and invalidate word +18; returns self.
 * Object identities are provisional. Evidence: scratch/coverage-low-game/020328d8.txt.
 */
extern void FUN_0207f3fc(void *);
void *FUN_020328d8(char *self) {
    FUN_0207f3fc(self); *(unsigned short *)(self+20)=0; *(unsigned int *)(self+24)=~0u; return self;
}
