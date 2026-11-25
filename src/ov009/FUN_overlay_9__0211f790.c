// FUN_overlay_9__0211f790 @ 0x0211f790 (0x9e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_9__0211f790 @ 0x0211f790 (thumb)
// check: 2.0/sp2p3 target=0x9e candidate=0x9e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete four-state input gate including truncated final case and default. */
extern void *FUN_02093c1c(int,int,int);extern void FUN_020b2330(void *,void *);int FUN_overlay_9__0211f790(int *s,int action){if(action==-1)return 0;switch(s[27]){case 0:if(action==2){s[27]=1;FUN_020b2330(s,FUN_02093c1c(0,0,6));return 0;}return action!=1?1:0;case 1:return action!=2?1:0;case 2:if(action==12){s[27]=3;FUN_020b2330(s,FUN_02093c1c(0,0,6));return 0;}return action!=11&&action!=10?1:0;case 3:return action!=12?1:0;}return 1;}
