// flags: -O4,s
extern char *DAT_0211a52c;
int FUN_020863d0(int key){int result=0;if(DAT_0211a52c){int count=*(short *)(DAT_0211a52c+604);if(count>0){int i;for(i=0;i<8;i++){char *r=DAT_0211a52c+688+12*i;if(*(int *)r==key)result=(((int)((signed char *)r)[9]<<12)/count)+4096;}}}return result;}
