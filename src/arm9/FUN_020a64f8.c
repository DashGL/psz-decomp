// FUN_020a64f8 @ 0x020a64f8 (0xd0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch23.json; original draft retained for referenced provenance.
// FUN_020a64f8 @ 0x020a64f8 (inventory code 0xc4, thumb)
// check: 2.0/sp2p3 target=0xd0 candidate=0xd0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release controller resources and save selector preferences including allocation.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a64f8.txt.
 */
typedef void (*Destroy)(void *);extern char UNK_020fc1e8[],UNK_020fc204[],UNK_0211a994[];extern void FUN_0208bdb8(void),FUN_0208efd4(void *,int),FUN_020c38f0(void *,int),FUN_020c2624(void *,void *),FUN_020a4b18(void *),FUN_020ba940(void *);extern void *FUN_0208f068(void),*FUN_020c1fc8(void);extern char *FUN_020a5240(void);void *FUN_020a64f8(char *s){void *manager,*object;char *selected;int mode;*(void **)s=UNK_020fc1e8;*(void **)(s+32)=UNK_020fc204;FUN_0208bdb8();manager=FUN_0208f068();if(manager&&*(int *)(s+324)>=0)FUN_0208efd4(manager,*(int *)(s+324));object=*(void **)(s+320);if(object){FUN_020c38f0(object,0);object=*(void **)(s+320);if(object)(*(Destroy **)object)[1](object);}object=*(void **)(s+252);if(object){mode=*(int *)(s+244);if(mode==2)UNK_0211a994[2]=*(int *)((char *)object+8);else if(mode==3)UNK_0211a994[0]=*(int *)((char *)object+8);object=*(void **)(s+252);if(object)(*(Destroy **)object)[1](object);}if(*(int *)(s+248)!=-1)FUN_020c2624(FUN_020c1fc8(),s+248);if(*(int *)(s+244)==0){selected=FUN_020a5240();if(selected)UNK_0211a994[1]=*(int *)(selected+24);}*(int *)(UNK_0211a994+4)=0;FUN_020a4b18(s);FUN_020ba940(s);return s;}
