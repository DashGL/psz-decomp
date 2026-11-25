// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// FUN_overlay_4__02125168 @ 0x02125168
// check: 2.0/sp2p3 target=0x50 candidate=0x50 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay 4 reconstruction from extracted module bytes, 2026-11-04.
 * Refresh grouped inventory, select the current item, and transition to state three.
 * Field identities remain provisional.
 */
extern unsigned char data_021965d0[];
extern int FUN_overlay_4__02125b5c(void *);extern void *FUN_02088c7c(void);extern void FUN_02088e10(void *,const void *,int,int);extern void FUN_overlay_4__0212512c(void *,int);void FUN_overlay_4__02125168(unsigned char *self){int group;void *manager;if(FUN_overlay_4__02125b5c(self)==1){group=*(int *)(self+100);manager=FUN_02088c7c();FUN_02088e10(manager,data_021965d0+group*1600+*(int *)(self+56+group*4)*20,0,-1);*(unsigned int *)(self+188)&=~4u;FUN_overlay_4__0212512c(self,3);}}
