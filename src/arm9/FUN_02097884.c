// FUN_02097884 @ 0x02097884 (0xc8, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-arm9-2026-11-07-batch01.json; original draft retained for referenced provenance.
// FUN_02097884 @ 0x02097884 (inventory code 0xc8, thumb)
// check: 2.0/sp2p3 target=0xc8 candidate=0xc8 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Apply optional configuration fields and refresh changed action data.
 * Field roles remain provisional. Evidence: extracted/arm9/arm9.bin
 * at named address, disassembly in scratch/coverage-high-game/02097884.txt.
 */
extern void *FUN_02099444(void);extern int FUN_02099cd0(void *,void *,int,int),FUN_02099a80(void *,void *,int,int),FUN_02098cf4(void *,void *,int);extern void FUN_02099d30(void *,void *,int,int),FUN_02099d44(void *,void *,int,int);void FUN_02097884(char *s,int selection,int force){short fields[4];int config[4],value,other,action,changed;if(!FUN_02099cd0(FUN_02099444(),fields,*(int *)s,selection))return;if(fields[0]!=-1){*(short *)(s+16)=fields[0];FUN_02099d30(&value,FUN_02099444(),*(int *)s,*(short *)(s+16));*(int *)(s+24)=value;}if(fields[1]!=-1)*(short *)(s+18)=fields[1];if(fields[2]!=-1)*(short *)(s+20)=fields[2];action=fields[3];if(action==-1)return;changed=0;if(*(short *)(s+22)!=action||force){if(FUN_02099a80(FUN_02099444(),config,*(int *)s,action)){if(FUN_02098cf4(*(void **)(s+8),config,force)){changed=1;*(short *)(s+22)=action;}else if(force){changed=1;*(short *)(s+22)=action;}}}if(changed){*(int *)(s+80)|=8;FUN_02099d44(&other,FUN_02099444(),*(int *)s,action);*(int *)(s+28)=other;}}
