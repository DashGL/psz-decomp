// FUN_overlay_19__0219ba30 @ 0x0219ba30 (0x6c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch30.json; original draft retained for referenced provenance.
// FUN_overlay_19__0219ba30 @ 0x0219ba30 (code 0x6c, full extent 0x6c, thumb)
// check: vers=2.0/sp2p3 target=0x6c candidate=0x6c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch418.md.
 */
typedef struct {int x,y,z;} Vec;extern int FUN_overlay_19__02198418(void *);extern void *FUN_020ba894(unsigned);extern void *FUN_overlay_19__0219a81c(void *,void *,unsigned,int);extern int FUN_overlay_19__02198438(void *,void *);
void FUN_overlay_19__0219ba30(int *self) { int *owner=(int *)self[1];Vec pos;int i;owner[97]=1;pos=*(Vec *)(owner+14);for(i=0;i<8;i++)if(i%2==1 && FUN_overlay_19__02198418(owner)==1){unsigned short angle=(i<<16)/8;void *p=FUN_020ba894(80);if(p)p=FUN_overlay_19__0219a81c(p,&pos,angle,i);FUN_overlay_19__02198438(owner,p);} }
