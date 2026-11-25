// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x2e, exact bytes and relocation targets.
// FUN_overlay_17__0211e9a8 @ 0x0211e9a8 (code 0x2e, full extent 0x2e, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Resolve counted tree node and
 * mutate selected field; address-taken third parameter is NOT varargs.
 * ABI correction/evidence: notes/sessions/coverage-overlays-2026-11-05-batch400.md.
 */
extern void *FUN_overlay_17__0211e9d8(void *,void *,int *);
void * FUN_overlay_17__0211e9a8(int *self,int index,int count) { int *header=(int *)self[0x38c/4];int *entry;int n=*(unsigned short *)header;if(index<0 || index>=n)return 0;entry=((int **)header[2])[index];return FUN_overlay_17__0211e9d8(self,(void *)entry[1],&count); }
