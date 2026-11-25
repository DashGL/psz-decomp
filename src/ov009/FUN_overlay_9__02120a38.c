// FUN_overlay_9__02120a38 @ 0x02120a38 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_9__02120a38 @ 0x02120a38 (thumb)
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full game menu CFG and concrete callback/helper inputs reviewed. */
extern void *FUN_02093c1c(int,int,int),*FUN_020a4448(void);extern void FUN_overlay_9__02120a04(void *,int,void *),FUN_020a47bc(void *,int);void FUN_overlay_9__02120a38(int *s,int state){void *p;s[30]=state;switch(state){case 0:FUN_overlay_9__02120a04(s,0,FUN_02093c1c(0,4,0));break;case 1:FUN_overlay_9__02120a04(s,0,FUN_02093c1c(0,4,1));break;case 2:FUN_overlay_9__02120a04(s,0,FUN_02093c1c(0,3,7));p=FUN_020a4448();if(p)FUN_020a47bc(p,0);break;}}
