// FUN_0203e4a0 @ 0x0203e4a0 (0x22, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch13-manifest.json; original draft retained for referenced provenance.
// FUN_0203e4a0 @ 0x0203e4a0 (inventory code 0x22, thumb)
// check: 2.0/sp2p3 target=0x22 candidate=0x22 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 14.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b14/0203e4a0.txt.
 */
extern void FUN_02037ff0(void *,void *); extern void FUN_0208de5c(void *,void *,void *,unsigned int);
void FUN_0203e4a0(char *s,void *arg) { FUN_02037ff0(s,arg); FUN_0208de5c(s+0x24c,*(void **)(s+0xfc),arg,*(unsigned short *)(s+0xc0)); }
