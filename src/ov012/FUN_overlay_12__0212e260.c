// FUN_overlay_12__0212e260 @ 0x0212e260 (0xe0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xe0 candidate=0xe0 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 guarded scroll selection update at +168..+184, full 224-byte extent.
extern int FUN_020bbfa8(int);extern int FUN_020bbf94(int);extern void FUN_020c193c(int,int,int,int,int);extern int FUN_overlay_12__0212e340(void *,int);extern void FUN_overlay_12__0211f880(void *);
void FUN_overlay_12__0212e260(unsigned char *self){int old,repeat;if(*(int *)(self+64)!=1||!*(int *)(self+36))return;old=*(int *)(self+180);repeat=FUN_020bbfa8(1024);if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+176)+=FUN_overlay_12__0212e340(self+168,repeat);if(*(int *)(self+176)>=*(int *)(self+168))*(int *)(self+176)=0;FUN_overlay_12__0211f880(self+168);}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+176)-=FUN_overlay_12__0212e340(self+168,repeat);if(*(int *)(self+176)<0)*(int *)(self+176)=*(int *)(self+168)-1;FUN_overlay_12__0211f880(self+168);}if(old!=*(int *)(self+180))*(int *)(self+184)=1;}
