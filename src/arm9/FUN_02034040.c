// flags: -O4,s
struct Item28 {
    char pad[24];
    unsigned short b0 : 1;
    unsigned short b1 : 1;
    unsigned short rest : 14;
    unsigned short pad2;
};
extern int FUN_02037d4c(void *,unsigned int,unsigned int);
extern void FUN_020338e4(void *);
extern void FUN_02037ac0(void *,unsigned int);
extern void FUN_02050c08(void *);
extern void FUN_02034138(void *);
extern void FUN_020340d4(void *);
void FUN_02034040(char *s){
    int state=*(int *)(s+124);
    if(state<1){
        int i;
        *(int *)(s+120)=state;
        if(*(void **)(s+4)){
            for(i=0;i<*(unsigned short *)(s+16);i++){
                struct Item28 *p=(struct Item28 *)(*(char **)(s+4)+28*i);
                if(p){
                    if(p->b1){
                        p->b1=0;
                        FUN_02037d4c(s,(unsigned short)i,p->rest);
                    }else if(((volatile struct Item28 *)p)->b0){
                        FUN_020338e4(p);
                        FUN_02037ac0(s,(unsigned short)i);
                    }
                }
            }
        }
        if(*(void **)(s+12))
            for(i=0;i<*(unsigned short *)(s+20);i++){
                char *p=*(char **)(s+12)+16*i;
                if(p)FUN_02050c08(p);
            }
        FUN_02034138(s);
        FUN_020340d4(s);
    }else *(int *)(s+124)=*(int *)(s+120);
}
