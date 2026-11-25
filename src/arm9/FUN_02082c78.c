// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x256, exact bytes and relocation targets.
// Evidence: notes/sessions/matching-upper-resume-2026-11-12.md
typedef struct {unsigned short fields[16];} Copy_02082c78;
// FUN_02082c78 @ 0x02082c78 (thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Initialize seven linked layout nodes and apply settings. */
extern void FUN_0208286c(void *),FUN_0206d1ec(void *,int,int,int,int,int),FUN_02031ce8(void *,int),FUN_020b2c94(void *,unsigned,void *);extern int FUN_020832b4(int),FUN_02031a74(void);
void FUN_02082c78(char *s,int value){unsigned short copy[16],settings[16];int i;
 *(int *)(s+1040)=7;*(int *)(s+1044)=6;FUN_0208286c(s);*(int *)(s+36)=2;FUN_0206d1ec(s,8,value,5,0,1);s[24]=1;s[46]=3;s[47]=3;*(int *)(s+20)=FUN_020832b4(-1);
 FUN_0208286c(s+52);*(int *)(s+88)=0;FUN_0206d1ec(s+52,8,value,0,1,1);s[78]=0;s[76]=2;s[98]=3;s[99]=2;*(int *)(s+72)=FUN_020832b4(-1);*(int *)(s+92)=2;
 FUN_0208286c(s+104);*(int *)(s+140)=1;FUN_0206d1ec(s+104,8,value,1,1,1);s[130]=1;s[129]=3;s[150]=3;s[151]=1;*(int *)(s+124)=FUN_020832b4(-1);*(int *)(s+144)=2;
 FUN_0208286c(s+156);*(int *)(s+192)=1;FUN_0206d1ec(s+156,8,value,0,1,1);s[183]=2;s[181]=4;s[202]=4;s[203]=1;*(int *)(s+176)=FUN_020832b4(-1);*(int *)(s+196)=3;
 FUN_0208286c(s+208);*(int *)(s+244)=2;FUN_0206d1ec(s+208,8,value,1,1,1);s[235]=3;s[234]=5;s[254]=5;s[255]=1;*(int *)(s+228)=FUN_020832b4(-1);*(int *)(s+248)=3;
 FUN_0208286c(s+260);*(int *)(s+296)=2;FUN_0206d1ec(s+260,8,value,0,1,1);s[284]=4;s[286]=6;s[306]=5;s[307]=2;*(int *)(s+280)=FUN_020832b4(-1);*(int *)(s+300)=0;
 FUN_0208286c(s+312);*(int *)(s+348)=2;FUN_0206d1ec(s+312,8,value,6,0,1);s[336]=5;s[358]=5;s[359]=3;*(int *)(s+332)=FUN_020832b4(-1);*(int *)(s+352)=0;
 FUN_02031ce8(settings,FUN_02031a74());*(Copy_02082c78 *)copy=*(const Copy_02082c78 *)settings;FUN_020b2c94(s,7,copy);
}
