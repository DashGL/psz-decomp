// flags: -O4,s
typedef struct { int pad; unsigned short counts[69]; } Profile;
extern void *FUN_020a0ce8(void);
extern void FUN_020a15a4(void *,int,unsigned,int);
extern unsigned FUN_020a1368(void *);
extern int FUN_overlay_12__0212cc94(void *),FUN_overlay_12__0212d8ac(void *,const void *);
int FUN_overlay_12__0212d08c(int *self)
{
    char *progress,*profile,*first_profile,*records;Profile *prof;
    int count=0,i,value;
    prof=(Profile *)((char *)FUN_020a0ce8()+236);
    for(i=0;i<69;i++){
        int ok;
        if((prof->counts[i]&32767)>0){
            if(!(prof->counts[i]&32768)) ok=1; else ok=0;
        } else ok=0;
        if(ok>0){
            prof->counts[i]|=32768;((unsigned char *)self)[40+count]=i;count++;
        }
    }
    self[56]=count;
    progress=(char *)FUN_020a0ce8()+36;first_profile=FUN_020a0ce8();profile=first_profile+236;records=(char *)FUN_020a0ce8()+604;
    FUN_020a15a4(records,*(int *)(profile+144),~0u,0);
    FUN_020a15a4(records,*(int *)(profile+148),~0u,1);
    FUN_020a15a4(records,*(short *)(profile+142),~0u,2);
    FUN_020a15a4(records,*(unsigned char *)(profile+160),~0u,3);
    FUN_020a15a4(records,*(int *)(first_profile+236),~0u,4);
    FUN_020a15a4(records,*(unsigned short *)(profile+126)&32767,~0u,5);
    FUN_020a15a4(records,*(unsigned short *)(profile+128)&32767,~0u,6);
    FUN_020a15a4(records,*(unsigned short *)(profile+134)&32767,~0u,7);
    FUN_020a15a4(records,*(unsigned short *)(profile+136)&32767,~0u,8);
    FUN_020a15a4(records,*(unsigned short *)(profile+140)&32767,~0u,9);
    FUN_020a15a4(records,FUN_020a1368(progress),~0u,10);
    FUN_020a15a4(records,*(unsigned char *)(profile+153),~0u,11);
    count=0;for(i=0;i<12;i++)if(*(unsigned *)(records+720)&(1u<<i)){((unsigned char *)self)[109+count]=i;count++;}
    self[57]=count;
    count=0;for(i=0;i<100;i++){
        value=FUN_overlay_12__0212cc94(self);if(value==-1)break;
        ((unsigned char *)self)[121+count]=value;count++;
    }
    self[58]=count;
    if(!self[56]&&!self[57]&&!self[58])return 0;
    self[9]=FUN_overlay_12__0212d8ac(self,(char *)self+40);return 1;
}
