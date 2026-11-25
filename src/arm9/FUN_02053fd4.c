// FUN_02053fd4 @ 0x02053fd4 (0xec, arm) - full bytes and relocation targets verified.
// Promotion evidence: notes/sessions/matching-arm9-2026-11-07-batch27-manifest.json; original draft retained for referenced provenance.
// check: 2.0/sp2p3 target=0xec candidate=0xec words=0 exact_bytes=0 bad_relocs=0
// FUN_02053fd4 @ 0x02053fd4 (0xec bytes, ARM)
// flags: -noThumb
// Packet command 10: require state 2/3/5, a non-null data pointer and channel 1..14.
// Original input is 14 bytes; output adds a 16-bit command tag. Each field copied individually.
typedef unsigned char u8;
typedef unsigned short u16;
typedef struct {void *data;u16 channel,value;u8 a,b,c,d,e,f;} Input;
typedef struct {u16 command,channel;void *data;u16 value;u8 a,b,c,d,e,f;} Packet;
extern int FUN_02052fe4(unsigned int,...);
extern void FUN_02052de4(unsigned int,unsigned int);
extern int FUN_02052f00(void *,unsigned int);
int FUN_02053fd4(unsigned int callback,Input *in){
 Packet out;int result=FUN_02052fe4(3,2,3,5);
 if(result)return result;
 if(!in)return 6;
 if(!in->data)return 6;
 if(in->channel<1||in->channel>14)return 6;
 FUN_02052de4(10,callback);
 out.command=10;out.channel=in->channel;out.data=in->data;out.value=in->value;
 out.a=in->a;out.b=in->b;out.c=in->c;out.d=in->d;out.e=in->e;out.f=in->f;
 result=FUN_02052f00(&out,16);
 return result?result:2;
}
