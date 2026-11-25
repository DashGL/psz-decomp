// FUN_overlay_12__02120de8 @ 0x02120de8 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_12__02120de8 @ 0x02120de8 (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full UI/state function and concrete call ABI reviewed. */
extern void FUN_020a45a4(int),FUN_overlay_12__02120e34(int,int,int,int,int),FUN_020c2b84(void *,void *,int,int,int);void FUN_overlay_12__02120de8(char *s){FUN_020a45a4(2);FUN_overlay_12__02120e34(0,0,0,1,0);FUN_020a45a4(8);*(volatile unsigned short *)0x0400000e=(*(volatile unsigned short *)0x0400000e&67)|400;FUN_020c2b84(s+4,(void *)0x0213d430,3,1,4);}
