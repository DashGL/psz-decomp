// flags: -O4,s
// FUN_overlay_4__0212335c @ 0x0212335c (0xb0, Thumb)
// Initialize receiver and global records, construct eighty global and seven embedded entries, then emit feedback.
extern char data_021952f4[],data_02195304[];extern void *FUN_0203955c(void *);extern void FUN_overlay_4__0212331c(void *),FUN_overlay_4__02123348(void *),FUN_020c193c(unsigned int,unsigned int,int,unsigned int,int);
void *FUN_overlay_4__0212335c(int *self){int i;self[0]=-1;self[50]=0;self[51]=1;self[52]=0;self[53]=7;self[54]=0;self[55]=0;self[56]=0;self[57]=0;self[58]=0;self[59]=0;self[60]=0;self[61]=0;self[62]=0;FUN_0203955c(data_021952f4);for(i=0;i<80;i++)FUN_overlay_4__0212331c(data_02195304+i*40);for(i=0;i<7;i++)FUN_overlay_4__02123348((char *)self+4+i*28);FUN_020c193c(0,4,0,0,-1);return self;}
