// flags: -O4,s
extern volatile unsigned char *DAT_0211dcbc;
extern unsigned int FUN_020e4fd4(void **),FUN_020e4fac(void **);
unsigned int FUN_020e14cc(void **out){volatile unsigned char *p=DAT_0211dcbc;if(!p)return 0;*out=(void *)(p+0x648);p=DAT_0211dcbc;if(p[0x38d]==2||p[0x38d]==3)return FUN_020e4fd4(out);return FUN_020e4fac(out);}
