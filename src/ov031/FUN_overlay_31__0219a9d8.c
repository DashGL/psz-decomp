// FUN_overlay_31__0219a9d8 @ 0x0219a9d8 (0x36, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_31__0219a9d8 @ 0x0219a9d8 (code 0x36, pool extent 0x36, thumb)
// check: vers=2.0/sp2p3 target=0x36 candidate=0x36 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay31 ROM reconstruction, 2026-11-05.
 * Pack message fields and send; local volatile preserves constructor writes.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch346.md.
 */
typedef struct {volatile unsigned char length,zero,type,reserved;int sender;volatile unsigned char opcode;unsigned char padding[3];volatile unsigned char a,b;volatile short c;} Message;
extern unsigned int FUN_020bce3c(void *);

void FUN_overlay_31__0219a9d8(const int *self,int a,int b,int c) { Message m;m.length=1;m.zero=0;m.type=0;m.reserved=0;m.a=0;m.b=0;m.c=0;m.type=4;m.reserved=0;m.length=4;m.opcode=0;m.sender=self[3];m.a=a;m.b=b;m.c=c;FUN_020bce3c(&m); }
