// FUN_overlay_12__021275b0 @ 0x021275b0 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch26.json; original draft retained for referenced provenance.
// FUN_overlay_12__021275b0 @ 0x021275b0 (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full body and concrete callee inputs reviewed. */
extern char *FUN_02086e3c(void);extern void *FUN_020b00ac(void *,int);extern int FUN_0203a1fc(void *),FUN_overlay_12__02127948(void *,void *);int FUN_overlay_12__021275b0(void *s){int count=0,i,n;char *items=FUN_02086e3c()+16;n=*(short *)(items+8);for(i=0;i<n;i++){void *item=FUN_020b00ac(items,i);if(!FUN_0203a1fc(item)&&FUN_overlay_12__02127948(s,item))count++;}return count>0?1:0;}
