// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fa294[];
extern unsigned char DAT_020fa2b0[];
extern unsigned char DAT_02108c84[];
// FUN_02078e9c @ 0x02078e9c (inventory code 0x42, thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Unregister object and release two resource identifiers.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02078e9c.txt.
 */
extern void FUN_02078d90(void *,int),FUN_02037d20(void *,unsigned int),FUN_02038e00(void *);void *FUN_02078e9c(char *self){int i;*(unsigned int *)self=((unsigned int)DAT_020fa294 + 0u);*(unsigned int *)(self+32)=((unsigned int)DAT_020fa2b0 + 0u);FUN_02078d90(self,(unsigned char)self[152]);for(i=0;i<2;i++){unsigned int id=*(unsigned short *)(self+252+2*i);if(id!=65535){void *p=*(void **)((unsigned int)DAT_02108c84 + 0u);if(p)FUN_02037d20(p,id);}}FUN_02038e00(self);return self;}
