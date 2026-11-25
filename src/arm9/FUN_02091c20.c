// flags: -O4,s
typedef struct {int x,y,z;} V;
extern int FUN_02091d38(void *,int *,int *);
extern void FUN_020bc610(void *,void *,void *),FUN_02091cc0(void *,void *,void *);
int FUN_02091c20(char *s,V *out,int *position){
    V c,b,a;
    int index,factor,delta,span,other;
    int *knots;
    if(!*(void **)(s+12))return 0;
    index=0;
    if(!FUN_02091d38(s,&index,position))return 0;
    knots=*(int **)(s+48);
    int k0=knots[index];
    span=knots[index+1]-k0;
    delta=*position-k0;
    FUN_020bc610(&factor,&delta,&span);
    {
        int next=index+1;
        FUN_02091cc0(&a,*(V **)(s+12)+next,&factor);
    }
    other=4096-factor;
    FUN_02091cc0(&b,*(V **)(s+12)+index,&other);
    c.x=b.x+a.x;c.y=b.y+a.y;c.z=b.z+a.z;
    *out=c;
    return 1;
}
