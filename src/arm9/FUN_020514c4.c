// FUN_020514c4 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// FUN_020514c4 @ 0x020514c4 (inventory code 0x12, thumb)
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Forward caller argument to optional global receiver at base+4.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/020514c4.txt.
 */
extern void * D_0210e248[];
extern void FUN_020514dc(void *,void *);
void FUN_020514c4(void *arg) { void *object=D_0210e248[1]; if(object) FUN_020514dc(object,arg); }
