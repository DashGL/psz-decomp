// flags: -O4,s -noThumb
extern void FUN_02066a94(void *);
void FUN_02056b04(int event,unsigned int unused,int enabled){char *s=(char *)0x021116a0;void *p;if(event!=11||!enabled)return;p=*(void **)(s+260);*(unsigned int *)(s+276)&=~32u;FUN_02066a94(p);}
