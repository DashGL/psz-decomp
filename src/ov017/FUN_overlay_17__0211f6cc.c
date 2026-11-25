// FUN_overlay_17__0211f6cc @ 0x0211f6cc (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch02.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211f6cc @ 0x0211f6cc (code 0x4e, full extent 0x54, thumb)
// check: vers=2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch408.md.
 */
extern void *FUN_overlay_17__0211f288(void *,void *,void *,void *,int,int,int);
void * FUN_overlay_17__0211f6cc(unsigned *self,void *out,unsigned *desc,unsigned index,int extra) { unsigned **p=(unsigned **)desc[2];unsigned **end=p+*(unsigned short *)desc;unsigned *cursor;self[0x2ba4/4]=0;cursor=(unsigned *)desc[3]+desc[1]*index;do{out=FUN_overlay_17__0211f288(self,out,(void *)(*p)[1],&cursor,extra,-1,0);p++;}while(p<end);return out; }
