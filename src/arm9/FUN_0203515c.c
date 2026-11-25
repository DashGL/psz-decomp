// flags: -O4,s
extern unsigned int FUN_020bc88c(void *);
extern int FUN_02034ee0(void *,void *),FUN_020bc8d4(void *,void *,void (*)(void),void *);
extern void FUN_020351f4(void);
void *FUN_0203515c(char *s,int *point,unsigned int kind){
    int pair[2],i,blocked,result;
    void *answer;
    int touched;
    unsigned int shift;
    if(!*(void **)(s+12))return 0;
    *(unsigned int *)(s+8)=0;
    *(unsigned short *)(s+4)=kind;
    {
        int pz=*(volatile int *)(point+2);
        int px=point[0];
        pair[1]=pz;
        pair[0]=px;
    }
    shift=FUN_020bc88c(*(void **)(s+12));
    pair[0]>>=shift;
    pair[1]>>=shift;
    answer=0;
    blocked=0;
    touched=0;
    for(i=0;i<11;i++){
        result=FUN_02034ee0(s+16+52*i,pair);
        if(result==2){blocked=1;break;}
        if(result==1)touched=1;
    }
    if(!blocked && FUN_020bc8d4(*(void **)(s+12),pair,FUN_020351f4,s) && *(unsigned int *)(s+8)){
        if(touched)*(unsigned int *)s|=0x10000;
        answer=s;
    }
    return answer;
}
