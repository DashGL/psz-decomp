// flags: -O4,s
extern void *FUN_overlay_11__021225b0(void);extern void FUN_overlay_11__021227d0(void *);
extern int DAT_02123940[];
int FUN_overlay_11__02121c80(int *self,short *output) { void *p;if(self[9]){int v;self[9]=0;v=DAT_02123940[*(signed char *)0x02156b58];self[2]=3;self[1]=v;return 1;}output[0]=12;output[1]=3;p=FUN_overlay_11__021225b0();if(p)FUN_overlay_11__021227d0(p);return 1; }
