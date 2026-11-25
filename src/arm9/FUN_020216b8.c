// flags: -O4,s -noThumb
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
extern u8 DAT_02107054[],DAT_020f6950[];
extern void FUN_02065774(const void *,void *,u32);
#define G(n) (*(volatile u32 *)(DAT_02107054+(n)))
#define BUFFER ((u8 *)G(88))
void FUN_020216b8(const void *first,const void *second,const u8 *packet,u32 length,const void *extra,u32 extra_length)
{
    u32 total,next;
    u16 stride;
    u8 *initial=BUFFER;
    if(!initial||!G(92))return;
    total=length+extra_length;
    if(total<8||total>1508)return;
    if(packet[0]!=DAT_020f6950[0]||packet[1]!=DAT_020f6950[1]||packet[2]!=DAT_020f6950[2]||packet[6]!=8)return;
    if(packet[7]!=0&&packet[7]!=6)return;
    stride=(u16)((total+9)&~1u);
    next=G(40)+stride;
    if(G(40)<G(48)&&G(48)<=next)return;
    if(next==G(92)){next=0;if(!G(48))return;}
    else if(next>G(92)){next=stride;if(G(48)<=stride)return;}
    if(G(40)+stride>G(92)){
        if(G(92)-G(40)>=2)*(u16 *)(initial+G(40))=0;
        G(40)=0;
    }
    *(u16 *)(BUFFER+G(40))=stride;
    FUN_02065774(second,BUFFER+G(40)+2,6);
    FUN_02065774(first,BUFFER+G(40)+8,6);
    FUN_02065774(packet+6,BUFFER+G(40)+14,length-6);
    if(extra&&extra_length)FUN_02065774(extra,BUFFER+G(40)+8+length,extra_length);
    G(40)=next;
}
