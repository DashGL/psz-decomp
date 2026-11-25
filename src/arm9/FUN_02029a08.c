// flags: -O4,p -noThumb
// FUN_02029a08 @ 0x02029a08 (ARM, full extent 0x240)
// check: 2.0/sp2p3 target=0x240 candidate=0x238 words=999 exact_bytes=999 bad_relocs=3
// near: ndiff=999/144 size=0x240 vers=2.0/sp2p3 next="CRT scratch pointer allocation and scheduler-save stack placement; shifted calls/pools"
/* USA ROM reconstruction, 2026-11-06.
 * Private-key CRT operation using imported key components and eight working
 * limb regions in a ten-region allocation. Recombine residues, normalize the
 * signed result modulo the modulus, export exactly 48 bytes, and free storage.
 */
typedef unsigned int u32;typedef unsigned short u16;
extern void *(*UNK_02107068)(u32);extern void (*UNK_02107094)(void *);
extern void FUN_0202d6c4(void *,void *,int,u32),FUN_0202d4b8(void *,void *,void *,u32,void *),FUN_02028b30(u32),FUN_0202cab0(void *,void *,void *,u32),FUN_0202cc2c(void *,void *,void *,u32),FUN_0202c970(void *,void *,void *,u32),FUN_0202ca70(void *,u32),FUN_0202ced0(int,void *,void *,void *,u32,void *),FUN_0202d720(void *,void *,int,u32);
extern u32 FUN_02028ae4(void);extern int FUN_0202c940(void *,u32);
void FUN_02029a08(void *output,void *input,u32 *key){
 u32 count;u16 *a,*b,*c,*d,*e,*f,*g,*h;u32 old;
 if(!key||!key[0])return;
 count=(int)(key[0]<<1)/2+1;a=UNK_02107068(count*20);if(!a)return;
 b=a+count;c=b+count;d=c+count;e=d+count;f=e+count;g=f+count;h=g+count;
 FUN_0202d6c4(a,input,key[0],count);FUN_0202d6c4(b,(void *)key[7],key[6],count);FUN_0202d6c4(f,(void *)key[3],key[2],count);
 old=FUN_02028ae4();FUN_0202d4b8(d,a,b,count,f);
 FUN_0202d6c4(b,(void *)key[9],key[8],count);FUN_0202d6c4(f,(void *)key[5],key[4],count);FUN_0202d4b8(e,a,b,count,f);FUN_02028b30(old);
 FUN_0202cab0(a,d,e,count);FUN_0202d6c4(b,(void *)key[11],key[10],count);FUN_0202cc2c(c,a,b,count);
 FUN_0202d6c4(b,(void *)key[5],key[4],count);FUN_0202cc2c(a,c,b,count);FUN_0202c970(c,a,e,count);
 FUN_0202d6c4(b,(void *)key[1],key[0],count);
 if(FUN_0202c940(c,count)<0){FUN_0202ca70(c,count);FUN_0202ced0(0,c,b,g,count,h);FUN_0202cab0(g,b,g,count);}
 else FUN_0202ced0(0,c,b,g,count,h);
 FUN_0202d720(output,g,48,count);UNK_02107094(a);
}