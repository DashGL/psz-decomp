// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA record and vector operations; alias-sensitive load/store order retained.
unsigned int FUN_0202cb58(unsigned int out,unsigned int in,unsigned int borrow,int count){int i=0;unsigned int value;if(count>0){do{value=(unsigned int)*(unsigned short *)(in+2*(unsigned int)i)-borrow;borrow=(value>>16)&1;*(unsigned short *)(out+2*(unsigned int)i)=(unsigned short)value;if(!borrow)break;++i;}while(i<count);}if(out==in)return out;++i;for(;i<count;++i)*(unsigned short *)(out+2*(unsigned int)i)=*(unsigned short *)(in+2*(unsigned int)i);return out;}
