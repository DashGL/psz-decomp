// FUN_overlay_20__0219868c @ 0x0219868c (0x2e, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_20__0219868c @ 0x0219868c (code 0x2e, pool extent 0x2e, thumb)
// check: vers=2.0/sp2p3 target=0x2e candidate=0x2e words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay20 ROM reconstruction, 2026-11-05.
 * Send 16-byte message with caller value and receiver's sender field.
 * Local volatile fields retain observed constructor/setup store sequencing.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch345.md.
 */
typedef struct {volatile unsigned char length,zero,type,reserved;int sender;volatile unsigned char opcode;unsigned char padding[3];volatile int value;} Message;
extern unsigned int FUN_020bce3c(void *);
extern void FUN_overlay_20__02198664(void *);
extern void FUN_overlay_20__02198674(void *,int,int);

void FUN_overlay_20__0219868c(const int *self,int value) {Message message;FUN_overlay_20__02198664(&message);FUN_overlay_20__02198674(&message,1,16);message.value=-1;message.sender=self[3];message.value=value;FUN_020bce3c(&message);}
