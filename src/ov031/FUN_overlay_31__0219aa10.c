// flags: -O4,s
typedef unsigned long long U64;typedef void (*Event)(void *,int);
extern void FUN_02040c0c(void *,int,int,int,int),FUN_02036f08(void *,unsigned);
extern U64 DAT_0211c844[3];
void FUN_overlay_31__0219aa10(int *self) {
    void **manager=*(void ***)0x02108c84;void *owner;U64 n;unsigned int r;
    if(manager&&manager[22]){void *child=manager[22];((Event)(*(unsigned **)child)[22])(child,8);}
    owner=(void *)self[1];FUN_02040c0c(owner,0,0,4096,0);FUN_02036f08(owner,1);
    n=DAT_0211c844[1]*DAT_0211c844[0]+DAT_0211c844[2];DAT_0211c844[0]=n;
    {unsigned int m=1;if(m==0)r=(unsigned int)(n>>32);else r=(unsigned int)(((n>>32)*m)>>32);}
    self[3]=(r+210)<<12;
}
