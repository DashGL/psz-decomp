// FUN_020883c0 @ 0x020883c0 (0xc8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_020883c0 @ 0x020883c0 (inventory code 0xba, thumb)
// check: 2.0/sp2p3 target=0xc8 candidate=0xc8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Project the selected actor into scaled screen coordinates.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020883c0.txt.
 */
typedef struct{int x,y,z;} Vec;extern char *FUN_0200d16c(void),*FUN_0208555c(int),*FUN_02078d5c(int);extern int FUN_0201cf98(void *,int *,int *);void FUN_020883c0(char *s){char *actor;Vec position;int x,y,mode;*(int *)(s+324)=0;if(!*(int *)(s+368))return;*(int *)(s+376)=0;mode=*(int *)(FUN_0200d16c()+12);if(mode!=4&&mode!=5){actor=FUN_0208555c(*(int *)(s+232));if(actor&&*(int *)(actor+576)==15)*(int *)(s+376)=1;}else actor=FUN_02078d5c(*(int *)(s+232));if(actor){position=*(Vec *)(actor+156);x=0;y=0;position.y+=6963;if(!FUN_0201cf98(&position,&x,&y)){*(int *)(s+328)=((x-128)*2986)/128;*(int *)(s+332)=((y-96)*-2239)/96;*(int *)(s+324)=1;}}}
