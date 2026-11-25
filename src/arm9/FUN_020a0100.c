// flags: -O4,s
extern void *DAT_02108d04;
extern void *FUN_020856bc(int);
extern void FUN_0203d1ec(void *),FUN_020959f8(void *,int),FUN_02030da8(void *,void *),FUN_020bce3c(void *);
enum { E0 = 0, E1 = 1 };
void FUN_020a0100(char *s){
    if(!(*(int *)(s+72)&1) && !((**(unsigned char **)(s+76)&1) ? E1 : E0)){
        int i;
        signed char d[16];
        void *actor;
        *(int *)(s+72)|=1;
        if(DAT_02108d04)FUN_0203d1ec(DAT_02108d04);
        for(i=0;i<4;i++){
            actor=FUN_020856bc(i);
            if(actor)FUN_020959f8(actor,0);
        }
        FUN_02030da8(d,s);
        d[4]=1;d[5]=0;d[6]=0;d[7]=0;
        d[8]=d[0];d[9]=d[1];d[10]=d[2];d[11]=((unsigned char *)d)[3];
        d[12]=0;d[13]=0;d[14]=0;d[15]=0;
        d[6]=5;d[7]=10;d[4]=3;
        FUN_020bce3c(d+4);
    }
}
