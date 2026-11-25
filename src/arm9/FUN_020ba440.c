// flags: -O2,s
// FUN_020ba440 @ 0x020ba440 (inventory code 0x4c, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=10 exact_bytes=11 bad_relocs=0
// near: ndiff=10/21 size=0x54 vers=2.0/sp2p3 next="inspect register coloring, boolean materialization and instruction scheduling; semantics reconstructed"
/* USA ROM reconstruction, 2026-11-04.
 * Validate packed resource signatures and relocate offset entries in place.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba440.txt.
 */
void *FUN_020ba440(char *file){char *data,*relocs;int count,i;if(!file)return 0;if(*(unsigned int *)file!=0x46495344)return 0;data=file+*(int *)(file+12);relocs=file+*(int *)(file+20);if(*(unsigned int *)relocs!=0x30464f4e)return 0;count=*(int *)(relocs+8);relocs+=16;for(i=0;i<count;i++){unsigned int off=*(unsigned int *)relocs&~3u;relocs+=4;*(unsigned int *)(data+off)+=(unsigned int)data;}return data+*(int *)(data+8);}
