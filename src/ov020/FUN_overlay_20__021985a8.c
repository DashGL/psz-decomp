// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xba, exact bytes and relocation targets.
// check: 2.0/sp2p3 full extent 0xba exact_bytes=0 bad_relocs=0
// ROM counted-copy widths and field boundaries: notes/sessions/matching-overlays-2026-11-12-aggregate-copies.json
typedef struct {unsigned char data[4];} Copy_overlay_20__021985a8_1_4;
typedef struct {unsigned char data[8];} Copy_overlay_20__021985a8_1_8;
// FUN_overlay_20__021985a8 @ 0x021985a8 (code 0xba, full extent 0xba, thumb)
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Complete lifecycle/cleanup logic.
 * ABI evidence: notes/sessions/coverage-overlays-2026-11-05-batch503.md.
 */
typedef struct {int x,y,z;} Vec;typedef struct {signed char a,b,c,d;int word;unsigned short h0,h1;unsigned char bytes4[4],bytes8[8];unsigned short h2,h3;unsigned char more4[4];unsigned short h4,h5;Vec vector;} Payload;typedef struct {int header[3];Payload payload;} Packet;extern void FUN_overlay_20__02198664(void *);extern void *FUN_overlay_20__02198674(void *,unsigned char,int);extern void FUN_02001540(void *,int,unsigned);extern void FUN_020bce3c(void *);
void FUN_overlay_20__021985a8(int *self,Payload *input) { Packet p;int i;FUN_overlay_20__02198664(&p);FUN_overlay_20__02198674(&p,0,60);FUN_02001540(&p.payload,0,48);((volatile Payload *)&p.payload)->word=-1;((volatile Payload *)&p.payload)->b=-1;p.header[1]=self[3];p.payload.a=input->a;p.payload.b=input->b;p.payload.c=input->c;p.payload.d=input->d;p.payload.word=input->word;p.payload.h0=input->h0;p.payload.h1=input->h1;*(Copy_overlay_20__021985a8_1_4 *)(p.payload.bytes4)=*(const Copy_overlay_20__021985a8_1_4 *)(input->bytes4);*(Copy_overlay_20__021985a8_1_8 *)(p.payload.bytes8)=*(const Copy_overlay_20__021985a8_1_8 *)(input->bytes8);p.payload.h2=input->h2;p.payload.h3=input->h3;*(Copy_overlay_20__021985a8_1_4 *)(p.payload.more4)=*(const Copy_overlay_20__021985a8_1_4 *)(input->more4);p.payload.h4=input->h4;p.payload.h5=input->h5;p.payload.vector=input->vector;FUN_020bce3c(&p); }
