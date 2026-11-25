// FUN_020763cc @ 0x020763cc (0x78, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch14-manifest.json; original draft retained for referenced provenance.
// FUN_020763cc @ 0x020763cc (inventory code 0x78, thumb)
// check: 2.0/sp2p3 target=0x78 candidate=0x78 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Create typed actor, apply uniform scale and finish descriptor setup.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020763cc.txt.
 */
typedef struct {int v[3];} Vec;extern void FUN_0203666c(void *),FUN_02035408(void *,int,int,int),FUN_02076444(void *,void *,void *);extern void *FUN_02046d94(void *,int,int);extern int FUN_02074e9c(void *,int,int,int);extern char *FUN_02075040(void *,int);void FUN_020763cc(void *s,char *d,int *out){char *source=*(char **)(d+12),*actor;int desc[25];Vec scale;if(*(signed char *)source==0){FUN_0203666c(desc);desc[21]=*(signed char *)(source+1);out[2]=(int)FUN_02046d94(desc,0,0);}else out[1]=FUN_02074e9c(s,*(signed char *)(source+1),1,0);if(*(signed char *)source==0)actor=(char *)out[2];else actor=FUN_02075040(s,out[1]);if(actor){int value=*(int *)(source+24);FUN_02035408(&scale,value,value,value);*(Vec *)(actor+80)=scale;}FUN_02076444(s,d,out);}
