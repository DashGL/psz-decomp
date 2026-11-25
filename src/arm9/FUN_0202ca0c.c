// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x64, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA instruction-derived supporting runtime logic.
void FUN_0202ca0c(unsigned short *dest,const unsigned short *source,unsigned int carry,int count){int i=0;while(i<count){carry+=source[i];dest[i]=(unsigned short)carry;carry>>=16;if(carry==0)break;i++;}if(dest==source)return;i++;while(i<count){dest[i]=source[i];i++;}}
