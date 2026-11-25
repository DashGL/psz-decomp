// flags: -O4,s
typedef struct{int x,y,z;} Vector;
#pragma thumb off
extern void FUN_0200c938(void *,unsigned int);
extern int FUN_0200a3a0(int,int);
#pragma thumb on
extern void *FUN_02034680(void *,void *);
extern unsigned int FUN_0208546c(void);
extern int FUN_02078188(unsigned int);
extern char *FUN_0204daa8(unsigned int);
extern char *DAT_02108c84;
void FUN_0204ac70(char *s){
    Vector a,b,temp;
    char *m;
    unsigned int id;
    int x,z,sum;
    FUN_0200c938(&a,12);
    FUN_0200c938(&b,12);
    m=DAT_02108c84;
    if(m){
        char *p=*(char **)(m+64+4**(int *)(m+100));
        if(p){
            temp=*(Vector *)(p+24);
            FUN_02034680(&a,&temp);
        }
    }
    id=FUN_0208546c();
    if(FUN_02078188(id)){
        char *p=FUN_0204daa8(id);
        if(p)FUN_02034680(&b,p+180);
    }
    x=*(volatile int *)&a.x-b.x;
    z=a.z-b.z;
    if(x<0)x*=-1;
    if(z<0)z*=-1;
    sum=(x>>8)*(x>>8)+(z>>8)*(z>>8);
    *(int *)(s+100)=FUN_0200a3a0(sum*5,10);
}
