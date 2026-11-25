// FUN_020352dc @ 0x020352dc (0x12c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch16-manifest.json; original draft retained for referenced provenance.
// FUN_020352dc @ 0x020352dc (inventory code 0x118, thumb)
// check: 2.0/sp2p3 target=0x12c candidate=0x12c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 83.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b83/020352dc.txt.
 */
typedef struct{unsigned int x,y,z;} Vec;extern void *FUN_0206e760(void *);extern void FUN_02035408(void *,int,int,int);extern void *FUN_0207f4ec(void *,unsigned int);extern unsigned int FUN_02037584(unsigned int);extern void FUN_0203526c(void *,unsigned int,void *);extern void *FUN_0203ff68(void *,unsigned int);extern void FUN_02043a90(void *);extern void FUN_0204411c(void *);extern void FUN_020723bc(void *);extern void FUN_02040a6c(void *);
void *FUN_020352dc(char *s,unsigned int id,unsigned int resource){FUN_0206e760(s);*(unsigned int *)s=0x020f6f54;*(int *)(s+8)=0;*(unsigned int *)(s+12)=id;*(int *)(s+16)=0;*(int *)(s+20)=0;*(Vec *)(s+56)=*(Vec *)0x020fc958;*(short *)(s+68)=0;*(int *)(s+72)=4096;FUN_02035408(s+76,4096,4096,4096);*(short *)(s+88)=0;*(int *)(s+92)=0;*(int *)(s+96)=0;FUN_0207f4ec(s+100,id);*(int *)(s+136)=-1;*(int *)(s+140)=0;*(unsigned int *)(s+144)=FUN_02037584(resource);*(unsigned int *)(s+148)=0x2000f;*(int *)(s+152)=0;*(int *)(s+156)=0;*(int *)(s+160)=0;*(int *)(s+164)=0;*(int *)(s+168)=0;*(int *)(s+172)=0;*(int *)(s+176)=0;*(int *)(s+180)=5;*(int *)(s+184)=0;*(int *)(s+188)=0;*(int *)(s+192)=-1;*(int *)(s+196)=0;*(int *)(s+200)=0;*(short *)(s+204)=0;*(int *)(s+208)=205;*(unsigned int *)(s+4)|=4;FUN_0203526c(*(void **)0x02108cf4,id,s);*(void **)(s+20)=FUN_0203ff68(*(void **)0x02108d5c,resource);FUN_02043a90(s);FUN_0204411c(s);FUN_020723bc(s);FUN_02040a6c(s);return s;}
