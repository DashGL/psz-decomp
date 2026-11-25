// flags: -O4,s
extern unsigned char *FUN_020b23d4(void *,int);
extern unsigned int FUN_020832b4(int);
enum { E0 = 0, E1 = 1 };
int FUN_020b2978(int *s,unsigned char *a,signed char *b){
    int i,n;
    unsigned int low,high;
    unsigned char *p;
    if((unsigned char)b[4]>=2)return 0;
    for(i=0;i<4;i++){
        if(b[16+i]>=0){
            p=FUN_020b23d4((void *)s[0],b[16+i]);
            if(p && p[4])return 0;
        }
    }
    if(a[6]!=a[7])return 0;
    if((a[0]&32)?E1:E0)return FUN_020832b4(100)<(unsigned int)((signed char *)s[4])[4];
    n=((int *)s[1])[21];
    if(n<=0)return 0;
    low=s[3];
    high=s[2];
    if(high<low)return 0;
    return FUN_020832b4(n)<high-low;
}
