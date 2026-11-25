// FUN_overlay_19__0219b8e0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_19__0219b8e0 @ 0x0219b8e0 (code 0x52, full extent 0x5c, thumb)
// check: 2.0/sp2p3 target=0x5c candidate=0x5c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch411.md.
 */
extern char G_0210E24C[]; extern char G_0219D394[];
typedef struct {int x,y,z;} Vec;extern void FUN_020445a8(void *,int,int);extern void FUN_02051128(void *);extern void *FUN_02096488(void);extern void FUN_02096b08(void *,int);
void FUN_overlay_19__0219b8e0(int *self) { int *owner=(int *)self[1];Vec v=*(Vec *)(owner+14);v.y=((int *)G_0219D394)[1];*(Vec *)(owner+14)=v;FUN_020445a8(owner,0,1);FUN_020445a8(owner,2,1);FUN_02051128(*(void **)G_0210E24C);FUN_02096b08(FUN_02096488(),owner[3]); }
