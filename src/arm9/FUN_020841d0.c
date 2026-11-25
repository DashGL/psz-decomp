// flags: -O4,s
typedef struct {int x,y,z;} V;
struct Row24 {int a,b,c,d,e,f;};
extern char *DAT_02108c84;
extern const struct Row24 DAT_020f2f3c[];
extern void FUN_02034680(void *,void *);
void FUN_020841d0(char *s,int mode){
    V a,b;
    char *p;
    if(mode==0 && DAT_02108c84){
        p=*(char **)(DAT_02108c84+64+4**(int *)(DAT_02108c84+100));
        if(p){
            a=*(V *)(p+24);
            FUN_02034680(s+24,&a);
            b=*(V *)(p+36);
            FUN_02034680(s+36,&b);
        }
    }
    if(mode>=0 && mode<5){
        *(int *)(s+152)=mode;
        *(int *)(s+108)=DAT_020f2f3c[mode].a;
        *(int *)(s+112)=DAT_020f2f3c[mode].b;
        *(int *)(s+116)=DAT_020f2f3c[mode].c;
        *(int *)(s+136)=DAT_020f2f3c[mode].d;
        *(int *)(s+140)=DAT_020f2f3c[mode].e;
        *(int *)(s+144)=DAT_020f2f3c[mode].f;
    }
}
