// flags: -O4,s
extern char DAT_0211a51c[];
extern void FUN_0206dba8(void *);
extern int FUN_02084bf8(void *);
extern int FUN_02084cc0(void *);
extern int FUN_02085880(int);
extern void FUN_02051358(void *,int);
enum { E0 = 0, E1 = 1 };
void FUN_0206dafc(char *self){
    char *record=*(char **)self+(*(unsigned int *)(self+0x4c)*8);
    int which=*(signed char *)(record+4);
    if(which==-1){
        if(**(int **)(self+0x60)==0)FUN_0206dba8(self);
    }else{
        int index=*(short *)record+which;
        char *item=*(char **)(self+8)+index*12;
        if((!((*(signed char *)(item+5)&1) ? E1 : E0)) ? E1 : E0){
            *(int *)(self+0x54)=0;
            if(*(int *)(self+0x58) && FUN_02084bf8(DAT_0211a51c)){
                int local=FUN_02084cc0(DAT_0211a51c),i;
                for(i=0;i<=3;i++)if(i!=local && FUN_02085880(i)){*(int *)(self+0x54)=1;break;}
            }
            FUN_02051358(self,2);
        }
    }
    *(int *)(self+0x58)=0;
}
