// FUN_0203e6d8 @ 0x0203e6d8 (0x34, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e6d8 @ 0x0203e6d8 (inventory code 0x30, thumb)
// check: 2.0/sp2p3 target=0x34 candidate=0x34 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 24.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b24/0203e6d8.txt.
 */
extern void *FUN_020ba918(unsigned int); extern void *FUN_0203f214(void *,void *);
void *FUN_0203e6d8(void *arg) { void **slot=(void **)0x02108d08; if(!*slot) { void *p=FUN_020ba918(0x510); if(p) p=FUN_0203f214(p,arg); *slot=p; if(!p) return 0; } return *slot; }
