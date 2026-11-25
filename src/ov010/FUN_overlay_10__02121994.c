// FUN_overlay_10__02121994 @ 0x02121994 (0x60, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch31.json; original draft retained for referenced provenance.
// FUN_overlay_10__02121994 @ 0x02121994 (thumb)
// check: 2.0/sp2p3 target=0x60 candidate=0x60 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete menu text/status update with concrete helper ABI. */
typedef struct {short type,id;int payload;} Event;extern int FUN_overlay_10__0212104c(void);extern void *FUN_02093c1c(int,int,int);extern void FUN_overlay_10__0211ff68(void *,void *,int,int),FUN_overlay_10__0211ffa8(void *,void *,int);
int FUN_overlay_10__02121994(int *s,Event *event){void *text;if(s[40]==1)return 0;if(!FUN_overlay_10__0212104c()){event->type=11;event->id=3;return 1;}s[40]=1;s[38]=0;s[37]=0;text=FUN_02093c1c(0,0,6);FUN_overlay_10__0211ff68(s,0,0,0);FUN_overlay_10__0211ffa8(s,text,0);return 1;}
