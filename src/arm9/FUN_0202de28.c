// FUN_0202de28 @ 0x0202de28 (0x204, ARM)
// check: vers=2.0/sp2p3 target=0x204 candidate=0x1f4 words=999 exact_bytes=999 bad_relocs=4
// near: ndiff=999/129 size=0x204 vers=2.0/sp2p3 next="match register coloring, boolean lowering, and scheduling against saved ROM disassembly"
// flags: -O4,p -noThumb
// Configure wireless connection descriptor and submit asynchronous request.
typedef unsigned char u8;typedef unsigned short u16;typedef unsigned int u32;
extern u8 *UNK_02108c0c;
extern u32 FUN_020683d4(void),FUN_0202e388(u32);
extern void FUN_020683e8(u32),FUN_020656b8(void *,int,u32),FUN_02065774(const void *,void *,u32),FUN_0202e834(int),FUN_0202ea58(void *);
extern int FUN_02055798(void (*)(void *),u32,u32,u32,u16);
int FUN_0202de28(const u8 *descriptor,const u8 *security,u32 flags){u32 irq=FUN_020683d4();int result;
 if(!UNK_02108c0c){FUN_020683e8(irq);return 1;}
 switch(*(int *)(UNK_02108c0c+8800)){
 case 3:
 if(!descriptor){FUN_020683e8(irq);return 1;}
 if(*(u16 *)(descriptor+60)!=0){FUN_020683e8(irq);return 1;}
 if(security){if(security[0]>=4||security[1]>=4){FUN_020683e8(irq);return 1;}
 UNK_02108c0c[8784]=security[0];UNK_02108c0c[8785]=security[1];
 if(UNK_02108c0c[8784]==0)FUN_020656b8(UNK_02108c0c+8704,0,80);else FUN_02065774(security+2,UNK_02108c0c+8704,80);
 }else FUN_020656b8(UNK_02108c0c+8704,0,82);
 FUN_02065774(descriptor,UNK_02108c0c+8512,192);
 *(u16 *)(UNK_02108c0c+8560)=*(u16 *)(UNK_02108c0c+8558)|3;
 FUN_0202e388(flags);break;
 case 8:FUN_020683e8(irq);return 2;
 case 9:FUN_020683e8(irq);return 0;
 default:FUN_020683e8(irq);return 1;
 }
 result=FUN_02055798(FUN_0202ea58,65535,80,65535,65535);
 switch(result){case 2:FUN_0202e834(8);*(u16 *)(UNK_02108c0c+8832)=5;break;case 8:FUN_020683e8(irq);return 4;case 3:default:FUN_0202e834(11);FUN_020683e8(irq);return 7;}
 FUN_020683e8(irq);return 3;
}
