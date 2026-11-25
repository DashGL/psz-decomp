// FUN_overlay_9__0211f728 @ 0x0211f728 (0x66, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch42.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f728 @ 0x0211f728 (thumb)
// check: 2.0/sp2p3 target=0x66 candidate=0x66 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full game menu CFG and concrete callback/helper inputs reviewed. */
extern int FUN_overlay_9__0211e640(void),FUN_overlay_9__0211e690(int),FUN_overlay_9__0211f790(void *,int),FUN_overlay_9__0211e6c0(void),FUN_020b2298(void *,void *);extern void FUN_020b3088(void *,int);int FUN_overlay_9__0211f728(char *s,unsigned short *out){int result=0,id;if(*(int *)(s+112)==0){id=FUN_overlay_9__0211e690(FUN_overlay_9__0211e640());if(FUN_overlay_9__0211f790(s,id)&&FUN_overlay_9__0211e6c0()){out[0]=7;out[1]=id;result=1;*(int *)(s+112)=1;}}if(*(int *)(s+108)!=3)FUN_020b3088(s+116,0);if(*(int *)(s+108)==0||*(int *)(s+108)==2)FUN_020b3088(s+116,2);FUN_020b2298(s,out);return result;}
