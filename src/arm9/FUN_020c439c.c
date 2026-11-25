// flags: -O4,s
#pragma thumb off
extern void FUN_0200c938(void *,unsigned int);
#pragma thumb on
extern unsigned int FUN_020c3f6c(const signed char *,unsigned int);
extern unsigned int FUN_020c3f00(signed char *,const signed char *,unsigned int);
extern signed char *FUN_020c3ec4(signed char *,const signed char *,unsigned int);
void FUN_020c439c(signed char *text,unsigned int width,unsigned int fraction,int side,unsigned int capacity) {
    signed char original[64],padding[64];
    unsigned int length,i;
    if(!text || !side)return;
    i=0;
    FUN_0200c938(original,64);FUN_0200c938(padding,64);
    length=FUN_020c3f6c(text,128);
    for(;i<width-length;i++)padding[i]=' ';
    FUN_020c3f00(original,text,length);
    i=0;while(original[i]!='.')i++;
    original[i+1+fraction]=0;
    if(side==2) {
        FUN_020c3f00(text,padding,capacity);FUN_020c3ec4(text,original,capacity);
    } else if(side==1) {
        FUN_020c3f00(text,original,capacity);FUN_020c3ec4(text,padding,capacity);
    }
}
