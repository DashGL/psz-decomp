// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets; argument/return contract corrected.
// Restored key input: notes/reference/one-call-low-20261113/FUN_0203fb00-proof.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x70, exact bytes and relocation targets.
// Match recovery 2026-11-12: express global addresses from ROM literal-pool
// bases as relocatable symbols, preserving original base+field addressing.
extern unsigned char DAT_020f8b4c[];
extern unsigned char DAT_020f8b58[];
extern unsigned char DAT_020f8b60[];
extern unsigned char DAT_020f9e6c[];
// FUN_0203fb00 @ 0x0203fb00 (inventory code 0x5e, thumb)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 115.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b115/0203fb00.txt.
 */
extern int FUN_0204002c(void *,int),FUN_020038ec(void *,unsigned int,const char *,...);extern char *FUN_0203ff48(void *);extern void *FUN_020ba894(unsigned int),*FUN_020bc2dc(void *,void *,void *);extern void FUN_020bc3c0(void *,void *,int),FUN_0203fb70(void *,void *);void FUN_0203fb00(char *s,int index){char path[64],*p;void *obj;if(FUN_0204002c(s,index))return;p=FUN_0203ff48(s);FUN_020038ec(path,64,(const char *)((unsigned int)DAT_020f8b4c + 0u),(void *)((unsigned int)DAT_020f8b58 + 0u),((void **)((unsigned int)DAT_020f9e6c + 0u))[index],(void *)((unsigned int)DAT_020f8b60 + 0u));obj=FUN_020ba894(132);if(obj)obj=FUN_020bc2dc(obj,p+4,*(void **)(s+20));*(void **)p=obj;FUN_020bc3c0(obj,path,0);*(int *)(p+12)=index;*(int *)(p+16)=1;FUN_0203fb70(s,p);}
