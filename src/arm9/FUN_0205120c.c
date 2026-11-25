// flags: -O4,s
typedef struct{unsigned int w[5];} Record;
extern char *DAT_02108c64;
extern int FUN_0206d45c(void *);
extern int FUN_020330dc(void *);
extern int FUN_0203306c(void *);
extern void *FUN_02031a74(void);
extern void FUN_02031f88(void *,int,int,int,int);
enum { E0 = 0, E1 = 1 };
void FUN_0205120c(char *s,int a,int b){
    char *m=DAT_02108c64;
    if((*(signed char *)(m+20)==1)?E1:E0){
        Record r;
        char *m2=DAT_02108c64;
        int y,x;
        r.w[0]=*(unsigned int *)(m2+36);
        r.w[1]=*(unsigned int *)(m2+40);
        r.w[2]=*(unsigned int *)(m2+44);
        r.w[3]=*(unsigned int *)(m2+48);
        r.w[4]=*(unsigned int *)(m2+52);
        y=*(signed char *)(m+22);
        x=*(signed char *)(m+21);
        if((x==a && y==b)?E1:E0){
            if(FUN_0206d45c(&r)&&!FUN_020330dc(m)&&FUN_0203306c(m)){
                *(int *)(s+108)=a;
                *(int *)(s+112)=b;
                return;
            }
            if(*(void **)(s+100)){
                *(int *)(*(char **)(s+100)+72)=1;
                return;
            }
        }
    }
    FUN_02031f88(FUN_02031a74(),a,b,0,1);
}
