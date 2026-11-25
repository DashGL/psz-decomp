// flags: -O4,s
extern int *DAT_0211a61c;
enum E { E0 = 0, E1 = 1 };
int FUN_02081080(char *s,int mode){
    if(mode==0){
        if(*(int *)(s+80)&4)return 1;
    }else if(mode==1){
        if(*(int *)(s+80)&8)return 1;
    }else if(mode==2){
        if((**(unsigned char **)(s+72)&2)?E1:E0)return 1;
    }else if(mode==3){
        enum E b;
        if((**(unsigned char **)(s+72)&8)?E1:E0)return 1;
        b=E0;
        if(DAT_0211a61c && *DAT_0211a61c==3)b=E1;
        if(b)return 1;
    }else if(mode==4){
        if((**(unsigned char **)(s+72)&8)?E1:E0)return 1;
    }
    return 0;
}
