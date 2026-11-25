// FUN_overlay_12__0212e798 @ 0x0212e798 (0x10c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0x10c candidate=0x10c words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 guarded scroll selection and transition update, full 268-byte extent including literal pool.
extern void FUN_overlay_12__0212eb54(void *),FUN_overlay_12__0212d6bc(int),FUN_overlay_12__02131ff8(void *,int),FUN_020c193c(int,int,int,int,int),FUN_overlay_12__0211f880(void *);
extern int FUN_020bbfa8(int),FUN_020bbf94(int),FUN_overlay_12__0212e340(void *,int);
void FUN_overlay_12__0212e798(unsigned char *self){int old,repeat;if(*(int *)(self+64)!=1||!*(int *)(self+36))return;if(*(int *)(self+536)){FUN_overlay_12__0212eb54(self+544);FUN_overlay_12__0212d6bc(0);FUN_overlay_12__02131ff8(self,1);*(int *)0x0213e20c=*(int *)(self+8);*(int *)(self+536)=0;}else{old=*(int *)(self+532);if(*(int *)(self+520)>0){repeat=FUN_020bbfa8(1024);if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+528)+=FUN_overlay_12__0212e340(self+520,repeat);if(*(int *)(self+528)>=*(int *)(self+520))*(int *)(self+528)=0;FUN_overlay_12__0211f880(self+520);}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+528)-=FUN_overlay_12__0212e340(self+520,repeat);if(*(int *)(self+528)<0)*(int *)(self+528)=*(int *)(self+520)-1;FUN_overlay_12__0211f880(self+520);}}if(old!=*(int *)(self+532))*(int *)(self+540)=1;}}
