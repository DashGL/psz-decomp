// flags: -O4,s
extern char DAT_02108d1c[];
extern const char DAT_020f8ac0[], DAT_020f8ac8[], DAT_020f8ad4[], DAT_020f8adc[], DAT_020f8ae8[], DAT_020f8af0[], DAT_020f8afc[], DAT_020f8b04[];
extern void *DAT_020f872c[], *DAT_020f88dc[], *DAT_020f8654[], *DAT_020f8804[];
#pragma thumb off
extern int FUN_020038ec(void *,unsigned int,const char *,...);
#pragma thumb on
void *FUN_0203ee1c(void *unused,signed char *key,int index){
    if(index>=0 && index<54){
        if(key[34]==2 && key[32]==0){
            if(key[33]==0){
                FUN_020038ec(DAT_02108d1c,64,DAT_020f8ac8,DAT_020f872c[index],DAT_020f8ac0);
                return DAT_02108d1c;
            }
            FUN_020038ec(DAT_02108d1c,64,DAT_020f8adc,DAT_020f88dc[index],DAT_020f8ad4);
            return DAT_02108d1c;
        }
        if(key[33]==0){
            FUN_020038ec(DAT_02108d1c,64,DAT_020f8af0,DAT_020f8654[index],DAT_020f8ae8);
            return DAT_02108d1c;
        }
        FUN_020038ec(DAT_02108d1c,64,DAT_020f8b04,DAT_020f8804[index],DAT_020f8afc);
        return DAT_02108d1c;
    }
    return 0;
}
