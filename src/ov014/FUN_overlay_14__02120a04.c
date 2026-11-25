// FUN_overlay_14__02120a04 @ 0x02120a04 (0x70, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch29.json; original draft retained for referenced provenance.
// FUN_overlay_14__02120a04 @ 0x02120a04 (thumb)
// check: 2.0/sp2p3 target=0x70 candidate=0x70 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full dialog/menu behavior and concrete helper ABI. */
extern void *FUN_020af01c(void *,int,int),*FUN_020c3564(void *),*FUN_0209081c(void),*FUN_02086e3c(void),*FUN_02093c1c(int,int,int);extern int FUN_02087254(void *);extern void FUN_overlay_14__02120cf4(void *),FUN_overlay_14__02120d34(void *,void *);
void *FUN_overlay_14__02120a04(char *s,int mode){FUN_020af01c(s,2,1);*(unsigned *)s=0x021220ec;*(int *)(s+16)=0;FUN_020c3564(s+20);*(int *)(s+8)=2;*(int *)(s+4)=1;FUN_overlay_14__02120cf4(s);((int *)FUN_0209081c())[5]=4;if(mode==0)FUN_overlay_14__02120d34(s,FUN_02093c1c(0,1,1));else{*(int *)(s+16)=4;FUN_02087254(FUN_02086e3c());FUN_overlay_14__02120d34(s,FUN_02093c1c(0,0,0));}return s;}
