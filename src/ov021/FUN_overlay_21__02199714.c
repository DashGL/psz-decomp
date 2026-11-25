// FUN_overlay_21__02199714 @ 0x02199714 (0x64, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-high-overlays-2026-11-07-batch21.json; original draft retained for referenced provenance.
// FUN_overlay_21__02199714 @ 0x02199714 (code 0x64, pool extent 0x64, thumb)
// check: vers=2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay21 ROM reconstruction, 2026-11-05.
 * Initialize and send payload; preserve duplicate clears and sentinel stores.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch347.md.
 */
typedef struct {signed char bytes[4];volatile int words[1];} Payload;
typedef struct {unsigned char header[4];int sender;unsigned char padding[4];Payload value;} Message;
extern unsigned int FUN_020bce3c(void *);
extern void *FUN_02001540(void *,int,unsigned int);
extern void FUN_overlay_21__021996ec(void *);
extern void FUN_overlay_21__021996fc(void *,int,int);

void FUN_overlay_21__02199714(const int *self,const Payload *value) { Message m;FUN_overlay_21__021996ec(&m);FUN_02001540(&m.value,0,8);m.value.words[0]=-1;FUN_overlay_21__021996fc(&m,1,20);FUN_02001540(&m.value,0,8);m.value.words[0]=-1;m.sender=self[3];m.value.bytes[0]=value->bytes[0];m.value.bytes[1]=value->bytes[1];m.value.bytes[2]=value->bytes[2];m.value.bytes[3]=value->bytes[3];m.value.words[0]=value->words[0];FUN_020bce3c(&m); }
