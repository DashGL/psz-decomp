// flags: -O4,p -noThumb
// FUN_020134d0 @ 0x020134d0 (0x22c, ARM)
// check: vers=2.0/sp2p3 target=0x22c candidate=0x228 words=999 exact_bytes=999 bad_relocs=2
// near: ndiff=999/139 size=0x22c vers=2.0/sp2p3 next="match register coloring, boolean lowering, and scheduling against saved ROM disassembly"
// Upload graphics resource and initialize its destination descriptor.
typedef unsigned int u32;typedef unsigned short u16;
extern void FUN_0206740c(const void *,u32),FUN_0205f7e4(void),FUN_0205f840(const void *,u32,u32),FUN_0205f980(void),FUN_0205ed6c(const void *,u32,u32),FUN_0205edc4(const void *,u32,u32),FUN_02013454(u32 *,int,u32);
void FUN_020134d0(unsigned char *resource,u32 offset,int mode,u32 *output){u32 flags=*(u32 *)(resource+8);u32 dimension;
 switch(mode){case 0:break;case 1:*(volatile u32 *)0x04000000=(*(volatile u32 *)0x04000000&0xffcfffef)|flags;break;case 2:*(volatile u32 *)0x04001000=(*(volatile u32 *)0x04001000&0xffcfffef)|flags;break;}
 FUN_0206740c(*(void **)(resource+20),*(u32 *)(resource+16));
 switch(mode){case 0:FUN_0205f7e4();FUN_0205f840(*(void **)(resource+20),offset,*(u32 *)(resource+16));FUN_0205f980();break;case 1:FUN_0205ed6c(*(void **)(resource+20),offset,*(u32 *)(resource+16));break;case 2:FUN_0205edc4(*(void **)(resource+20),offset,*(u32 *)(resource+16));break;}
 if(*(u32 *)(resource+8)==0){
 switch(*(u16 *)(resource+2)){case 1:dimension=0;break;case 2:dimension=1;break;case 4:dimension=2;break;case 8:dimension=3;break;case 16:dimension=4;break;case 32:dimension=5;break;default:dimension=0;break;}output[3]=dimension;
 switch(*(u16 *)resource){case 1:dimension=0;break;case 2:dimension=1;break;case 4:dimension=2;break;case 8:dimension=3;break;case 16:dimension=4;break;case 32:dimension=5;break;default:dimension=0;break;}output[4]=dimension;
 }else{output[3]=*(u16 *)(resource+2);output[4]=*(u16 *)resource;}
 output[5]=*(u32 *)(resource+4);output[6]=0;output[7]=1;output[8]=*(u32 *)(resource+8);FUN_02013454(output,mode,offset);
}