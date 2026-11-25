// flags: -O4,s
typedef unsigned long long U64;
extern U64 DAT_0211c844[3];
extern int FUN_0204dd2c(void *,int);extern unsigned char *FUN_02084568(void *);
int FUN_overlay_12__02126ec4(void *unused,unsigned *item,int value){
    if(FUN_0204dd2c(item,value)){
        if(((int)(item[2]&0xe00)>>9)==0){
            unsigned char *data=FUN_02084568(item);
            if(data){
                unsigned count=data[5]>>5;
                U64 n=DAT_0211c844[1]*DAT_0211c844[0]+DAT_0211c844[2];
                unsigned high;
                DAT_0211c844[0]=n;
                if(count==0) high=(unsigned)(n>>32);
                else high=(unsigned)(((n>>32)*count)>>32);
                item[2]=(item[2]&0xfffff1ff)|((high+1)<<9);
            }
        }
        return 1;
    }
    return 0;
}
