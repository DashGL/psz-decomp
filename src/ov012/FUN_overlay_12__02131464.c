// FUN_overlay_12__02131464 @ 0x02131464 (0xd0, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch45.json; original draft retained for referenced provenance.
// FUN_overlay_12__02131464 @ 0x02131464 (code 0xd0, pool extent 0xd0, thumb)
// check: vers=2.0/sp2p3 target=0xd0 candidate=0xd0 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 12 reconstruction from extracted module bytes, 2026-11-04.
 * Move selection with optional page steps and mark scroll changes.
 * Field identities remain provisional.
 */
extern int FUN_020bbfa8(int);extern int FUN_020bbf94(int);extern void FUN_020c193c(int,int,int,int,int);extern int FUN_overlay_12__0212e340(void *,int);extern void FUN_overlay_12__0211f880(void *);
void FUN_overlay_12__02131464(unsigned char *self){int old,repeat;if(!*(int *)(self+36)||*(int *)(self+68)<=0)return;old=*(int *)(self+488);repeat=FUN_020bbfa8(1024);if(FUN_020bbf94(128)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+484)+=FUN_overlay_12__0212e340(self+476,repeat);if(*(int *)(self+484)>=*(int *)(self+476))*(int *)(self+484)=0;FUN_overlay_12__0211f880(self+476);}else if(FUN_020bbf94(64)){FUN_020c193c(0,2,0,0,-1);*(int *)(self+484)-=FUN_overlay_12__0212e340(self+476,repeat);if(*(int *)(self+484)<0)*(int *)(self+484)=*(int *)(self+476)-1;FUN_overlay_12__0211f880(self+476);}if(old!=*(int *)(self+488))*(int *)(self+492)=1;}
