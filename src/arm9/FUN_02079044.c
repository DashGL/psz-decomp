// flags: -O4,s
extern int FUN_02038774(void *);
extern void FUN_02078f88(void *,int),FUN_02038e40(void *);
enum { E0 = 0, E1 = 1 };
void FUN_02079044(int *s){
    int *p=(int *)s[35];
    if(p){
        if(s[60] && s[58]==4){
            if(!((p[6]&1)?E1:E0))p[6]|=1;
        }else{
            if((p[6]&1)?E1:E0)p[6]&=~1;
        }
    }
    if(s[62]==1 && !FUN_02038774(s))s[62]=0;
    ++s[61];
    if(s[61]>300)FUN_02078f88(s,1);
    FUN_02038e40(s);
}
