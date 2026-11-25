// FUN_020a09f0 @ 0x020a09f0 (0xd8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch24.json; original draft retained for referenced provenance.
// FUN_020a09f0 @ 0x020a09f0 (inventory code 0xd0, thumb)
// check: 2.0/sp2p3 target=0xd8 candidate=0xd8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Release scene resources and clear saved position and angle.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/020a09f0.txt.
 */
typedef void (*Destroy)(void *);typedef struct{int x,y,z;} Vec;extern char *UNK_02108c84;extern void FUN_02033db0(void *,void *),FUN_02037d20(void *,unsigned),FUN_02037b88(void *,unsigned);void FUN_020a09f0(char *s){char *manager=UNK_02108c84;void *object;Vec zero;if(manager){if(*(void **)(s+156)){FUN_02033db0(manager,*(void **)(s+156));*(void **)(s+156)=0;}if(*(unsigned short *)(s+154)!=65535){FUN_02037d20(manager,*(unsigned short *)(s+154));*(unsigned short *)(s+154)=65535;*(int *)(s+148)=0;}if(*(unsigned short *)(s+152)!=65535){FUN_02037b88(manager,*(unsigned short *)(s+152));*(unsigned short *)(s+152)=65535;*(int *)(s+144)=0;}if(*(int *)(s+176)!=9){*(int *)(manager+100)=*(int *)(s+176);*(int *)(s+176)=9;}}object=*(void **)(s+136);if(object){if(object)(*(Destroy **)object)[1](object);*(void **)(s+136)=0;}object=*(void **)(s+140);if(object){if(object)(*(Destroy **)object)[1](object);*(void **)(s+140)=0;}zero.x=0;zero.y=0;zero.z=0;*(Vec *)(s+160)=zero;*(short *)(s+172)=0;}
