// FUN_overlay_10__02120284 @ 0x02120284 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_10__02120284 @ 0x02120284 (thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu text/status update with concrete helper ABI. */
extern void *FUN_02093c00(int),*FUN_02093b2c(void *,int,int);extern void FUN_overlay_10__0211ff88(void *,void *,int,int),FUN_overlay_10__0211ffa8(void *,void *,int);
void FUN_overlay_10__02120284(int *s,void *text){void *m=FUN_02093c00(1);if(text && m){FUN_overlay_10__0211ff88(s,0,0,0);if(s[37]==1)FUN_overlay_10__0211ffa8(s,text,0);else if(s[37]==2){FUN_overlay_10__0211ff88(s,text,100,0);FUN_overlay_10__0211ff88(s,FUN_02093b2c(m,2,2),100,51);}}}
