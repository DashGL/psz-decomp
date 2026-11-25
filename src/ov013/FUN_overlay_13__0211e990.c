// FUN_overlay_13__0211e990 @ 0x0211e990 (0x84, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch34.json; original draft retained for referenced provenance.
// FUN_overlay_13__0211e990 @ 0x0211e990 (thumb)
// check: 2.0/sp2p3 target=0x84 candidate=0x84 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* Initialize save menu state and populate its primary player slot. */
extern void *FUN_020af01c(void *,int,int),*FUN_02086e3c(void),*FUN_020a4448(void),*FUN_020c0788(void);extern int FUN_02087138(void *),FUN_020870e8(void *,void *),FUN_02090834(void);extern void FUN_02084d98(void),FUN_020c4434(void *),FUN_020a46c4(void *,int,void *,void *),FUN_020907d4(void);extern int *FUN_0209081c(void);
void *FUN_overlay_13__0211e990(int *self,int mode){unsigned player[25];void *owner;FUN_020af01c(self,2,1);self[0]=0x0211fa88;FUN_02084d98();if(mode>0&&mode<2){self[2]=2;self[1]=mode;}if(FUN_02087138(FUN_02086e3c())){FUN_020c4434(player);FUN_020c4434(player+4);if(FUN_020870e8(FUN_02086e3c(),player)){owner=FUN_020a4448();if(owner)FUN_020a46c4(owner,0,player,FUN_020c0788());}}if(!FUN_02090834())FUN_020907d4();FUN_0209081c()[5]=16;return self;}
