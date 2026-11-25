// FUN_0202e148 @ 0x0202e148 (0x210, ARM)
// check: vers=2.0/sp2p3 target=0x210 candidate=0x208 words=999 exact_bytes=999 bad_relocs=6
// near: ndiff=999/132 size=0x210 vers=2.0/sp2p3 next="match register coloring, boolean lowering, and scheduling against saved ROM disassembly"
// flags: -O4,p -noThumb
// Stop wireless session, preserving asynchronous pending and error states.
typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;typedef void (*Callback)(void *);
extern u8 *UNK_02108c0c;
extern u32 FUN_020683d4(void);extern void FUN_020683e8(u32),FUN_0202e834(int),FUN_020673d4(void *,u32),FUN_0202ea58(void *),FUN_0202f5c8(void *);
extern u16 *FUN_02053440(void);extern int FUN_02052d74(void),FUN_02053c54(Callback),FUN_02053cd4(Callback),FUN_02053d84(Callback);
int FUN_0202e148(void){u32 irq=FUN_020683d4();u16 *status;int result;
 if(!UNK_02108c0c){FUN_020683e8(irq);return 1;}
 switch(*(u32 *)(UNK_02108c0c+8800)){
 case 13:FUN_020683e8(irq);return 2;
 case 1:FUN_020683e8(irq);return 0;
 case 6:FUN_0202e834(13);*(u16 *)(UNK_02108c0c+8832)=9;FUN_020683e8(irq);return 3;
 case 3:case 9:case 12:break;
 default:FUN_020683e8(irq);return 1;
 }
 if(UNK_02108c0c[8811]==1){FUN_0202e834(13);*(u16 *)(UNK_02108c0c+8832)=9;}
 else{
 status=FUN_02053440();FUN_020673d4(status,2);
 switch(*status){case 0:result=FUN_02052d74();if(!result){FUN_0202e834(1);*(u16 *)(UNK_02108c0c+8832)=0;FUN_020683e8(irq);return 0;}break;
 case 1:result=FUN_02053c54(FUN_0202ea58);break;
 case 2:result=FUN_02053cd4(FUN_0202ea58);break;
 default:UNK_02108c0c[8811]=1;result=FUN_02053d84(FUN_0202f5c8);break;
 }
 switch(result){case 2:FUN_0202e834(13);*(u16 *)(UNK_02108c0c+8832)=9;break;case 8:FUN_020683e8(irq);return 4;case 3:default:FUN_0202e834(11);FUN_020683e8(irq);return 7;}
 }
 FUN_020683e8(irq);return 3;
}
