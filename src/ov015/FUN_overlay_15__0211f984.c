// FUN_overlay_15__0211f984 @ 0x0211f984 (0x4c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch49.json; original draft retained for referenced provenance.
// FUN_overlay_15__0211f984 @ 0x0211f984 (thumb)
// check: 2.0/sp2p3 target=0x4c candidate=0x4c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete game UI/protocol function and concrete ABI reviewed. */
extern int FUN_overlay_15__021207f4(void *),FUN_overlay_15__021204f8(void *,int,void *,int),FUN_overlay_15__021206a0(void *,void *,int),FUN_overlay_15__021207dc(int);int FUN_overlay_15__0211f984(unsigned short *previous,unsigned short *next){int result=0,a,b;FUN_overlay_15__021204f8(next,8,(void *)0x0213a8b0,FUN_overlay_15__021207f4((void *)0x0213a8b0));if(FUN_overlay_15__021206a0(previous,next,6))result--;else{a=FUN_overlay_15__021207dc(previous[3]);b=FUN_overlay_15__021207dc(next[3]);if(a+1!=b)result-=2;}return result;}
