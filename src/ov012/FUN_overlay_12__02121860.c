// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern char DAT_0211a51c[];
extern int DAT_0211a3c4[];
extern unsigned short DAT_0211a3b8;
// FUN_overlay_12__02121860 @ 0x02121860 (0x3bc including interior pools, thumb)
// check: 2.0/sp2p3 target=0x3bc candidate=0x3a8 words=999 exact_bytes=999 bad_relocs=8
// near: ndiff=999/239 size=0x3bc vers=2.0/sp2p3 next="nested boolean branches, dialog stack argument scheduling and literal layout"
extern int FUN_overlay_12__021205ec(void *,int),FUN_overlay_12__021206b4(void *),FUN_overlay_12__0212068c(void *),FUN_overlay_12__02120678(void *),FUN_overlay_12__0212064c(void *),FUN_overlay_12__02121834(void *),FUN_overlay_12__0211f7e0(void);
extern void FUN_overlay_12__0212055c(void *,int),FUN_overlay_12__02120664(void *),FUN_overlay_12__02121c1c(void *),FUN_overlay_12__02121d58(void *),FUN_overlay_12__02121d70(void *,int);
extern int FUN_02084c1c(void *),FUN_02084be4(void *),FUN_02084bf8(void *),FUN_02084be8(void *),FUN_020788c0(void),FUN_0207890c(void);
extern const char *FUN_overlay_12__02121fc8(int,int);
extern void FUN_overlay_12__02121cd8(void *,int,int,const char *,int,int,int,int,void (*)(void));
extern void FUN_overlay_12__02121e68(void),FUN_overlay_12__02121e84(void),FUN_overlay_12__02121e48(void);
extern void FUN_020c193c(int,int,int,int,int);
#define W(n) (*(int *)(self+(n)))
#define G ((void *)DAT_0211a51c)
#define SHOW(id,style,choice,callback) FUN_overlay_12__02121cd8(self,0,0,FUN_overlay_12__02121fc8(1,id),0,style,choice,1,callback)
int FUN_overlay_12__02121860(char *self,int *event)
{
    int previous=W(3220),selected,accepted,state;
    W(3220)=*event;selected=FUN_overlay_12__021205ec(self+72,*event);
    accepted=1;
    switch((unsigned)*event) {
    case 0:
        if(!FUN_overlay_12__021206b4(self+72)){accepted=0;break;}
        FUN_overlay_12__0212055c(self+72,selected);W(3116)=selected;
        if(selected==0) {
            if(FUN_02084c1c(G) && FUN_02084be4(G)==1){accepted=FUN_overlay_12__02121834(self);break;}
            if(FUN_02084bf8(G) && !FUN_overlay_12__0211f7e0()) {if(W(3260))*event=4;break;}
            if((DAT_0211a3c4[2]>=0)?E1:E0){SHOW(2,3,1,FUN_overlay_12__02121e68);break;}
            if(!FUN_overlay_12__0212068c(self+72)){SHOW(4,2,-1,FUN_overlay_12__02121e84);FUN_020c193c(0,5,0,0,-1);break;}
            if(FUN_020788c0()==3){SHOW(15,2,-1,FUN_overlay_12__02121e84);FUN_020c193c(0,5,0,0,-1);break;}
            W(3224)++;W(88)=W(3224);*event=1;
        }else if(selected==1) {
            if(FUN_02084c1c(G) && FUN_02084be4(G)!=1 && !FUN_overlay_12__0211f7e0()){accepted=FUN_overlay_12__02121834(self);break;}
            if(W(3260)){*event=4;break;}
            if(FUN_0207890c() && !((DAT_0211a3b8&2)?E1:E0)){SHOW(3,3,1,FUN_overlay_12__02121e68);break;}
            if(!FUN_overlay_12__02120678(self+72)){SHOW(5,2,-1,FUN_overlay_12__02121e84);FUN_020c193c(0,5,0,0,-1);break;}
            if(FUN_020788c0()==3){SHOW(14,2,-1,FUN_overlay_12__02121e84);FUN_020c193c(0,5,0,0,-1);break;}
            W(3224)++;W(88)=W(3224);*event=1;
        }else if(selected==2) {
            if(FUN_02084c1c(G) && FUN_02084be4(G)!=1 && FUN_overlay_12__0211f7e0()){accepted=FUN_overlay_12__02121834(self);break;}
            if(FUN_02084be8(G))*event=7;else accepted=0;
        }
        break;
    case 1:
        W(3224)++;W(88)=W(3224);W(96)=selected;W(80)=0;
        if(W(92)==0)*event=2;else if(W(92)==1)*event=3;else FUN_overlay_12__02121d58(self);
        break;
    case 2:case 3:
        W(80)=selected;state=FUN_020788c0();
        switch(state){
        case 4:FUN_overlay_12__02121cd8(self,0,*event,FUN_overlay_12__02121fc8(1,16),0,3,1,1,FUN_overlay_12__02121e48);break;
        case 0:FUN_overlay_12__02121d70(self,*event);break;
        }
        break;
    case 5:
        if(!FUN_overlay_12__0212064c(self+72)){accepted=0;break;}
        FUN_020c193c(0,0,0,0,-1);FUN_overlay_12__02120664(self+72);FUN_overlay_12__02121c1c(self+72);FUN_overlay_12__02121d58(self);*event=7;break;
    case 6:break;
    }
    if(accepted)W(3212)=0;else W(3220)=previous;
    return accepted;
}
