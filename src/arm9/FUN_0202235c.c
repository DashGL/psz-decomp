// flags: -O4,p -noThumb
// FUN_0202235c @ 0x0202235c (0x274, ARM)
// check: vers=2.0/sp2p3 target=0x274 candidate=0x27c words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/157 size=0x274 vers=2.0/sp2p3 next="match register coloring, boolean lowering, and scheduling against saved ROM disassembly"
// Construct TCP pseudoheader/header, checksum payload, and advance sequence.
typedef unsigned int u32;typedef unsigned short u16;typedef unsigned char u8;
extern u32 UNK_021181a0[];extern u8 UNK_021072bc[],UNK_02107566[],UNK_02107054[];
extern u32 FUN_020213c0(const void *,u32,u32); extern u16 FUN_02021474(u32);
extern void FUN_02021f78(void *,u32,const void *,u32,u32,u32);
#define W(p,n) (*(u32 *)((u8 *)(p)+(n)))
#define H(p,n) (*(u16 *)((u8 *)(p)+(n)))
#define BE(v) ((u16)(((u16)(v)>>8)|((u16)(v)<<8)))
void FUN_0202235c(const void *payload,u32 length,u8 *socket,u32 flags){u8 *header;u32 size,sum;
 if(!socket[8])return;
 if(UNK_021181a0[1]==(u32)UNK_021072bc)header=UNK_02107566;else header=(u8 *)W(socket,76)+34;
 size=flags&2?24:20;
 H(header,-12)=BE(W(UNK_02107054,80)>>16);H(header,-10)=BE(W(UNK_02107054,80));
 H(header,-8)=BE(W(socket,28)>>16);H(header,-6)=BE(W(socket,28));H(header,-4)=0x600;H(header,-2)=BE(size+length);
 H(header,0)=BE(H(socket,10));H(header,2)=BE(H(socket,24));
 H(header,4)=BE(W(socket,40)>>16);H(header,6)=BE(W(socket,40));
 H(header,8)=BE(W(socket,36)>>16);H(header,10)=BE(W(socket,36));header[12]=(size>>2)<<4;header[13]=flags;
 H(header,14)=BE(W(socket,60)-W(socket,68));H(header,16)=0;H(header,18)=0;
 if(flags&2){H(header,20)=BE((H(UNK_02107054,2)+0x2040000u)>>16);H(header,22)=BE(H(UNK_02107054,2)+0x2040000u);}
 sum=FUN_020213c0(header-12,size+12,0);sum=FUN_020213c0(payload,length,sum);{u16 csum=FUN_02021474((u16)sum);H(header,16)=BE(csum);}
 FUN_02021f78(header,size,payload,length,W(socket,28),6);
 W(socket,40)+=length;if(flags&3)W(socket,40)++;
}