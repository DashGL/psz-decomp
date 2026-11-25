// FUN_02023778 @ 0x02023778 (0x20c, ARM)
// check: vers=2.0/sp2p3 target=0x20c candidate=0x208 words=999 exact_bytes=999 bad_relocs=1
// near: ndiff=999/131 size=0x20c vers=2.0/sp2p3 next="match register coloring, boolean lowering, and scheduling against saved ROM disassembly"
// flags: -O4,p -noThumb
// Deliver a UDP payload to the first matching thread-owned socket.
typedef unsigned int u32;typedef unsigned short u16;typedef unsigned char u8;
extern u32 UNK_021181a0[];extern u32 FUN_020683d4(void);extern void FUN_020683e8(u32),FUN_02066a94(void *),FUN_02065774(const void *,void *,u32);extern int FUN_020214ac(const void *,u32,const void *,u32);
#define W(p,n) (*(u32 *)((u8 *)(p)+(n)))
#define H(p,n) (*(u16 *)((u8 *)(p)+(n)))
#define BE(v) ((u16)(((u16)(v)>>8)|((u16)(v)<<8)))
#define IP(p,n) (((u32)BE(H(p,n))<<16)|BE(H(p,(n)+2)))
void FUN_02023778(u8 *ip,u8 *udp,u32 length){u8 *thread,*socket;u32 mask;
 if(H(udp,6)&&FUN_020214ac(udp,length,ip,17))return;
 mask=FUN_020683d4();
 for(thread=(u8 *)UNK_021181a0[2];thread;thread=(u8 *)W(thread,104)){
 socket=(u8 *)W(thread,164);if(!socket||!W(socket,0)||socket[8]!=10)continue;
 if(H(socket,10)!=BE(H(udp,2)))continue;
 if(H(socket,24)&&H(socket,24)!=BE(H(udp,0)))continue;
 if(W(socket,28)&&W(socket,28)!=~0u&&W(socket,28)!=IP(ip,12))continue;
 W(socket,20)=IP(ip,16);
 if(!W(socket,28)){W(socket,28)=IP(ip,12);H(socket,24)=BE(H(udp,0));}
 if(W(socket,68))break;
 if(length-8>W(socket,60))W(socket,68)=W(socket,60);else W(socket,68)=length-8;
 FUN_02065774(udp+8,(void *)W(socket,64),W(socket,68));
 if(W(socket,4)==3){W(socket,4)=0;FUN_02066a94((void *)W(socket,0));}
 else if(W(socket,56)){if(((int (*)(void *,u32,void *))W(socket,56))((void *)W(socket,64),W(socket,68),socket))W(socket,68)=0;}
 break;
 }
 FUN_020683e8(mask);
}
