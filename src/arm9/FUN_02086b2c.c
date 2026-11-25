// flags: -O4,s
typedef struct {int x,y,z;} V;
extern void FUN_02036348(void *,void *,void *),FUN_02037390(void *,void *);
extern void *DAT_0210e24c,*DAT_02108cf4;
extern int FUN_02051bd4(void *,int),FUN_02051c10(void *);
extern void *FUN_020352a4(void *,int);
extern char *FUN_020352c0(void *);
enum { E0 = 0, E1 = 1 };
int FUN_02086b2c(int excluded,V *position){
    void *manager=DAT_0210e24c;
    int start=FUN_02051bd4(manager,0);
    int count=FUN_02051c10(manager);
    int best,dist,i,d;
    V a,b;
    char *p;
    if(start==-1)return -1;
    best=-1;
    dist=0x0ffff000;
    for(i=0;i<count;i++,start++){
        if(start!=excluded){
            p=FUN_020352c0(FUN_020352a4(DAT_02108cf4,start));
            if(p && *(char **)(p+16) && !((*(int *)(*(char **)(p+16)+44)&2) ? E1 : E0)){
                a=*(V *)(p+56);
                FUN_02036348(&b,&a,position);
                FUN_02037390(&d,&b);
                if((dist>d) ? E1 : E0){
                    dist=*(volatile int *)&d;
                    best=start;
                }
            }
        }
    }
    return best;
}
