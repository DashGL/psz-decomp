// FUN_overlay_12__0212ee44 @ 0x0212ee44 (0xba, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xba candidate=0xba words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 scroll selection update at +228/+236, 186-byte code extent before 2-byte alignment.
extern int FUN_020bbfa8(int);extern int FUN_020bbf94(int);extern void FUN_020c193c(int,int,int,int,int);extern int FUN_overlay_12__0212e340(void *,int);extern void FUN_overlay_12__0211f880(void *);
void FUN_overlay_12__0212ee44(unsigned char *self){int repeat=FUN_020bbfa8(1024);if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+236)+=FUN_overlay_12__0212e340(self+228,repeat);if(*(int *)(self+236)>=*(int *)(self+228))*(int *)(self+236)=0;FUN_overlay_12__0211f880(self+228);}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+236)-=FUN_overlay_12__0212e340(self+228,repeat);if(*(int *)(self+236)<0)*(int *)(self+236)=*(int *)(self+228)-1;FUN_overlay_12__0211f880(self+228);}}
