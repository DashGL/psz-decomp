// flags: -O4,s
extern void *FUN_overlay_18__021224c4(void);extern void FUN_overlay_18__021226e4(void *);
extern int DAT_02123974[];
int FUN_overlay_18__02122864(int *self,short *output) { void *p;if(self[9]){int v;self[9]=0;v=DAT_02123974[*(signed char *)0x02124564];self[2]=3;self[1]=v;return 1;}output[0]=12;output[1]=3;p=FUN_overlay_18__021224c4();if(p)FUN_overlay_18__021226e4(p);return 1; }
