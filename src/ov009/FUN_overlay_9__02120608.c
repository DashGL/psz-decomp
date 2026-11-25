// FUN_overlay_9__02120608 @ 0x02120608 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch43.json; original draft retained for referenced provenance.
// FUN_overlay_9__02120608 @ 0x02120608 (thumb)
// check: 2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Full game menu CFG and concrete callback/helper inputs reviewed. */
extern int *FUN_overlay_9__021209d4(void *);extern int FUN_0208e6b4(void *,void *,int);int FUN_overlay_9__02120608(int *s,void *event,int action){int result=0;if(s[30]==0){if(action==2){s[14]--;result=1;if(s[14]<0)s[14]=2;else if(*FUN_overlay_9__021209d4(s)==2)s[14]=0;}else if(action==3){s[14]++;result=1;if(s[14]>=3)s[14]=0;else if(s[14]==2&&*FUN_overlay_9__021209d4(s)==2)s[14]=0;}else result=FUN_0208e6b4(s,event,action);}return result;}
