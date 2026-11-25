// FUN_overlay_9__0211f66c @ 0x0211f66c (0x8c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f66c @ 0x0211f66c (thumb)
// check: 2.0/sp2p3 target=0x8c candidate=0x8c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu construction/selection semantics and concrete helper ABI. */
extern void *FUN_020b1fd8(void *,int),*FUN_020b3044(void *),*FUN_02093c00(int),*FUN_02093b2c(void *,int,int);extern void FUN_020b2330(void *,void *);void *FUN_overlay_9__0211f66c(char *s,int mode){void *manager;FUN_020b1fd8(s,0);*(unsigned *)s=0x02120fe8;*(int *)(s+108)=mode;*(int *)(s+112)=0;FUN_020b3044(s+116);*(int *)(s+104)=0;if(*(int *)(s+108)==2)*(int *)(s+108)=3;manager=FUN_02093c00(0);if(manager){switch(*(int *)(s+108)){case 0:FUN_020b2330(s,FUN_02093b2c(manager,8,7));break;case 1:case 3:FUN_020b2330(s,FUN_02093b2c(manager,0,6));break;case 2:FUN_020b2330(s,FUN_02093b2c(manager,8,11));break;}}return s;}
