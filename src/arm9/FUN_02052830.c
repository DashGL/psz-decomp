// FUN_02052830 @ 0x02052830 (0x20, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch32-manifest.json; original draft retained for referenced provenance.
// FUN_02052830 @ 0x02052830 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Install dispatch table, release handle +78 through manager, invalidate handle and return receiver.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02052830.txt.
 */
extern void *FUN_020be450(void);
extern void FUN_020bed1c(void *,unsigned int);
void *FUN_02052830(unsigned int *self) { self[0]=0x020f93e0; FUN_020bed1c(FUN_020be450(),self[30]); self[30]=~0u; return self; }
