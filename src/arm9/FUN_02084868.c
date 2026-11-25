// FUN_02084868 @ 0x02084868 (0x26, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch13.json; original draft retained for referenced provenance.
// FUN_02084868 @ 0x02084868 (inventory code 0x26, thumb)
// check: 2.0/sp2p3 target=0x26 candidate=0x26 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release previous resource, load path with alignment and resolve data.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02084868.txt.
 */
extern void FUN_020848b4(void *); extern void *FUN_020ba374(char *,unsigned int *,int),*FUN_020ba440(void *); void FUN_02084868(void **self,char *path) { unsigned int value; FUN_020848b4(self); value=0; self[0]=FUN_020ba374(path,&value,-16); if(self[0]) self[1]=FUN_020ba440(self[0]); }
