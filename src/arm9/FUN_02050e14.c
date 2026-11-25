// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x1c, exact bytes and relocation targets.
// FUN_02050e14 @ 0x02050e14
// check: 2.0/sp2p3 target=0x1c candidate=0x1c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 8.
 * Allocate/initialize 124-byte global object; return one even on allocation failure.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b8/02050e14.txt.
 */
extern void * data_0210e248[];
extern void *FUN_020ba894(unsigned int),*FUN_02050e5c(void *);
int FUN_02050e14(void) { void *object=FUN_020ba894(124); if(object) object=FUN_02050e5c(object); data_0210e248[1]=object; return 1; }
