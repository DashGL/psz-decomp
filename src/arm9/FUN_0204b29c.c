// FUN_0204b29c @ 0x0204b29c (0xfc, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch09-manifest.json; original draft retained for referenced provenance.
// FUN_0204b29c @ 0x0204b29c (inventory code 0xfc, thumb)
// check: 2.0/sp2p3 target=0xfc candidate=0xfc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM disassembly reconstruction, 2026-11-04, low-game batch 80.
 * Object identities are provisional. Evidence: scratch/coverage-low-game-b80/0204b29c.txt.
 */
typedef struct{unsigned int x,y,z;} Vec;extern void FUN_0204b268(void *,void *);extern void FUN_0204bf88(void *);extern void FUN_0204b288(void *,unsigned int,unsigned int,unsigned int);extern void FUN_0203955c(void *);extern void FUN_0204c11c(void *);extern void *FUN_0204a580(void);extern void FUN_0204a58c(void *,void *);
void FUN_0204b29c(char *s,char *request,int state){*(int *)(s+4)=3;FUN_0204b268(s+52,request);*(int *)(s+8)=0;if(!(*(unsigned int *)(request+28)&0x800000))*(unsigned int *)(s+76)=*(unsigned int *)(request+24);*(unsigned int *)(s+68)=*(unsigned int *)(request+16)<<12;*(unsigned int *)(s+72)=*(unsigned int *)(request+20)<<12;*(Vec *)(s+80)=*(Vec *)(request+44);*(Vec *)(s+92)=*(Vec *)(request+32);*(unsigned short *)(s+104)=*(unsigned short *)(request+56);FUN_0204bf88(s);*(unsigned short *)(s+106)=*(unsigned short *)(request+58);FUN_0204bf88(s);*(unsigned short *)(s+108)=*(unsigned short *)(request+60);FUN_0204bf88(s);FUN_0204bf88(s);FUN_0204b288(s,*(unsigned int *)(request+68),*(unsigned int *)(request+72),*(unsigned int *)(request+76));*(unsigned int *)(s+172)=*(unsigned int *)(request+80);FUN_0203955c(s+208);*(int *)(s+224)=state;*(unsigned int *)(s+228)=*(unsigned int *)(request+28);*(int *)(s+236)=-1;*(unsigned int *)(s+152)=*(unsigned int *)(request+64);if(*(int *)(s+152)!=-1)*(int *)(s+172)=1;if(*(int *)(s+68)<0&&*(int *)(s+156)>=0&&*(int *)(s+160)>=0)FUN_0204c11c(s);FUN_0204a58c(FUN_0204a580(),s);}
