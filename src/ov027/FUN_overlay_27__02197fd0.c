// FUN_overlay_27__02197fd0 @ 0x02197fd0 (0x30, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_27__02197fd0 @ 0x02197fd0 (code 0x30, pool extent 0x30, thumb)
// check: vers=2.0/sp2p3 target=0x30 candidate=0x30 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay27 ROM reconstruction, 2026-11-05.
 * Send 16-byte message with caller value and receiver's sender field.
 * Local volatile fields retain observed constructor/setup store sequencing.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch345.md.
 */
typedef struct {volatile unsigned char length,zero,type,reserved;int sender;volatile unsigned char opcode;unsigned char padding[3];volatile int value;} Message;
extern unsigned int FUN_020bce3c(void *);

void FUN_overlay_27__02197fd0(const int *self,int value) {Message message;message.length=1;message.zero=0;message.type=0;message.reserved=0;message.type=4;message.reserved=0;message.length=4;message.opcode=0;message.value=-1;message.sender=self[3];message.value=value;FUN_020bce3c(&message);}
