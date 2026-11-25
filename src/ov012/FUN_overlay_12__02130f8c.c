// FUN_overlay_12__02130f8c @ 0x02130f8c (0xce, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xce candidate=0xce words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 guarded scroll selection update at +880..+896, 206-byte code extent before 2-byte alignment.
extern int FUN_020bbfa8(int);extern int FUN_020bbf94(int);extern void FUN_020c193c(int,int,int,int,int);extern int FUN_overlay_12__0212e340(void *,int);extern void FUN_overlay_12__0211f880(void *);
void FUN_overlay_12__02130f8c(unsigned char *self){int old,repeat;if(*(int *)(self+64)!=1||!*(int *)(self+36))return;old=*(int *)(self+892);repeat=FUN_020bbfa8(1024);if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+888)+=FUN_overlay_12__0212e340(self+880,repeat);if(*(int *)(self+888)>=*(int *)(self+880))*(int *)(self+888)=0;FUN_overlay_12__0211f880(self+880);}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+888)-=FUN_overlay_12__0212e340(self+880,repeat);if(*(int *)(self+888)<0)*(int *)(self+888)=*(int *)(self+880)-1;FUN_overlay_12__0211f880(self+880);}if(old!=*(int *)(self+892))*(int *)(self+896)=1;}
