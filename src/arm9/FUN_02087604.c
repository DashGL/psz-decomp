// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int FUN_020c4ec8(void);extern void *FUN_0200d16c(void);extern void FUN_0200d3a4(void *,int,int);
void FUN_02087604(int value){if(*(int *)0x020fa984<0){int code=FUN_020c4ec8();switch(code){case 4:case 6:case 104:case 105:*(int *)0x020fa984=value?E0:E1;break;}if(*(int *)0x020fa984>=0)FUN_0200d3a4(FUN_0200d16c(),15,1);}}
