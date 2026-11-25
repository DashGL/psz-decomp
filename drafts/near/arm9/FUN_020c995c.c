// flags: -O4,s
// check: 2.0/sp2p3 target=0x9d4 candidate=0x4f0 words=999 exact_bytes=999 bad_relocs=22
// near: ndiff=999/629 size=0x9d4 vers=2.0/sp2p3 next="Thumb repeated frame-unwind tails and message-case layout; preserve full parent CFG through shared interior blocks and epilogue"
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
#define W(p,o) (*(u32 *)((u8 *)(p)+(o)))
#define H(p,o) (*(u16 *)((u8 *)(p)+(o)))
extern const char DAT_020fd100[];
extern const char DAT_020fd108[];
extern const char DAT_020fd138[];
extern const char DAT_020fd13c[];
extern const char DAT_020fd144[];
extern const char DAT_020fd154[];
extern const char DAT_020fd15c[];
extern const char DAT_020fd168[];
extern const char DAT_020fd16c[];
extern const char DAT_020fd174[];
extern const char DAT_020fd17c[];
extern const char DAT_020fd184[];
extern const char DAT_020fd188[];
extern const char DAT_020fd190[];
extern const char DAT_020fd194[];
extern int FUN_020d191c(char *,const char *,char *,int),FUN_02005898(const char *);
extern void FUN_020d1b58(u8 **,int,const char *),FUN_020cb778(u8 **,int,int),FUN_020d1b74(u8 **,const char *);
extern u32 FUN_020c7788(u32),FUN_02003c70(const char *);
extern u8 *FUN_020c7bcc(u32),*FUN_020cf714(u8 **,int);
extern char *FUN_02003c8c(char *,const char *),*FUN_02003fa8(const char *,const char *),*FUN_020c77cc(char *);
extern void FUN_020c7bec(void *),FUN_020d183c(char *,const char *,int),FUN_020cf9c0(u8 *);
extern int FUN_020cb81c(u8 **,u32,u32,u8 *,void *,int);
extern int FUN_020ca9a8(u8 **,u32,u32,const char *,u32,u32);
#define GET(key) do {if(!FUN_020d191c(message,DAT_##key,body,4096))goto malformed;}while(0)
int FUN_020c995c(u8 **owner,char *message)
{
    u8 *state=*owner,*response,*profile,*record;
    char workspace[4368],*small=workspace,*temp=workspace+16,*body=workspace+272,*mark;
    u32 time,callback,context,offset,size,kind,a,b,c,d;
    int type,id,i;
    GET(020fd100);type=FUN_02005898(body);
    GET(020fd138);id=FUN_02005898(body);
    if(FUN_020d191c(message,DAT_020fd13c,body,4096))time=FUN_02005898(body);else time=FUN_020c7788(0);
    switch(type){
    case 1:case 5:
        offset=type==1?0x1c0:0x1c8;callback=W(state,offset);context=W(state,offset+4);
        if(!callback)return 0;
        response=FUN_020c7bcc(12);if(!response)goto oom;
        GET(020fd154);
        W(response,8)=(u32)FUN_020c7bcc(FUN_02003c70(body)+1);if(!W(response,8))goto oom;
        FUN_02003c8c((char *)W(response,8),body);W(response,0)=id;W(response,4)=time;
        return FUN_020cb81c(owner,callback,context,response,0,type==1?2:11);
    case 2:
        profile=FUN_020cf714(owner,id);if(!profile)goto oom;
        GET(020fd154);mark=FUN_02003fa8(body,DAT_020fd15c);if(!mark)goto malformed;
        *mark=0;if(FUN_02003c70(mark+8)!=32)goto malformed;
        FUN_020c7bec((void *)W(profile,20));W(profile,20)=0;
        W(profile,20)=(u32)FUN_020c77cc(mark+8);W(profile,24)++;
        callback=W(state,0x1b0);context=W(state,0x1b4);if(!callback)return 0;
        response=FUN_020c7bcc(1036);if(!response)goto oom;
        FUN_020d183c((char *)response+8,body,1025);W(response,0)=id;W(response,4)=time;
        return FUN_020cb81c(owner,callback,context,response,0,6);
    case 4:case 6:
        offset=type==4?0x1e0:0x1e8;callback=W(state,offset);context=W(state,offset+4);if(!callback)return 0;
        response=FUN_020c7bcc(8);if(!response)goto oom;
        W(response,0)=id;W(response,4)=time;
        return FUN_020cb81c(owner,callback,context,response,0,type==4?10:12);
    case 100:
        profile=FUN_020cf714(owner,id);if(!profile)goto oom;
        if(!W(profile,8)){
            W(profile,8)=(u32)FUN_020c7bcc(28);if(!W(profile,8))goto oom;
            for(i=0;i<28;i++)((u8 *)W(profile,8))[i]=0;
            if(W(profile,12)){
                W((void *)W(profile,8),0)=W((void *)W(profile,12),0);
                FUN_020cf9c0((u8 *)W(profile,12));W(profile,12)=0;
            }else{
                a=W(state,0x5d0);W(state,0x5d0)=a+1;W((void *)W(profile,8),0)=a;
            }
        }
        record=(u8 *)W(profile,8);GET(020fd154);
        if(!FUN_020d191c(body,DAT_020fd168,small,16))goto malformed;
        W(record,4)=FUN_02005898(small);
        FUN_020c7bec((void *)W(record,8));W(record,8)=0;
        if(!FUN_020d191c(body,DAT_020fd16c,temp,256))temp[0]=0;
        W(record,8)=(u32)FUN_020c77cc(temp);if(!W(record,8))goto oom;
        FUN_020c7bec((void *)W(record,12));W(record,12)=0;
        if(!FUN_020d191c(body,DAT_020fd174,temp,256))temp[0]=0;
        W(record,12)=(u32)FUN_020c77cc(temp);if(!W(record,12))goto oom;
        if(!FUN_020d191c(body,DAT_020fd17c,small,16))W(record,16)=0;
        else{
            a=FUN_02005898(small);b=FUN_02005898(small);c=FUN_02005898(small);d=FUN_02005898(small);
            W(record,16)=(a<<24)|((b<<8)&0xff0000)|(c>>24)|((d>>8)&0xff00);
        }
        if(!FUN_020d191c(body,DAT_020fd184,small,16))H(record,20)=0;
        else{a=(u16)FUN_02005898(small);H(record,20)=((a>>8)&255)|((a<<8)&0xff00);}
        if(!FUN_020d191c(body,DAT_020fd188,small,16))W(record,24)=0;else W(record,24)=FUN_02005898(small);
        callback=W(state,0x1b8);context=W(state,0x1bc);if(!callback)return 0;
        response=FUN_020c7bcc(12);if(!response)goto oom;
        W(response,0)=id;W(response,8)=W(record,0);W(response,4)=time;
        return FUN_020cb81c(owner,callback,context,response,0,5);
    case 101:
        GET(020fd154);mark=FUN_02003fa8(body,DAT_020fd184);if(!mark || !mark[3])goto malformed;
        a=FUN_02005898(mark+3);mark=FUN_02003fa8(body,DAT_020fd190);
        if(mark)FUN_020d183c(temp,mark+3,256);else temp[0]=0;
        callback=W(state,0x1d0);context=W(state,0x1d4);if(!callback)return 0;
        response=FUN_020c7bcc(264);if(!response)goto oom;
        W(response,0)=id;W(response,4)=a;FUN_02003c8c((char *)response+8,temp);
        return FUN_020cb81c(owner,callback,context,response,0,0);
    case 102:
        GET(020fd154);FUN_020ca9a8(owner,id,103,DAT_020fd194,0,0);break;
    }
    return 0;
oom:FUN_020d1b74(owner,DAT_020fd144);return 1;
malformed:FUN_020d1b58(owner,1,DAT_020fd108);FUN_020cb778(owner,3,1);return 3;
}
