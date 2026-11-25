// FUN_02036b24 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_02036b24 @ 0x02036b24 (code 0x6, full veneer/pool extent 0xc, thumb)
// check: 2.0/sp2p3 target=0xc candidate=0xc words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM ABI repair, 2026-11-05. Store incoming value at self+0x48,
 * then tail-dispatch receiver to02036b30; not an absolute-address store.
 * Recovery evidence: notes/sessions/coverage-overlays-2026-11-05-batch389.md.
 */
extern void FUN_02036b30(void *);
void FUN_02036b24(int *self,int value) { self[18]=value;FUN_02036b30(self); }
