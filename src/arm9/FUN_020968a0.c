// FUN_020968a0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020968a0 @ 0x020968a0 (inventory code 0x3e, thumb)
// check: 2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Resolve player slot and synchronize enabled mask.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020968a0.txt.
 */
extern int FUN_0209685c(void *,int);extern void FUN_02085488(int,int);void FUN_020968a0(char *self,int index,int enabled){int id=FUN_0209685c(self,index);if(id!=-1){if(enabled){FUN_02085488(id,0);*(unsigned short *)(self+38)|=1u<<index;}else{FUN_02085488(id,1);*(unsigned short *)(self+38)&=~(1u<<index);}}}
