// flags: -noThumb
typedef unsigned long long u64;
#define P(a,b) ((u64)((long long)(a)*(long long)(b)))
#define MINOR(a,b,c,d,r) ((int)((P(a,b)-P(c,d)+(r))>>12))
#define SCALE(a,b) ((int)(P(a,b)>>12))
#define NEG(a) ((int)(0u-(unsigned int)(a)))
extern void FUN_0205c638(int);
extern int FUN_0205c600(void);
extern void FUN_02065668(const void *,void *);
int FUN_0205b300(const int *m,int *output)
{
    int temporary[12], *d;
    int a,b,c;
    if(m==output) d=temporary; else d=output;
    a=MINOR(m[4],m[8],m[5],m[7],2048); b=MINOR(m[3],m[8],m[5],m[6],2048); c=MINOR(m[3],m[7],m[4],m[6],2048);
    int determinant=(int)((P(m[0],a)-P(m[1],b)+P(m[2],c)+2048)>>12);
    int e,f,g,h,inverse;
    if(determinant==0)return -1;
    FUN_0205c638(determinant);
    e=MINOR(m[1],m[8],m[7],m[2],0);
    f=MINOR(m[1],m[5],m[4],m[2],0);
    g=MINOR(m[0],m[8],m[6],m[2],0);
    h=MINOR(m[0],m[5],m[3],m[2],0);
    inverse=FUN_0205c600();
    d[0]=SCALE(inverse,a);
    d[1]=NEG(SCALE(inverse,e));
    d[2]=SCALE(inverse,f);
    d[3]=NEG(SCALE(inverse,b));
    d[4]=SCALE(inverse,g);
    d[5]=NEG(SCALE(inverse,h));
    d[6]=SCALE(inverse,c);
    d[7]=NEG(SCALE(inverse,MINOR(m[0],m[7],m[6],m[1],0)));
    d[8]=SCALE(inverse,MINOR(m[0],m[4],m[3],m[1],0));
    d[9]=NEG((int)((P(d[0],m[9])+P(d[3],m[10])+P(d[6],m[11]))>>12));
    d[10]=NEG((int)((P(d[1],m[9])+P(d[4],m[10])+P(d[7],m[11]))>>12));
    d[11]=NEG((int)((P(d[2],m[9])+P(d[5],m[10])+P(d[8],m[11]))>>12));
    if(d==temporary)FUN_02065668(temporary,output);
    return 0;
}
