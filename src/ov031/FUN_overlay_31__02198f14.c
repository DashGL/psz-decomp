// flags: -O4,s
typedef unsigned long long U64;
extern void FUN_02040c0c(void *,int,int,int,int);extern void FUN_overlay_31__021998ec(void *);
extern U64 DAT_0211c844[3];
void FUN_overlay_31__02198f14(unsigned char *self){
    unsigned char *owner=*(unsigned char **)(self+4);unsigned char *state=*(unsigned char **)(self+8);U64 n;unsigned int r;
    *(unsigned short *)(self+12)=*(unsigned short *)(owner+68);
    *(unsigned short *)(self+14)=*(unsigned short *)(state+94);
    FUN_02040c0c(owner,*(int *)(owner+224),0,4096,0);
    if(*(unsigned short *)(self+12)!=*(unsigned short *)(self+14))FUN_overlay_31__021998ec(owner);
    n=DAT_0211c844[1]*DAT_0211c844[0]+DAT_0211c844[2];DAT_0211c844[0]=n;
    {unsigned int m=1;if(m==0)r=(unsigned int)(n>>32);else r=(unsigned int)(((n>>32)*m)>>32);}
    *(int *)(self+16)=(r+5)<<12;
}
