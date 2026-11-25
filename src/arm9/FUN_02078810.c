// flags: -O4,s
extern char DAT_0211a51c[];
extern int DAT_0211a3b8[];
extern int FUN_02084c2c(void *),FUN_02073974(int *,int *,unsigned short *),FUN_0209ce58(int);
extern void FUN_020787c0(void *),FUN_0209ccd4(void *);
enum { E0 = 0, E1 = 1 };
struct D {
    int f0;
    unsigned short f4;
    unsigned short f6;
    int f8;
    int fc;
    char f10;
    char f11;
    char f12;
    char f13;
    unsigned char b0:1, b1:1, b2:6;
    char f15;
    short f16;
};
int FUN_02078810(void){
    int mode,level,id;
    struct D d;
    unsigned short key;
    if(!FUN_02084c2c(DAT_0211a51c))return 0;
    if((DAT_0211a3b8[5]>=0)?E1:E0)return 0;
    mode=0;
    level=-1;
    key=0;
    if(!FUN_02073974(&mode,&level,&key))return 0;
    if(mode<0 || mode>=3)mode=0;
    if(level<=0 || level>=9)level=1;
    FUN_020787c0(&d);
    id=110000+100*level;
    d.fc=id;
    d.f10=0;
    d.f11=mode;
    d.f4=key;
    d.b1=1;
    d.f15=FUN_0209ce58(id);
    FUN_0209ccd4(&d);
    return 1;
}
