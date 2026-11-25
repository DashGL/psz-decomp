// FUN_overlay_17__0211e998 @ 0x0211e998 (0x10, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_17__0211e998 @ 0x0211e998 (code 0x10, full extent 0x10, thumb)
// check: vers=2.0/sp2p3 target=0x10 candidate=0x10 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Resolve counted tree node and
 * mutate selected field; address-taken third parameter is NOT varargs.
 * ABI correction/evidence: notes/sessions/coverage-overlays-2026-11-05-batch400.md.
 */
extern int *FUN_overlay_17__0211e9a8(void *,int,int);
void FUN_overlay_17__0211e998(void *self,int index,int count,int value) { int *node=FUN_overlay_17__0211e9a8(self,index,count);if(node)node[9]=value; }
