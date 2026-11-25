// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA cleanup and descriptor adapters; ABI/extent evidence in root batch253.
extern void FUN_0202ca0c(unsigned short *,const unsigned short *,unsigned,int);void FUN_0202ca70(unsigned short *p,int count){int i;for(i=0;i<count;i++)p[i]=(unsigned short)~p[i];FUN_0202ca0c(p,p,1,count);}
