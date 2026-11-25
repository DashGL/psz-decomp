// FUN_overlay_12__02121744 @ 0x02121744 (0xc4, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch44.json; original draft retained for referenced provenance.
// flags: -O4,s
// check: vers=2.0/sp2p3 target=0xc4 candidate=0xc4 words=0 exact_bytes=0 bad_relocs=0
// USA overlay012 menu button-dispatch and view refresh handler, full 196-byte extent including literal pool.
extern int FUN_020c2e38(void),FUN_02033400(void *,int),FUN_020bbf6c(int),FUN_overlay_12__021206a0(void *),FUN_overlay_12__02121860(void *,void *),FUN_overlay_12__02121c44(void *,void *);
extern void FUN_020c193c(int,int,int,int,int),FUN_overlay_12__0211fb68(void *,int);
void FUN_overlay_12__02121744(unsigned char *self){if(*(int *)(self+0xca4)){if(*(int *)(self+0xca0)==0&&!FUN_020c2e38()){*(int *)(self+0xca0)=1;FUN_02033400(*(void **)0x02108c68,14);}}else if(*(int *)(self+0x24)&&*(int *)(self+0xc9c)){if(FUN_020bbf6c(1)&&FUN_overlay_12__021206a0(self+0x48)){int old=*(int *)(self+0xc90);if(FUN_overlay_12__02121860(self,self+0xc90)&&old!=5)FUN_020c193c(0,0,0,0,-1);}else if(FUN_020bbf6c(2)){if(FUN_overlay_12__02121c44(self,self+0xc90))FUN_020c193c(0,1,0,0,-1);}}FUN_overlay_12__0211fb68(self+0x48,*(int *)(self+0xc90));}
