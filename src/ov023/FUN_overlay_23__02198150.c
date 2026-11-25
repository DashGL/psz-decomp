// FUN_overlay_23__02198150 @ 0x02198150 (0x3e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_23__02198150 @ 0x02198150 (code 0x3e, pool extent 0x3e, thumb)
// check: vers=2.0/sp2p3 target=0x3e candidate=0x3e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay23 ROM reconstruction, 2026-11-05.
 * Pack message fields and send; local volatile preserves constructor writes.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch346.md.
 */
typedef struct {volatile unsigned char length,zero,type,reserved;int sender;volatile unsigned char opcode;unsigned char padding[3];volatile int value;} Message;
extern unsigned int FUN_020bce3c(void *);
extern int FUN_02078188(int);
void FUN_overlay_23__02198150(const int *self,int value) { Message m;if(FUN_02078188(value)){m.length=1;m.zero=0;m.type=0;m.reserved=0;m.type=4;m.reserved=0;m.length=4;m.opcode=0;m.value=-1;m.sender=self[3];m.value=value;FUN_020bce3c(&m);} }
