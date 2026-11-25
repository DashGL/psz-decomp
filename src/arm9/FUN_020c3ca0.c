// FUN_020c3ca0 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_020c3ca0 @ 0x020c3ca0
// check: 2.0/sp2p3 target=0x64 candidate=0x64 words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
/* USA ROM reconstruction, 2026-11-04.
 * Initialize file-backed object and extract header fields only after open/read/signature checks.
 * Evidence: scratch/coverage-root/batch14/020c3ca0.txt.
 */
extern void FUN_02059cd4(void *);
extern int FUN_02059fb4(void *,const void *),FUN_0205a150(void *,void *,unsigned int),FUN_02003f38(const void *,const void *,unsigned int);
void *FUN_020c3ca0(unsigned char *self,const void *path){unsigned int header[6];*(unsigned int *)self=0x020fcb54;*(unsigned int *)(self+4)=0;*(unsigned int *)(self+8)=0;*(unsigned int *)(self+12)=0;FUN_02059cd4(self+16);if(FUN_02059fb4(self+16,path)){if(FUN_0205a150(self+16,header,24)>0){if(FUN_02003f38(header,(const void *)0x020fcb5c,4)==0){*(unsigned int *)(self+4)=header[4];*(unsigned int *)(self+8)=header[3];*(unsigned int *)(self+12)=header[5];}}}return self;}
