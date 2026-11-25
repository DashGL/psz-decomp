// FUN_overlay_11__02120f78 @ 0x02120f78 (0x3c, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch16.json; original draft retained for referenced provenance.
// FUN_overlay_11__02120f78 @ 0x02120f78 (code 0x32, pool extent 0x3c, thumb)
// check: vers=2.0/sp2p3 target=0x3c candidate=0x3c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay11 ROM reconstruction, 2026-11-05.
 * Reset graphics state, load module table, initialize receiver record.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch355.md.
 */
extern void FUN_0205e534(const void *);extern void FUN_overlay_11__02120064(void *,void *);
void FUN_overlay_11__02120f78(char *self) {volatile unsigned int *regs=(volatile unsigned int *)0x04000440;regs[0]=0;regs[1]=0;FUN_0205e534((const void *)0x0212378c);regs[0]=1;regs[5]=0;regs[33]=0;*(void *volatile *)(self+0x384)=self+4;FUN_overlay_11__02120064(self,*(void *volatile *)(self+0x384));}
