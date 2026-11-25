// flags: -O4,s
typedef struct {int x,y,z;} V;
extern void FUN_02036348(void *,void *,void *),FUN_02037390(void *,void *);
extern void *DAT_0210e24c,*DAT_02108cf4;
extern int FUN_02051bd4(void *,int),FUN_02051c10(void *);
extern void *FUN_020352a4(void *,int);
extern char *FUN_020352c0(void *);
enum { E0 = 0, E1 = 1 };
int FUN_02086cb8(V *position,int *threshold){
    void *manager=DAT_0210e24c;
    int count=FUN_02051c10(manager);
    int start=FUN_02051bd4(manager,0);
    int total,i,d;
    V a,b;
    char *p;
    if(start==-1)return 0;
    total=0;
    for(i=0;i<count;i++,start++){
        p=FUN_020352c0(FUN_020352a4(DAT_02108cf4,start));
        if(p && *(char **)(p+16) && !((*(int *)(*(char **)(p+16)+44)&2)?E1:E0)){
            a=*(V *)(p+56);
            FUN_02036348(&b,&a,position);
            FUN_02037390(&d,&b);
            if((*threshold>d)?E1:E0)total++;
        }
    }
    return total;
}
