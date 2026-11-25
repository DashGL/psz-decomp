// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// ROM pool-base externs retain address materialization and register scheduling.
extern unsigned char DAT_020fcb20[];
extern unsigned char DAT_0211c9b8[];
// FUN_020c324c @ 0x020c324c
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Validate resource/rendering state, lookup item, bind contexts then draw with scaled depth.
 * Evidence: scratch/coverage-root/batch19/020c324c.txt.
 */
extern void *FUN_020c1fc8(void),*FUN_02012914(void *,unsigned int);
extern int FUN_020c2608(void *,int);
extern unsigned char *FUN_020c2680(void *,int);
extern void FUN_020149ec(void *,void *,void *),FUN_020144f0(void),FUN_02014764(unsigned int,unsigned int,unsigned int),FUN_02014488(void *),FUN_02014714(void);
void FUN_020c324c(unsigned char *item,int index){unsigned char *resource;void *entry;if(!FUN_020c2608(FUN_020c1fc8(),index))return;if(!*(unsigned int *)((unsigned int)DAT_020fcb20 + 4u))return;resource=FUN_020c2680(FUN_020c1fc8(),index);if(!resource)return;entry=FUN_02012914(*(void **)(resource+20),*(unsigned short *)item);if(!entry)return;FUN_020149ec((void *)((unsigned int)DAT_0211c9b8 + 0u),resource+24,resource+60);FUN_020144f0();FUN_02014764(*(unsigned int *)(item+8),*(unsigned int *)(item+12),(unsigned int)*(unsigned short *)(item+4)<<12);FUN_02014488(entry);FUN_02014714();}
