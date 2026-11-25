// FUN_020ba948 @ 0x020ba948 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch08.json; original draft retained for referenced provenance.
// FUN_020ba948 @ 0x020ba948 (inventory code 0x36, thumb)
// check: 2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Construct aligned primary and optional auxiliary buffers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020ba948.txt.
 */
extern void *FUN_020ba8bc(int,int);void *FUN_020ba948(char *self,int size,int extra){*(unsigned int *)self=0x020fc8e4;*(int *)(self+8)=size;*(int *)(self+12)=0;*(int *)(self+16)=0;*(int *)(self+20)=0;*(int *)(self+24)=0;*(int *)(self+28)=extra;*(int *)(self+32)=0;*(void **)(self+4)=FUN_020ba8bc(size,32);if(extra>0)*(void **)(self+24)=FUN_020ba8bc(extra,32);return self;}
