// FUN_020a0c00 @ 0x020a0c00 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_020a0c00 @ 0x020a0c00 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve resource entry for nonnegative index when singleton exists.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a0c00.txt.
 */
extern void *FUN_0208f068(void),*FUN_0208efa8(void *,int,int,int); void *FUN_020a0c00(int *self,int index) { void *p=FUN_0208f068(); if(!p) return 0; if(index<0) return 0; return FUN_0208efa8(p,self[1],1,index); }
