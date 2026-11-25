// FUN_overlay_12__02130964 @ 0x02130964 (0xe6, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xe6 candidate=0xe6 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 count-guarded scroll selection update at +132..+148, 230-byte code extent before 2-byte alignment.
extern int FUN_020bbfa8(int);extern int FUN_020bbf94(int);extern void FUN_020c193c(int,int,int,int,int);extern int FUN_overlay_12__0212e340(void *,int);extern void FUN_overlay_12__0211f880(void *);
void FUN_overlay_12__02130964(unsigned char *self){int old,repeat;if(*(int *)(self+64)!=1||!*(int *)(self+36))return;old=*(int *)(self+144);if(*(int *)(self+72)>0){repeat=FUN_020bbfa8(1024);if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+140)+=FUN_overlay_12__0212e340(self+132,repeat);if(*(int *)(self+140)>=*(int *)(self+132))*(int *)(self+140)=0;FUN_overlay_12__0211f880(self+132);}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+140)-=FUN_overlay_12__0212e340(self+132,repeat);if(*(int *)(self+140)<0)*(int *)(self+140)=*(int *)(self+132)-1;FUN_overlay_12__0211f880(self+132);}}if(old!=*(int *)(self+144))*(int *)(self+148)=1;}
