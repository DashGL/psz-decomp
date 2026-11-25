// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// FUN_02033e98 @ 0x02033e98 (inventory code 0x16, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Walk global linked list via +20, invoking helper before reading next link.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02033e98.txt.
 */
extern char * D_02108c74[];
extern void FUN_02033eb4(void *);
void FUN_02033e98(void) { char *node=D_02108c74[4]; while(node) { FUN_02033eb4(node); node=*(char **)(node+32); } }
