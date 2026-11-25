// FUN_overlay_19__02198b10 @ 0x02198b10 (0x74, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch32.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198b10 @ 0x02198b10 (code 0x74, pool extent 0x74, thumb)
// check: vers=2.0/sp2p3 target=0x74 candidate=0x74 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay19 ROM reconstruction, 2026-11-05.
 * Initialize and send payload; preserve duplicate clears and sentinel stores.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch347.md.
 */
typedef struct {signed char bytes[4];volatile int words[2];} Payload;
typedef struct {unsigned char header[4];int sender;unsigned char padding[4];Payload value;} Message;
extern unsigned int FUN_020bce3c(void *);
extern void *FUN_02001540(void *,int,unsigned int);
extern void FUN_overlay_19__02198b84(void *);
extern void FUN_overlay_19__02198b94(void *,int,int);
extern void FUN_overlay_19__02198c18(void *,void *);
void FUN_overlay_19__02198b10(const int *self,const Payload *value) { Message m;FUN_overlay_19__02198b84(&m);FUN_02001540(&m.value,0,12);m.value.words[0]=-1;m.value.words[1]=-1;FUN_overlay_19__02198b94(&m,0,24);FUN_02001540(&m.value,0,12);m.value.words[0]=-1;m.value.words[1]=-1;m.sender=self[3];m.value.bytes[0]=value->bytes[0];m.value.bytes[1]=value->bytes[1];m.value.bytes[2]=value->bytes[2];m.value.bytes[3]=value->bytes[3];m.value.words[0]=value->words[0];m.value.words[1]=value->words[1];FUN_020bce3c(&m);FUN_overlay_19__02198c18((void *)self,&m); }
