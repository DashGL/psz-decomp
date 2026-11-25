// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x20, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_02108e00[];
// FUN_02045970 @ 0x02045970 (inventory code 0x1c, thumb)
// check: 2.0/sp2p3 target=0x20 candidate=0x20 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 10.
 * Validate identifier and copy four-byte descriptor to corresponding global record.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b10/02045970.txt.
 */
extern int FUN_02078188(unsigned int);
extern void FUN_02045990(void *,const void *);
void FUN_02045970(unsigned int id,const void *value) { if(FUN_02078188(id)) FUN_02045990((char *)((unsigned int)DAT_02108e00 + 0u)+4*id,value); }
