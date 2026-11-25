// FUN_overlay_23__02199e74 @ 0x02199e74 (0x68, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch15.json; original draft retained for referenced provenance.
// FUN_overlay_23__02199e74 @ 0x02199e74 (code 0x68, pool extent 0x68, thumb)
// check: vers=2.0/sp2p3 target=0x68 candidate=0x68 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay23 ROM reconstruction, 2026-11-05.
 * Send five payload words plus four signed bytes, opcode 1, length 36.
 * Local volatile fields preserve constructor stores before payload copy.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch347.md.
 */
typedef struct {int words[5];signed char bytes[4];} Payload;
typedef struct {unsigned char header[4];int sender;unsigned char padding[4];volatile int words[5];volatile signed char bytes[4];} Message;
extern unsigned int FUN_020bce3c(void *);
extern void FUN_overlay_23__02199e40(void *);
extern void FUN_overlay_23__02199e50(void *,int,int);
void FUN_overlay_23__02199e74(const int *self,const Payload *value) { Message m;FUN_overlay_23__02199e40(&m);FUN_overlay_23__02199e50(&m,1,36);m.words[0]=0;m.words[1]=0;m.words[2]=0;m.words[3]=0;m.words[4]=0;m.bytes[0]=0;m.bytes[1]=0;m.bytes[2]=0;m.bytes[3]=0;m.sender=self[3];m.words[0]=value->words[0];m.words[1]=value->words[1];m.words[2]=value->words[2];m.words[3]=value->words[3];m.words[4]=value->words[4];m.bytes[0]=value->bytes[0];m.bytes[1]=value->bytes[1];m.bytes[2]=value->bytes[2];m.bytes[3]=value->bytes[3];FUN_020bce3c(&m); }
