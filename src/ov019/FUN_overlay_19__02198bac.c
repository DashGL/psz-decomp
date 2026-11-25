// FUN_overlay_19__02198bac @ 0x02198bac (0x54, thumb) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-low-2026-11-07-batch32.json; original draft retained for referenced provenance.
// FUN_overlay_19__02198bac @ 0x02198bac (code 0x54, pool extent 0x54, thumb)
// check: vers=2.0/sp2p3 target=0x54 candidate=0x54 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA overlay19 ROM reconstruction, 2026-11-05.
 * Pack message fields and send; local volatile preserves constructor writes.
 * ABI and behavior: notes/sessions/coverage-overlays-2026-11-05-batch346.md.
 */
typedef struct {signed char a,b,c,d;int e,f;} Payload;typedef struct {unsigned char header[4];int sender;unsigned char padding[4];Payload value;} Message;
extern unsigned int FUN_020bce3c(void *);
extern void FUN_overlay_19__02198b84(void *);extern void FUN_overlay_19__02198b94(void *,int,int);extern void FUN_overlay_19__02198c00(void *);
void FUN_overlay_19__02198bac(const int *self,const Payload *value) { Message m;FUN_overlay_19__02198b84(&m);FUN_overlay_19__02198c00(&m.value);FUN_overlay_19__02198b94(&m,1,24);FUN_overlay_19__02198c00(&m.value);m.sender=self[3];m.value.a=value->a;m.value.b=value->b;m.value.c=value->c;m.value.d=value->d;m.value.e=value->e;m.value.f=value->f;FUN_020bce3c(&m); }
