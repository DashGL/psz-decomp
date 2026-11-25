// FUN_020384c4 @ 0x020384c4 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch15-manifest.json; original draft retained for referenced provenance.
// FUN_020384c4 @ 0x020384c4 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Query optional global receiver using object byte +98 and fixed selector 17.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/020384c4.txt.
 */
extern unsigned int FUN_0203efb4(void *,unsigned int,unsigned int);
unsigned int FUN_020384c4(unsigned char *self) { void *manager=*(void **)0x02108d08; if(manager) return FUN_0203efb4(manager,self[0x98],17); return 0; }
