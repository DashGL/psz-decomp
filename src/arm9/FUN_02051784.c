// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// FUN_02051784 @ 0x02051784
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 6.
 * Forward argument to optional global receiver at base+4.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b6/02051784.txt.
 */
extern void * data_0210e248[];
extern void FUN_0205179c(void *,void *);
void FUN_02051784(void *arg) { void *object=data_0210e248[1]; if(object) FUN_0205179c(object,arg); }
