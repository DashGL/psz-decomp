// FUN_overlay_23__02199e00 @ 0x02199e00 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_23__02199e00 @ 0x02199e00 (code 0x3e, pool extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay23 ROM reconstruction, 2026-11-05.
 * Pack message fields and send; local volatile preserves constructor writes.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch346.md.
 */
typedef struct {unsigned char header[4];int sender;unsigned char padding[4];volatile int value;volatile signed char selector;volatile unsigned char zero[3];} Message;
extern unsigned int FUN_020bce3c(void *);
extern void FUN_overlay_23__02199e40(void *);extern void FUN_overlay_23__02199e50(void *,int,int);
void FUN_overlay_23__02199e00(const int *self,int value,int selector) { Message m;FUN_overlay_23__02199e40(&m);FUN_overlay_23__02199e50(&m,0,20);m.value=-1;m.selector=-1;m.zero[0]=0;m.zero[1]=0;m.zero[2]=0;m.sender=self[3];m.value=value;m.selector=selector;FUN_020bce3c(&m); }
