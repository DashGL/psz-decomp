// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x5c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
// USA instruction-derived supporting runtime logic.
extern void FUN_020656b8(void *,unsigned int,unsigned int);
void FUN_0202d6c4(unsigned short *dest,unsigned int source,int length,unsigned int words){FUN_020656b8(dest,0,words*2);source+=(unsigned int)length-1;while(length>1){unsigned int low=*(unsigned char *)source,high=*(unsigned char *)(source-1);*dest++=(unsigned short)(low+(high<<8));length-=2;source-=2;}if(length>0)*dest=*(unsigned char *)source;}
