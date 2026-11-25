// FUN_overlay_19__02198a1c - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_19__02198a1c @ 0x02198a1c (code 0x32, full extent 0x34, thumb)
// check: vers=2.0/sp2p3 target=0x32 candidate=0x32 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete child category availability query.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch548.md.
 */
typedef int (*Predicate)(void *);
int FUN_overlay_19__02198a1c(void **self) { int i;for(i=0;i<40;i++){int *object=(int *)self[54+i];if(object&&object[2]==1&&((Predicate)(*(unsigned **)object)[6])(object))return 1;}return 0; }
