// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x18, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_0210e248[];
// FUN_02051450 @ 0x02051450 (inventory code 0x12, thumb)
// check: 2.0/sp2p3 target=0x18 candidate=0x18 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 5.
 * Forward caller argument to optional global receiver at base+4.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b5/02051450.txt.
 */
extern void FUN_02051468(void *,void *);
void FUN_02051450(void *arg) { void *object=((void **)((unsigned int)DAT_0210e248 + 0u))[1]; if(object) FUN_02051468(object,arg); }
