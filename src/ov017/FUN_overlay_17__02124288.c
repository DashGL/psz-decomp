// flags: -O4,s
typedef unsigned long long U64;
extern U64 DAT_0211c844[3];
extern unsigned int FUN_overlay_17__02123eec(void *);
extern void FUN_overlay_17__02123df4(void *,unsigned int);
void FUN_overlay_17__02124288(void *p) {
    unsigned int bound=FUN_overlay_17__02123eec(p),value;
    U64 n=DAT_0211c844[1]*DAT_0211c844[0]+DAT_0211c844[2];
    DAT_0211c844[0]=n;
    if(bound==0) value=(unsigned int)(n>>32);
    else value=(unsigned int)(((n>>32)*bound)>>32);
    FUN_overlay_17__02123df4(p,value);
}
