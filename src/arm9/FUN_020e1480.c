// flags: -O4,s
extern volatile unsigned char *DAT_0211dcbc;
extern unsigned int FUN_020e4f54(void),FUN_020e4f3c(void);
unsigned int FUN_020e1480(void){volatile unsigned char *p=DAT_0211dcbc;if(!p)return 0;if(p[0x38d]==2||p[0x38d]==3)return FUN_020e4f54()+1;return FUN_020e4f3c()+1;}
