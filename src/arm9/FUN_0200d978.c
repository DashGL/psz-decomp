// flags: -O4,s -noThumb
extern char DAT_02101e3c[];
extern char DAT_02101e30[];
extern char DAT_02101e48[];
extern char DAT_02102288[];
extern unsigned int FUN_02011974(void *,unsigned int);
extern unsigned int FUN_020119b8(void *,void *);
unsigned int FUN_0200d978(void){
    int i;
    char *node,*owner;
    unsigned int result;
    FUN_02011974(DAT_02101e3c,20);
    FUN_02011974(DAT_02101e30,20);
    node=DAT_02101e48;
    for(i=0;i<16;i++,node+=68){
        *(unsigned char *)(node+44)=0;
        *(unsigned char *)(node+60)=(unsigned char)i;
        FUN_020119b8(DAT_02101e30,node);
    }
    owner=DAT_02102288;
    for(i=0;i<32;i++,owner+=36){
        FUN_02011974(owner,12);
        result=FUN_02011974(owner+12,0);
        *(unsigned char *)(owner+32)=127;
        *(unsigned int *)(owner+24)=1;
        *(unsigned int *)(owner+28)=0;
    }
    return result;
}
