// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x24, exact bytes and relocation targets.
// check: 2.0/sp2p3 target=0x24 candidate=0x24 words=0 exact_bytes=0 bad_relocs=0
// FUN_0203401c @ 0x0203401c (inventory code 0x1e, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 11.
 * Walk global list via +20 and update nodes whose words +7c/+78 differ.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b11/0203401c.txt.
 */
extern char * D_02108c74[];
extern void FUN_02034040(void *);
void FUN_0203401c(void) { char *node=D_02108c74[4]; while(node) { if(*(unsigned int *)(node+124)!=*(unsigned int *)(node+120)) FUN_02034040(node); node=*(char **)(node+32); } }
