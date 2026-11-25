// FUN_020526c8 @ 0x020526c8 (0x32, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch31-manifest.json; original draft retained for referenced provenance.
// FUN_020526c8 @ 0x020526c8 (inventory code 0x32, thumb)
// check: 2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 25.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b25/020526c8.txt.
 */
extern void *FUN_020ba894(unsigned int); extern void *FUN_020526fc(void *,void *,void *,void *,void *,unsigned char,unsigned char);
void *FUN_020526c8(void *a,void *b,void *c,void *d,unsigned char e,unsigned char f) { void *p=FUN_020ba894(0x114); if(p) p=FUN_020526fc(p,a,b,c,d,e,f); return p; }
