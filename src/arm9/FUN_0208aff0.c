// flags: -O2,s
typedef struct {unsigned short v[6];} Icons;
extern Icons DAT_020f3ec8;
extern int FUN_0208b09c(void *,void *);
extern void FUN_020c331c(int,int,int,int),FUN_020c3788(void *,void *,int,int,int);
extern void *FUN_0209e1a8(int,int);
void FUN_0208aff0(int *s,unsigned char *entry){
    Icons icons;
    unsigned int i;
    int index,selected,x;
    unsigned char *ep;
    void *p;
    FUN_020c331c(63,0xb0000,0xfb000,s[8]);
    index=FUN_0208b09c(s,entry);
    if(!s[14]){
        p=FUN_0209e1a8((entry+index)[2],0);
        if(p){
            FUN_020c3788((void *)s[13],p,72,12,2);
            s[14]=1;
        }
    }
    icons=DAT_020f3ec8;
    ep=entry+index;
    selected=ep[2]-31;
    x=0xae000;
    for(i=0;i<6;i++,x+=0xb000){
        if(selected==i || ep[2]==39)FUN_020c331c(icons.v[i],x,0x113000,s[8]);
        else FUN_020c331c(84,x,0x113000,s[8]);
    }
}
