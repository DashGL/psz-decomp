// flags: -O4,s
enum { E0 = 0, E1 = 1 };
// near: Full semantics; parked for key/field reload and register scheduling.
// check: 2.0/sp2p3 target=0x2a8 candidate=0x29c words=999 exact_bytes=999 bad_relocs=3
extern void FUN_overlay_12__0212fc60(void *),FUN_overlay_12__02130468(void *),FUN_overlay_12__02130684(void *),FUN_overlay_12__021306c0(void *);
extern int FUN_020bbf94(unsigned),FUN_020bbfa8(unsigned),FUN_020bbf6c(unsigned),FUN_02098d84(const void *),FUN_02038404(void *,int),FUN_020387ac(void *),FUN_0204fbb4(void *),FUN_0204fbd0(void *),FUN_02044ec4(void *,void *,int);
extern void FUN_020c193c(int,int,int,int,int),FUN_0204f3d4(void),FUN_02038084(void *,unsigned short);
extern void *FUN_0204f3b8(void),*FUN_02045990(void *,const void *),*FUN_0203955c(void *),*FUN_0204f400(void *,int,const void *);
extern const int DAT_0213e600;
void FUN_overlay_12__0212fd1c(int *self)
{
    unsigned char *keys,*key;
    int *child,*part;
    void *parent;
    int variant,old,i,current;
    unsigned item[4];
    unsigned short angle;
    if(!self[54]){
        FUN_overlay_12__0212fc60(self);
        keys=(unsigned char *)self[39];
        if(keys){
            key=keys+4*self[44];
            if(key[1]==17){
                variant=key[2];old=variant;
                if(FUN_020bbf94(16)){FUN_020c193c(0,2,0,0,-1);variant++;}
                else if(FUN_020bbf94(32)){FUN_020c193c(0,2,0,0,-1);variant--;}
                if(variant<0)variant=4;else if(variant>=5)variant=0;
                if(variant!=old)for(i=0;i<self[19];i++){
                    if((FUN_02098d84((char *)self[39]+4*i)==-1?E1:E0)==0)((unsigned char *)self[39])[4*i+2]=(unsigned char)variant;
                }
            }
        }
    }
    if(!self[48]||!self[39])return;
    key=(unsigned char *)self[39]+4*self[44];
    FUN_0204f3b8();FUN_0204f3d4();
    switch(self[49]){
    case 0:
        FUN_02038404((void *)self[48],key[1]);self[49]=1;return;
    case 1:
        if(FUN_020387ac((void *)self[48]))return;
        self[49]=2;
    case 2:break;
    default:return;
    }
    current=FUN_02098d84(key);
    if(current!=FUN_02098d84(self+40)){
        FUN_02045990(self+40,key);FUN_overlay_12__02130468(self);self[41]=DAT_0213e600;
    }else if(self[41]>0){
        if(self[50])FUN_overlay_12__02130468(self);
        else{
            --self[41];
            if(!self[41]){
                FUN_0203955c(item);FUN_02045990(item,key);
                self[50]=(int)FUN_0204f400(FUN_0204f3b8(),0,item);self[51]=0;self[52]=0;
            }
        }
    }
    if(!self[50])return;
    parent=*(void **)((char *)self[48]+140);
    if((key[1]==17?E1:E0)==0&&!self[51]&&FUN_0204fbb4((void *)self[50])){
        child=(int *)self[50];part=(int *)child[5];
        if(part&&part[12])self[51]=FUN_02044ec4((void *)part[12],parent,8);
    }
    if(!self[52]&&FUN_0204fbd0((void *)self[50])){
        child=(int *)self[50];part=(int *)child[6];
        if(part&&part[12])self[52]=FUN_02044ec4((void *)part[12],parent,5);
    }
    angle=*(unsigned short *)((char *)self[48]+192);
    if(FUN_020bbfa8(512))angle+=768;
    else if(FUN_020bbfa8(256))angle-=768;
    FUN_02038084((void *)self[48],angle);
    if(FUN_020bbf6c(1024))FUN_overlay_12__02130684(self);
    FUN_overlay_12__021306c0(self);
}
