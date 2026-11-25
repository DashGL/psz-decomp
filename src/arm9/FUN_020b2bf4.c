// flags: -O4,s
extern unsigned int FUN_020832b4(int);
extern unsigned char *FUN_02083534(void *,unsigned int);
extern int FUN_02083308(void *,int),FUN_020825f8(void *,int,int);
extern void FUN_020b2854(void *,int,int);
enum { E0 = 0, E1 = 1 };
void FUN_020b2bf4(int *s,unsigned int *source){
    unsigned int chance=0;
    int v=((signed char *)s[4])[8];
    unsigned int count,i;
    unsigned char *p;
    if(v>=0 && v<=100)chance=v;
    count=source[20];
    for(i=0;i<count;i++){
        p=FUN_02083534(source,i);
        if(p && !((p[0]&4)?E1:E0) && !((p[0]&8)?E1:E0) && FUN_020832b4(100)<chance){
            int j,selected=*(int *)(p+8);
            for(j=0;j<4;j++){
                if(FUN_02083308(p,j)>=0 && !FUN_020825f8(p,j,7) && selected!=j)FUN_020b2854(p,j,4);
            }
        }
    }
}
