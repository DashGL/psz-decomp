// FUN_overlay_12__0212bc4c @ 0x0212bc4c (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch27.json; original draft retained for referenced provenance.
// FUN_overlay_12__0212bc4c @ 0x0212bc4c (thumb)
// check: 2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full CFG/pools and concrete ABI reviewed. */
extern int FUN_overlay_12__0212bc2c(void *),FUN_overlay_12__0212becc(void *,int,int,void *);extern void FUN_overlay_12__0212aadc(void *),FUN_overlay_12__02129e34(void *,int),FUN_overlay_12__02132478(void);int FUN_overlay_12__0212bc4c(void *item,int index,int mode){char *s=*(char **)0x0213f2c0;int slot;if(s&&mode==0){slot=FUN_overlay_12__0212bc2c(s);if(slot!=-1&&FUN_overlay_12__0212becc(s+112,slot,index,item)){FUN_overlay_12__0212aadc(s);FUN_overlay_12__02129e34(s,slot);FUN_overlay_12__02132478();return 1;}}return 0;}
