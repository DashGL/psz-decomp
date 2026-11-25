// FUN_020982e8 @ 0x020982e8 (0x38, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch09.json; original draft retained for referenced provenance.
// FUN_020982e8 @ 0x020982e8 (inventory code 0x38, thumb)
// check: 2.0/sp2p3 target=0x38 candidate=0x38 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Route valid player or entity identifiers to category action.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020982e8.txt.
 */
extern int FUN_02078188(int),FUN_02078198(int);extern void FUN_020b7c20(int),FUN_02098494(void *,void *,int);extern void *FUN_020b7c38(int);void FUN_020982e8(void *self,int id,int mode){if(FUN_02078188(id)){FUN_020b7c20(id);return;}if(FUN_02078198(id)){void *p=FUN_020b7c38(id);if(p)FUN_02098494(self,p,mode);}}
