// FUN_0203b92c @ 0x0203b92c (0x2c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_0203b92c @ 0x0203b92c (inventory code 0x2c, thumb)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 21.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b21/0203b92c.txt.
 */
extern void FUN_0204b3ac(void *,int,int,int); extern void FUN_0204b4d4(void *);
void FUN_0203b92c(char *s) { if(*(void **)(s+0x1c4)) { FUN_0204b3ac(*(void **)(s+0x1c4),0,0,0); FUN_0204b4d4(*(void **)(s+0x1c4)); *(void **)(s+0x1c4)=0; } }
