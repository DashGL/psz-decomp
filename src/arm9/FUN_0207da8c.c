// FUN_0207da8c @ 0x0207da8c (thumb)
// check: 2.0/sp2p3 target=0x1f0 candidate=0x1f4 words=999 exact_bytes=999 bad_relocs=5
// near: ndiff=999/124 size=0x1f0 vers=2.0/sp2p3 next="register coloring, local aggregate layout and instruction scheduling; displaced reloc diagnostics require recheck after layout match"
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-05. Initialize a randomized moving effect.
 * Four inputs: receiver, descriptor, parameter index, variant.
 * Software arithmetic helpers preserve their raw 32-bit register payloads. */
typedef struct {int x,y,z;} Vec312;
extern int UNK_020f2b38[],UNK_020f2b50[];extern unsigned short UNK_020f29fe[],UNK_020f2a04[];extern char UNK_0211c844[];
extern void FUN_020473e8(void *,void *,int),FUN_02035408(void *,int,int,int),FUN_020bc648(void *,void *);
extern unsigned int FUN_0207b860(void *,unsigned int),FUN_02009c84(int),FUN_0200923c(unsigned int,unsigned int),FUN_02009f00(unsigned int,unsigned int);
extern int FUN_02009c50(unsigned int);
void FUN_0207da8c(char *s,char *d,int index,int variant){
 int scale,variation,count,fixed,factor;unsigned int bits;
 Vec312 original,velocity,scaled;
 FUN_020473e8(s,d,0);scale=4096;variation=0;*(unsigned short *)(s+276)=0;*(int *)(s+280)=variant;
 if(index>=0 && index<3){
  scale=(UNK_020f2b38[index]<<12)/10;variation=(UNK_020f2b50[index]<<12)/10;
  if(!*(int *)(s+280))*(unsigned short *)(s+276)=UNK_020f29fe[index];
  else *(unsigned short *)(s+276)=UNK_020f2a04[index];
 }
 count=FUN_0207b860(UNK_0211c844,2)+8;*(int *)(s+72)=count**(int *)(s+76);
 { int rnd = FUN_0207b860(UNK_0211c844,variation); original=*(Vec312 *)(d+44); scale += rnd; }
 FUN_02035408(&velocity,(int)(((long long)scale*original.x+2048)>>12),(int)(((long long)scale*original.y+2048)>>12),(int)(((long long)scale*original.z+2048)>>12));
 *(Vec312 *)(s+80)=velocity;
 if(count>0)bits=FUN_0200923c(0x3f000000,FUN_02009c84(count<<12));
 else bits=FUN_02009f00(FUN_02009c84(count<<12),0x3f000000);
 fixed=FUN_02009c50(bits);FUN_020bc648(&factor,&fixed);
 FUN_02035408(&scaled,(int)(((long long)velocity.x*factor+2048)>>12),(int)(((long long)velocity.y*factor+2048)>>12),(int)(((long long)velocity.z*factor+2048)>>12));
 *(Vec312 *)(s+260)=scaled;*(int *)(s+272)=0;
}
