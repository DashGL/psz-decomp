// FUN_020343fc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020343fc @ 0x020343fc (inventory code 0x10, thumb)
// check: 2.0/sp2p3 target=0x14 candidate=0x14 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 4.
 * Forward optional global object to update/reset helper; callee incoming receiver only.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b4/020343fc.txt.
 */
extern char G_02108C74[];
extern void FUN_020343b4(void *);
void FUN_020343fc(void) { void *object=((void **)G_02108C74)[4]; if(object) FUN_020343b4(object); }
