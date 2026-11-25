// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x46, exact bytes and relocation targets.
// FUN_overlay_19__02198500 @ 0x02198500 (code 0x46, full extent 0x48, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete typed child lookup.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch546.md.
 */
typedef int (*Predicate)(void *);
void * FUN_overlay_19__02198500(void **self,int id) { int i;if(id<0||id>=40)return 0;for(i=0;i<40;i++){int *object=(int *)self[54+i];if(object&&object[2]==2&&((Predicate)(*(unsigned **)object)[6])(object)){object=(int *)self[54+i];if(id==object[10])return object;}}return 0; }
