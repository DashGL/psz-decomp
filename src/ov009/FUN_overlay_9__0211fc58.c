// FUN_overlay_9__0211fc58 @ 0x0211fc58 (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211fc58 @ 0x0211fc58 (thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu construction/selection semantics and concrete helper ABI. */
extern void *FUN_020af01c(void *,int,int),*FUN_020a4448(void),*FUN_02086e3c(void),*FUN_020c0788(void);extern char *FUN_0209081c(void);extern int FUN_02090834(void),FUN_020a47f0(void *,int),FUN_02087138(void *),FUN_020870e8(void *,void *);extern void FUN_020907d4(void),FUN_020c4434(void *),FUN_020a46c4(void *,int,void *,void *);void *FUN_overlay_9__0211fc58(int *s,int selected){unsigned short player[50];void *manager;FUN_020af01c(s,2,1);*(unsigned *)s=0x02121048;s[4]=1;if(selected>0&&selected<2){s[2]=2;s[1]=selected;}if(!FUN_02090834())FUN_020907d4();manager=FUN_020a4448();if(manager&&!FUN_020a47f0(manager,0)&&FUN_02087138(FUN_02086e3c())){FUN_020c4434(player);FUN_020c4434(player+8);if(FUN_020870e8(FUN_02086e3c(),player))FUN_020a46c4(manager,0,player,FUN_020c0788());}*(int *)(FUN_0209081c()+20)=96;return s;}
