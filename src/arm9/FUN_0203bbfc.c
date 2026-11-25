// FUN_0203bbfc @ 0x0203bbfc (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203bbfc @ 0x0203bbfc (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/0203bbfc.txt.
 */
extern void FUN_0207f4fc(void *);
void FUN_0203bbfc(char *s) { *(unsigned short *)(s+0x14e)=*(unsigned short *)(s+0x5c); *(unsigned short *)(s+0x150)=*(unsigned short *)(s+0x5e); *(unsigned short *)(s+0x154)=0; FUN_0207f4fc(s+0x158); }
