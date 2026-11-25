// FUN_overlay_19__021989dc - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_19__021989dc @ 0x021989dc (code 0x3c, full extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete child slot removal and action dispatch.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch544.md.
 */
typedef int (*Predicate)(void *);typedef void (*Action)(void *,void *,int);
void FUN_overlay_19__021989dc(void **self) { int i;for(i=0;i<40;i++){int *object=(int *)self[54+i];if(object&&object[2]==1&&((Predicate)(*(unsigned **)object)[6])(object)){object=(int *)self[54+i];((Action)(*(unsigned **)object)[5])(object,self,0);}} }
